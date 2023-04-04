#include <SoftwareSerial.h>
 
//define for temperature sensor
int sensorInput;
int tempsensePin=A4;
int temp;
int ledPin_temp =7;
int threshold_temperature=15;
 
//define eye blink senaor
int BUZZER = 13;
 
//define alcohol sensor
const int MQ3=0;
int value;

void setup() {
 Serial.begin(9600);
 
//setup for temperature
pinMode(tempsensePin, INPUT);
pinMode(sensorInput,INPUT);
pinMode(ledPin_temp, OUTPUT);
 
//setup for eye blink sensor
pinMode (BUZZER, OUTPUT);
 
//setup for alcohol sensor
pinMode(MQ3, INPUT);
 
digitalWrite(BUZZER,LOW);
digitalWrite(ledPin_temp,LOW);
}
 
void loop() {
 
 //temperature sensor detection and prevention by  red light on
  sensorInput = analogRead(A4);
  temp = sensorInput*0.048828125;
 
 
 //alcohol sensor detection
  value= analogRead(MQ3);
  Serial.print("alcohol concentration is: ");
  Serial.println(value);

  // Check if Bluetooth module has received a signal
while(Serial.available() > 0 || temp>threshold_temperature || value>130) {
  // Read the incoming signal from the Bluetooth module
  int bluetoothSignal = Serial.read();
  // Check if the signal is equal to 1
  sensorInput = analogRead(A4);
  temp = sensorInput*0.048828125;
 
 
 //alcohol sensor detection
  value= analogRead(MQ3);
  Serial.print("alcohol concentration is: ");
  Serial.println(value);
  if(value>130)
  {
    digitalWrite(BUZZER, HIGH);
    delay(200);
  }
  else{
    digitalWrite(BUZZER, LOW);
  delay(200);
  }
  
  if (bluetoothSignal == '1') {
    // Turn on the buzzer
    digitalWrite(BUZZER, HIGH);
    delay(200);
  }
  else{
    digitalWrite(BUZZER, LOW);
  delay(200);
  }

  if (temp>threshold_temperature)
  {
   digitalWrite(ledPin_temp,HIGH);
   Serial.print("Temperature: ");
   Serial.print(temp);
   Serial.println("C"); 
   Serial.print('\n');
   Serial.print("Warning!!!");
   Serial.print('\n');
   Serial.print("Temprature is High");
   Serial.print('\n');
   //delay(2000);
  }
else
  {
  digitalWrite(ledPin_temp,LOW);
  Serial.print("Temp is fine");
  Serial.print('\n');
  //delay(1000);
  }
}

  /*
if(statusSensor == 1)
  {
    digitalWrite(BUZZER, LOW);
  }
else
{
 digitalWrite(BUZZER, HIGH);
}
   */
 //delay(500);
 
}