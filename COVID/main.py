from flask import Flask,render_template,json
import urllib.request,urllib.parse,urllib.error
from urllib.request import urlopen
import ssl,requests
from bs4 import BeautifulSoup

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

app=Flask(__name__)

@app.route("/")
def main():
    return real()

def real():
    r=requests.get("https://api.covid19api.com/summary",timeout=30)
    if r.status_code==200:
        #data= urlopen("https://api.covid19api.com/summary",context=ctx).read()
        data=json.loads(r.text)
        #soup = BeautifulSoup(data, "html.parser")
        #data = json.dumps(data)
        #info = json.loads(data)

        info =json.dumps(data)

        stuff=['NewConfirmed','TotalConfirmed','NewDeaths','TotalDeaths','NewRecovered','TotalRecovered']

        info1= json.loads(info)

        final =json.dumps(info1["Countries"])
        final = json.loads(final)
        #return json.dumps(final)
        return render_template('index.html',stuff=stuff,s="Global" ,c="Country",final=info1,info=final,dict=dict())
    else:
        return json.dumps("Error in response",r.status_code)




if __name__ == '__main__':
    app.run(debug=True);
