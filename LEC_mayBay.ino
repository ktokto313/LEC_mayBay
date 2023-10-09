#include<PPM-reader.h>

//Define constant for better runtime
#define ppmChannel = 3;
#define expectedChannels = //TBD

PPMReader ppm(ppmChannel, expectedChannels);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  memset(values, 0, sizeof(values));
  //Check if throttle is in idle position then continue
}

void loop() {
  // put your main code here, to run repeatedly:
  ppm.lastestValidChannelValue(channel, 0);

}
