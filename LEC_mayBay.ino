#include<PPM-reader.h>

//Define constant for better runtime
#define ppmChannel = 3;
#define expectedChannels = //TBD

PPMReader ppm(ppmChannel, expectedChannels);
int values[8];
//Pre define functions
void updateValues();

void setup() {
  // put your setup code here, to run once:
  memset(values, 0, sizeof(values));
}

void loop() {
  // put your main code here, to run repeatedly:
  ppm.lastestValidChannelValue(channel, 0);
}

void updateValues() {
  for (int i = 0; i < ppmChannel)
}
