#define led1 1
#define led2 2
#define led3 3
#define led4 4
int sensor = A0;
void setup() {
  Serial.begin(9600);
 

}

void loop() {
  int val = analogRead(sensor);
  float volt = val * 5.0 / 1024.0;
  float temp = volt * 100.0;
  Serial.println(temp);
  delay(1000);
  if (temp<20){
    digitalWrite(led1,HIGH);
    if (temp<30){
       digitalWrite(led2,HIGH);
       if (temp<40){
        digitalWrite(led3,HIGH);}
        else{
          digitalWrite(led3,HIGH);
          digitalWrite(led4,HIGH);
          }
    }
       }
    }
    
  


