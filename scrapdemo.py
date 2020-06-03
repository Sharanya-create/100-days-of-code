#inorder to download and run the program there must be beautifulSoup4 installed and the bs4 directory containing it must be placed in the same directory where this python program is saved
#inorder to install beautifulsoup4 run command pip install beaitifulsoup4 in the command prompt/terminal
import urllib.request,urllib.parse,urllib.error
from urllib.request import urlopen
from bs4 import BeautifulSoup
import ssl,sys

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE
done=0

print('****Welcome to scrapper program****')
c=input('If you began the execution bymistake press 0 if not press 1')
c= int(c)
if c:
    url = input('Enter - ')
    URL=url
    print('Decide you want to continue or changed mind? Exit?')
else:
    print("Terminated")
    sys.exit()
def go(url):
    html = urlopen(url, context=ctx).read()
    soup = BeautifulSoup(html, "html.parser")
    inpt = input('Enter the tag')
    t = inpt.split()
    tags = soup(t)
    print("Want to get the pure text or source code?")
    which=input('If text press:1 else press:0')
    which = int(which)
    if len(tags)>0:
        for tag in tags:
            if which==1:
                done=1
                #print(done)
                print(tag.text)


            else:
                done=1
                print(tag)
    else:
        print('such a tag doesnt exist in the website')
        done=1
    main(done,url)
def main(done,URL):
    while True:
        #print(done)
        ch=input('Scrape or Exit? Enter 1 or 0 for respective choices')
        ch=int(ch)
        if ch:
            if done:
                print("Want to scrape same website?, If yes press 1 else 0");
                choice=int(input(''))
                if choice:
                    go(URL)
                url=input('Enter a new link')
                go(url)
            else:
                go(URL)
        else:
            sys.exit()
main(done,URL)
