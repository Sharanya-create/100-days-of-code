from flask import Flask , render_template , json , request,flash,url_for,redirect,session
from flaskext.mysql import MySQL
from flask_mysqldb import MySQL
import MySQLdb.cursors
import mysql.connector
#from werkzeug import generate_password_hash, check_password_hash


app=Flask(__name__)
app.secret_key = 'random string'
scrpt=0
mysql = MySQL()
#MYSQL=Mysql()

# MySQL configurations
app.config['MYSQL_USER'] = 'root'
app.config['MYSQL_PASSWORD'] = ''
app.config['MYSQL_DB'] = 'bucketlist'
app.config['MYSQL_HOST'] = '127.0.0.1'
mysql.init_app(app)



name=""
signedin=0
l=list()


@app.route("/")
def main():
    if  session.get('loggedin'):
        return render_template('home.html',l=l,deleted=deleted,scrpt=scrpt,name=name)

    else:
        return render_template('index.html')



@app.route('/showSignUp')
def showSignUp():
    return render_template('signup.html')


c=0
deleted=0

@app.route('/signUp',methods=['POST'])
def signUp():
    global c

    # read the posted values from the UI
    _name = request.form['inputName']
    _email = request.form['inputEmail']
    _password = request.form['inputPassword']

    # validate the received values
    if _name !="" and _email != "" and _password != "":
        conn=mysql.connection.cursor(MySQLdb.cursors.DictCursor)
        #cursor=conn.cursor()
        conn.callproc('sp_createUser',(_name,_email,_password))
        data = conn.fetchall()
        if len(data) == 0:
             mysql.connection.commit()
             c=1
             #flash("Signed up")
             #return redirect(url_for('register'))
             #return json.dumps(c)
             return json.dumps("Signed up!")

            #return json.dumps("user created!!")


        else:
            return json.dumps("User already exists")

    else:
        return json.dumps({'html':'<span>Enter the required fields</span>'})


@app.route('/signIn', methods=['POST'])
def do_admin_signIn():
    global scrpt
    _name = request.form['inputName']

    _password = request.form['inputPassword']

    # validate the received values
    if _name != "" and _password != "" and request.method == 'POST' :
        con = mysql.connection.cursor(MySQLdb.cursors.DictCursor)
        con.execute('SELECT * FROM tbl_user WHERE user_name = %s AND user_password = %s', (_name, _password,))
        # Fetch one record and return result
        account = con.fetchone()
        if account:
            # Create session data, we can access this data in other routes
            session['loggedin'] = True
            session['id'] = account['user_id']
            session['username'] = account['user_name']
            global name
            global signedin
            name=session['username']
            signedin=1;
            return main()

        else:
            return json.dumps('Invalid Username/password')
    else:
        return json.dumps('Enter all fields!!')

@app.route("/signout")
def signout():
    session['loggedin'] = False
    l.clear()
    deleted=0
    signedin=0
    global scrpt
    scrpt=0
    return main()
@app.route("/signiin")
def signiin():
    return render_template('signin.html')
@app.route("/signin")
def signin():
    if c ==1:
        return render_template('signin.html')

@app.route("/handle",methods=["POST"])
def handle():
    cur=mysql.connection.cursor()
    goal=request.form['myInput']
    global deleted

    deleted=0;
    global scrpt
    scrpt=1
    sql="INSERT INTO details (username,goal1) VALUES (%s,%s)"
    val=(session['username'],goal,)
    cur.execute(sql,val)

    #itter=itter+1
    mysql.connection.commit()
    return render_template('home.html',deleted=deleted,scrpt=scrpt,name=name)

    #mycursor = mydb.cursor()
@app.route("/display")
def display():
    global deleted
    global l
    


    cur=mysql.connection.cursor()
    cur.execute("SELECT * FROM details")
    result=cur.fetchall()
    for x in result:
        for i in x:
            if session['username']==i:
                l.append(x[1])
    return render_template('home.html',l=l,deleted=deleted,scrpt=scrpt,name=name)
@app.route('/invalid')
def invalid():
    return render_template('invalid.html')
@app.route('/delete')
def delete():
    global deleted
    deleted =1
    global scrpt
    scrpt=1
    cur=mysql.connection.cursor()
    query="DELETE FROM details WHERE username=%s"
    val=(session['username'],)
    cur.execute(query,val)
    mysql.connection.commit()
    l.clear()
    return render_template('home.html',deleted=deleted,l=l,signedin=signedin,name=name)
@app.route('/lclear')
def lclear():
    l.clear()
    global script
    scrpt=0
    return render_template('home.html',deleted=deleted,l=l,name=name)







if __name__=="__main__":
    app.run(debug=True);
