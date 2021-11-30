
#include <BluetoothSerial.h>
BluetoothSerial BT;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  BT.begin("candyTestEsp32");//請改名
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(14,OUTPUT);
  pinMode(27,OUTPUT);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(14,LOW);
  digitalWrite(27,LOW);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  while (BT.available())
  {
    //讀取藍芽資料
    String BTdata=BT.readString();
    //顯示在序列視窗
    Serial.println(BTdata);
       if (BTdata=="a")
      {
        digitalWrite(13,HIGH);
      }
      if (BTdata=="b")
      {
        digitalWrite(12,HIGH);
      }
         if (BTdata=="c")
      {
        digitalWrite(14,HIGH);
      }
      if (BTdata=="d")
      {
        digitalWrite(27,HIGH);
      }
      if (BTdata=="f")
      {
 digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(14,LOW);
  digitalWrite(27,LOW);
      }
  }
}
