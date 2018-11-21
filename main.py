
from flask import Flask,jsonify,request,render_template

app = Flask(__name__)


load_status = {'light':'','fan':'','ac':'','ac2':''}

@app.route('/')
def homeGET():
    return render_template('home.html',load_status=load_status)


@app.route('/set',methods=['GET'])
def hello_world():
    global load_status

    for load in load_status.keys():
        load_status[load] = ''
    for req in request.args:
        load_status[req] = 'checked'
    print(load_status)
    return render_template('home.html',load_status = load_status)


@app.route('/get',methods=['GET'])
def new_world():
    temp = ''
    for k in load_status.keys():
        if len(load_status[k]) >0:
            temp = temp + "~{}~".format(k)
    return temp



