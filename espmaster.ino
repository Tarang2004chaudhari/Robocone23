#include <Ps3Controller.h>
#include <EasyTransfer.h>
#define esptodue Serial
#define esptoesp Serial2



EasyTransfer ET;
EasyTransfer ET1;

int X, Y, T, R, actuatorup,  pencilnumeticsclose,pencilnumeticsopen, actuatordown, numetics = 0;
struct SEND_DATA_STRUCTURE {
  //put your variable definitions here for the data you want to send
  //THIS MUST BE EXACTLY THE SAME ON THE OTHER ARDUINO
   int16_t x;
  int16_t y;
};
struct SEND_DATA_STRUCTURE1 {
  //put your variable definitions here for the data you want to send
  //THIS MUST BE EXACTLY THE SAME ON THE OTHER ARDUINO
   int16_t t;
  int16_t r;
  int16_t rohit;
  int16_t tarang;
  int16_t numetics;
  int16_t numetics1;
  int16_t numetics2;
   int16_t pencilnumeticsclose;
  int16_t pencilnumeticsopen;
};

SEND_DATA_STRUCTURE data;
SEND_DATA_STRUCTURE1 data1;

void setup() {
  Serial.begin(9600);
  Ps3.attach(notify);
  esptoesp.begin(9600, SERIAL_8N1, 16, 17);
  ET.begin(details(data), &esptodue);
  ET1.begin(details(data1), &esptoesp);
  Ps3.begin("00:1a:7d:da:71:10");
  Serial.println("Ready.");
}

void loop() {
  
  if (Ps3.isConnected()) {
    X = Ps3.data.analog.stick.lx;
    Y = -Ps3.data.analog.stick.ly;
 

Serial.println(data1.tarang);
 }
  data.x = map(X, -127, 127, 0, 255);
  data.y = map(Y, -127, 127, 0, 255);
 
  ET.sendData();
  ET1.sendData();

  delay(50);
}