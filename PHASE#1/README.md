AIM:= Design a system that automattically turns on the light inside an almirah whenever it is open(irrispective of day/night)
CIRCUIT DIGRAM:= seperately upload on the file please refer to the main starting of this file.
THEORY:=
LEARNING cum why such Concept used:= 
About sensor used:= PIR motion sensor is passive infrared sensor that is being used in the circuit can tell something nearby moves.
                    This sensor detects the pattern ofinfrared energy in its surroundings.If the pattern changes,
                    the sensor outputs a high signal.
                    PIR sensor detects a human being moving around within approximately 10m from the sensor. 
                    This is an average value, as the actual detection range is between 5m and 12m.
About relay used:= A relay module is a very useful component as it allows audrino or other microcontrollers to cvontrol big loads.
It is necessary of making led LOW when relay is HIGH because it can burn the led cause of its high energy supply.
Precautions:= make sure the connections are made proper.
              first check all the connections and then attach the audrino with the supply and then execute code on it.
OUTCOMES/WORKING:= initially, as there is no moment,the pir sensor doesn't detect anything and the outpin stays LOW.
                   as the door of almirah is opened the pir senses the moment and detects the change in pattern of infrared radiations around it.
                   the pin outpin becomes HIGH.as it becomes HIGH it will activate the relay by making the relay pin LOW
                   (as the relay module is active LOW module).
                   This will turn the light ON or u can say HIGH aslong as there is movement inside the almirah in front of the sensor.

