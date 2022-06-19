#include <cvzone.h>

SerialData serialData(1, 1); //(numOfValsRec,digitsPerValRec)

int valsRec[1]; // array of int with size numOfValsRec 

void setup() {
  serialData.begin();
  pinMode(13, OUTPUT);
  
}

void loop() {

  serialData.Get(valsRec);
  digitalWrite(13, valsRec[0]);

}