//transmission recepteur IR 

//Wiring :
/*
 
works on mega
 
 S      -> pin 11
 Middle -> 5v
 -      -> GND
 
 */



#include <IRremote.h>

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {

  //send the incoming data over the serial port

  if (irrecv.decode(&results)) {
    Serial.print(char(results.value));
    irrecv.resume(); // Receive the next value    
  }

}


