from flask import Flask,render_template
app=Flask(__name__)

@app.route("/")
def main():
    return render_template('index.html')
@app.route("/showOnclick1")
def showOnclick1():
    return render_template('sahyadri.html')
@app.route("/showOnclick")
def showOnclick():
    return render_template('ST.Joseph.html')
@app.route("/showOnclick2")
def showOnclick2():
    return render_template('mite.html')
@app.route("/showOnclick3")
def showOnclick3():
    return render_template('canara.html')


if __name__ == '__main__':
    app.run(debug=True);
