#include "HID-Project.h"

#define ROTARY_1_CLK A0
#define ROTARY_1_DT A1
#define ROTARY_2_CLK A3 
#define ROTARY_2_DT A2 

#define BTN_COUNT 11

const int btnPins[BTN_COUNT] = {4,9,10,5,8,16,6,7,14, 3,15}; // First 9 for switches, last 2 for rotary btns

int initialCLK_1 = HIGH;
int currentCLK_1 = HIGH;
int initialCLK_2 = HIGH;
int currentCLK_2 = HIGH;

void setup() {
  for (int i=0; i<BTN_COUNT; i++) {
    pinMode(btnPins[i], INPUT_PULLUP); // Set button pins as input pullups
  }

  // Rotary encoders data
  pinMode(ROTARY_1_CLK, INPUT_PULLUP);
  pinMode(ROTARY_2_CLK, INPUT_PULLUP);
  pinMode(ROTARY_1_DT, INPUT_PULLUP);
  pinMode(ROTARY_2_DT, INPUT_PULLUP);

  // initialCLK_1 = digitalRead(ROTARY_1_CLK);
  // initialCLK_2 = digitalRead(ROTARY_2_CLK);

  Consumer.begin();
  System.begin();
  Serial.begin(9600);
}

void loop() {
  currentCLK_1 = digitalRead(ROTARY_1_CLK);
  int data1 = digitalRead(ROTARY_1_DT);
  // currentCLK_2 = digitalRead(ROTARY_2_CLK);

  if (currentCLK_1 != initialCLK_1){
    data1 = currentCLK_1^data1;
		if (data1) {
			Consumer.write(MEDIA_VOLUME_UP);
		} else {
			Consumer.write(MEDIA_VOLUME_DOWN);
		}
    initialCLK_1 = currentCLK_1;
  }

  for(int i=0; i<BTN_COUNT; i++) {
    if(digitalRead(btnPins[i]) == LOW) {
      buttonClick(btnPins[i]);
      delay(500);
    }
  }
}

void buttonClick(int pin) {
  switch(pin) {
    case 4:
      // Keyboard.write("1");
      break;
    case 9:
      // Keyboard.write("2");
      break;
    case 10:
      // Keyboard.write("3");
      break;
    case 5:
      // Keyboard.write("4");
      break;
    case 8:
      // Keyboard.write("5");
      break;
    case 16:
      // Keyboard.write("6");
      break;
    case 6:
      // Keyboard.write("7");
      break;
    case 7:
      // Keyboard.write("8");
      break;
    case 14:
      // Keyboard.write("9");
      break;
    case 3:
      Consumer.write(MEDIA_PLAY_PAUSE);
      break;
    case 15:
      System.write(SYSTEM_SLEEP);
      break;
    default:
      break;
  }
}