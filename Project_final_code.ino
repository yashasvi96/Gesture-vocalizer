#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
int f1 = A0; //analog pin 0
int f2= A1;

void setup(){
  lcd.begin(16,2);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}
  

void loop(){
  lcd.clear();
  int a = analogRead(f1); 
  int b = analogRead(f2);
  int c  = map(a, 400, 700, 0, 9);
  int d = map(b,400,700,0,9);
    if((c>=6 && c<=9) && (d>=7 && d<=9))
{
  lcd.print("beautiful");
 
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);

 delay(1500);
 digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(250);
 
  
}

else if ((c>=3 && c<=4) && (d>=8 && d<=10))
{
  lcd.print("i need help");
 
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
 
  delay(1500);
  
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);

delay(250);

}
else if((c>=2 && c<=3) && (d>=3 && d<=4))
{
 lcd.print("I am Krishna");
 
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);

  delay(1500);

  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);

  delay(250);


}
else if((c>=5 && c<=6) && (d>=10 && d<=11))
{
  lcd.print("Sorry");
 
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  
  delay(1500);

  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);

  delay(250);


}
else if((c>=4 && c<=6) && (d>=3 && d<=4))
{
  lcd.print("Thank You");
 
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);


  delay(1500);

  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
delay(250);

}
else
{
  lcd.print("no gesture");
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
   delay(1500);
   digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);  
}
  



}
 


 

