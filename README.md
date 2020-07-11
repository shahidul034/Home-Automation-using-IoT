# Home-Automation-using-IoT
![alt text](https://github.com/shahidul034/Home-Automation-using-IoT/blob/master/testing_files/image001.png)

Course No:CSE 3104

Course Name: Peripherals and Interfacing Laboratory

Completed By:
#### MD. Shahidul Salim (Shakib)

#### Roll:1507034

Department of Computer Science & Engineering

Khulna University of Engineering & Technology 


## Introduction
In our daily life, we use much equipment. Those are very important to us.sometimes for our carelessness, we forget to control them. For this reason, we need to control our light, fan, AC and other electronic devices. If we forget to off your electronic device, it can help you to control those devices and electronic thing. Besides, They have one security system which helps you, if anyone tries to steal your system.they Have a notification system if you want to notify your friend using this device it helps you to notify him. They have a web-based user interface and you can access your system using your mobile or computer or any electronic system which have internet.

## Scope
People who are always in a hurry, forget to control their components. Or people who stay in a joint family, often it is not possible to control their room. So, in this box, they can simply control their room and If any of his family forget to off their electronic components. It helps him to control those devices from outside from.

## Methodology
The equipment used in this project are

### 1. PC with Arduino Software
A PC has been used as a power source and an Arduino software in used for the
coding section.

### 2.Arduino Uno

Arduino is an open source computer hardware and software company, project, and user community that designs and manufactures single-board microcontrollers and microcontroller kits for building digital devices and interactive objects that can sense and control objects in the physical and digital world. The project's products are distributed as open-source hardware and software, which are licensed under the GNU Lesser General Public License (LGPL) or the GNU General Public License (GPL),[1] permitting the manufacture of Arduino boards and software distribution by anyone. Arduino boards are available commercially in preassembled form, or as do-it-yourself (DIY) kits.
Arduino board designs use a variety of microprocessors and controllers. The boards are equipped with sets of digital and analog input/output (I/O) pins that may be interfaced to various expansion boards or Breadboards (shields) and other circuits. The boards feature serial communications interfaces, including Universal Serial Bus (USB) on some models, which are also used for loading programs from personal computers. The microcontrollers are typically programmed using a dialect of features from the programming languages C and C++. In addition to using traditional compiler toolchains, the Arduino project provides an integrated development environment (IDE) based on the Processing language project.
![alt text](https://github.com/shahidul034/Home-Automation-using-IoT/blob/master/testing_files/image002.jpg)
                                     Fig 1: Arduino Block Diagram
                                     
### 3.Sonar Sensor
Sonar’s most popular and primary use is to be able to "see" underwater. Sonar usesthepropagation of sound to detect objects. Since sound waves travel farther in water thanthey do in air, sonar is preferred over other types of sensors like radar for this reason.Even though it's preferred for underwater sensing, sonar can still be used in air;however, there exists the small chance of interference, which we might see whenmeasuring distance.
There are two types of sonar:passive sonar and active sonar. Active sonar has anemitter and a detector:depending on the time that the signal takes to come back tothe sonar,it can detect the range or distance of an object and its orientation. It alsodetects the strength of a signal to determine how much time it took to be pickedup by the receiver. Passive sonars are used to pick up signals from vessels andother marine life like whales and submarines. Passive sonars don't have emitters;they justreceivesound waves coming towards them.

### 4.NodeMCU(Esp8266)
We will connect the Esp8266 to the Wi-Fi router using SSID and password of our Home network Wifi , where the esp8266 connect to our wifi and create a webserver, which can be accessed by looking through the serial Monitor of the Arduino window or you can also log into your Wifi router and check for the list of clients connected to your Wi-Fi router.

### 5.Buzzer
This is used for creating alarm


### 6.Breadboard
Allcomponents are implemented in this board
Working Principle


![alt text](https://github.com/shahidul034/Home-Automation-using-IoT/blob/master/testing_files/image003.jpg)
First of all, we make a user interface which controls the other device.we give input using this UI


We use nodeMCU as a wifi module.

![alt text](https://github.com/shahidul034/Home-Automation-using-IoT/blob/master/testing_files/image004.jpg)


we use pythonanywhere as a server. we sent our data in pythonanywhere which receive those data and process them and give output according to user interface input.

![alt text](https://github.com/shahidul034/Home-Automation-using-IoT/blob/master/testing_files/image005.jpg)

## circuit diagram

![alt text](https://github.com/shahidul034/Home-Automation-using-IoT/blob/master/testing_files/image006.jpg)
Fig 1: Total System Configuration

![alt text](https://github.com/shahidul034/Home-Automation-using-IoT/blob/master/testing_files/image007.jpg)  
Fig 2 : Outer Look

![alt text](https://github.com/shahidul034/Home-Automation-using-IoT/blob/master/testing_files/image008.jpg)  
Fig 3: Inner Look

## Future Work

This project will be updated so that anyone can add any device using the relay. Do not need any extra circuit for this system to add any device.

## Conclusion
The use of this box will provide the user more flexibility to control their components and safety. Further updated versions will be more helpful.

## References

1. http://www.instructables.com/id/Quick-Start-to-Nodemcu-ESP8266-on-Arduino-IDE/project%2F&usg=AOvVaw1seWiESGbVEkUcxW0Uip_q

2.https://www.google.com/search?q=nodemcu+picture&safe=active&tbm=isch&source=iu&ictx=1&fir=0tT8aaSKhVkObM%253A%252CwdJBArKAabJa4M%252C_&usg=__j384nWHlbVGjaTMtRrnckhi-wc4%3D&sa=X&ved=0ahUKEwi9q5jJ4vrbAhUKfX0KHafZAiIQ9QEIKzAB#imgdii=Gz1SXXq_qJmaRM:&imgrc=TvY9nbx7atekxM: 

3.https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=8&ved=0ahUKEwjdw_Xct-nbAhXSZt4KHbjKDBgQFghTMAc&url=http%3A%2F%2Fwww.electronics-lab.com%2Falarm-system-powered-arduino%2F&usg=AOvVaw1lYl1TvfWJfURpWazUj2Mu

4.https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=11&cad=rja&uact=8&ved=0ahUKEwjdw_Xct-nbAhXSZt4KHbjKDBgQFghwMAo&url=https%3A%2F%2Fcreate.arduino.cc%2Fprojecthub%2FIoannisD%2Fultrasonic-lock-f6dd69&usg=AOvVaw12wwnj4-hixz1-xGZpmYSa




