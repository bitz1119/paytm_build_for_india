int red=11;  
int yellow=12;
int green=13;
int irr=A0; 
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(irr, INPUT);
  Serial.begin(9600);  
}

void loop() {
  Serial.println(analogRead(irr));
  if(analogRead(irr) > 10 )
  {   
   digitalWrite(green, HIGH);
   digitalWrite(yellow, HIGH); 
   delay(50);
   digitalWrite(yellow, LOW); 
   delay(50);
    
    }
  else
  {
    digitalWrite(red, HIGH); 
   digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
  delay(200);
  digitalWrite(red, LOW); 
   digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
  delay(100);
  digitalWrite(red, LOW); 
   digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
    delay(200);
    }
  

}
