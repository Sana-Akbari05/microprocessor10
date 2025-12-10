#include <MaxMatrix.h>


int DIN = 2;
int CLK = 4;
int CS = 3;
int maxInUse = 1;

byte buffer[20];
char text[] = "a";

MaxMatrix m(DIN, CS, CLK, maxInUse);

void setup() {
  m.init();
  m.setIntensity(8);
}
void loop() {
  m.setDot(0, 7, true);

  m.setDot(0, 7, true);
  delay(1000);
  m.setDot(7, 0, true);
  delay(1000);
  m.setColumn(3, B11110000);
  delay(1000);
  m.setColumn(4, B00001111);
  delay(1000);
  m.clear();
  delay(1000);
}