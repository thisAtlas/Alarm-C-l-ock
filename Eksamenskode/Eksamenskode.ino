#include<SoftwareSerial.h>
// include the library code:
#include<LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int bluetoothRx = 6;
int bluetoothTx = 7;
int Vibrator = 8;
char data;   

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);//Arduino RX,Tx

int Interval = 60000;
void setup() {
  Serial.begin(9600);
  bluetooth.begin(115200);//standard bluetooth mate
  pinMode(Vibrator,OUTPUT);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
}

void loop() {
  // delay(Interval);
  data='a';
  delay(500);
  bluetooth.listen();
  bluetooth.println(data);
  bluetoothAction();
  Serial.print(data);
  lcd.setCursor(0, 1);
  lcd.print(data);
  
 /* lcd.print("Send ");
  lcd.print(millis()/1000);
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
    lcd.print(" nudes plz :)");*/
    
}
void bluetoothAction(){  
      lcd.setCursor(0, 0);
      lcd.print("Fuck");
  //if(bluetooth.available()){ 
    //data=(char)bluetooth.read();
    //} 
    if(data=='1'){
      lcd.setCursor(0, 0);
      lcd.print("Lav Oevelse 1");
      lcd.setCursor(0, 1);
      lcd.print("Gentag 8 Gange");
    }else if(data=='2'){
      lcd.setCursor(0, 0);
      lcd.print("Lav Oevelse 2");
      lcd.setCursor(0, 1);
      lcd.print("Gentag 5 Gange");
    }else if(data=='3'){
      lcd.setCursor(0, 0);
      lcd.print("Lav Oevelse 3");
      lcd.setCursor(0, 1);
      lcd.print("Gentag 5 Gange");
    }else if(data=='4'){
      lcd.setCursor(0, 0);
      lcd.print("Lav Oevelse 4");
      lcd.setCursor(0, 1);
      lcd.print("Gentag 5 Gange");
    }else if(data=='5'){
      lcd.setCursor(0, 0);
      lcd.print("Lav Oevelse 5");
      lcd.setCursor(0, 1);
      lcd.print("Gentag 10 Gange");
    }//else if(data
}
