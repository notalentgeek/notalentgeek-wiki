//Transmission IR - Emetteur

//by Yoruk


/*
 
 Wiring : IR led  +  100 ohms resistor  between pin 3 arduino and GND
 DTH11 wiring  : S : pin 2   middle 5v  - GND 
 
 
 */


//setting the temperature sensor. Comment if you don't need it.

#include <dht11.h>
dht11 DHT11;
#define DHT11PIN 2


String AEnvoyer = "";

int incomingByte = 0;	// for incoming serial data


#include <IRremote.h>
IRsend irsend;

void setup()
{
  Serial.begin(9600);
  int i=0;
}

void loop() {

  //get the temperature. Comment the 6 next lines if you don't have the sensor.
  int chk = DHT11.read(DHT11PIN);

  String AEnvoyer = "Temperature (C) : ";  
  AEnvoyer += (DHT11.temperature);

  AEnvoyer += "   Humidity (%) : ";
  AEnvoyer +=  (DHT11.humidity);


  //uncomment the following line to sent a demo string :
  //String AEnvoyer = "Hi Instructables ! ";  


  //Serial.println( AEnvoyer);

  //send the characters over the IR line
  for (int i = 0; i < AEnvoyer.length(); i++){

    irsend.sendRC5(AEnvoyer.charAt(i), 12); 
    delay(20);

    //Serial.print("TX:");
    //Serial.println(AEnvoyer.charAt(i));

  }

  irsend.sendRC5(13, 12);  //send a RETURN
  irsend.sendRC5(10, 12); 

  //wait 1.5 s for the next measure
  delay(1500);

} 







