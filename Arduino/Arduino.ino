//infinite Xpro 
//This code is to control the speed of a DC motor by a potentiometer using l298n driver
//We read the value from the analog input, calibrate it then inject to the module

int G_LED = 10;        //Declaring where our module is wired  
int FAN = 9;


void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);    
  Serial.begin(9600);
}



void loop() {

  int data= Serial.read();
  if (data=='0'){
    analogWrite(G_LED,0);
    digitalWrite(FAN,LOW);
    
   }if (data=='1'){
    analogWrite(G_LED,10);
    digitalWrite(FAN,LOW);
   }if (data=='2'){
    analogWrite(G_LED,50);
    digitalWrite(FAN,LOW);
   }if (data=='3'){
    analogWrite(G_LED,100);
    digitalWrite(FAN,LOW);
   }if (data=='4'){
    analogWrite(G_LED,180);
    digitalWrite(FAN,LOW);
   }if (data=='5'){
    analogWrite(G_LED,255);
    digitalWrite(FAN,HIGH);
   }
}
