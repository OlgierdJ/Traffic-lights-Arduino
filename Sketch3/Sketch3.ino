/*
 Name:		Sketch3.ino
 Created:	7/27/2020 10:16:39 AM
 Authors:	janie & philip


 Use simulates the wellknown traffic light,
 and at the push of the reset button,
 allows the green light to be turned on instantly.
*/

#pragma region Variables
//Variables for illustrative purposes, and control of pinnumbers
int Green = 1, Yellow = 2, Red = 3;

//Variables for illustrative purposes, and control of delays
int Go = 5000, Wait = 2000, Stop = 5000;
#pragma endregion

#pragma region Functions
/*GreenLight, YellowLight and RedLight are functions,
used for setting the respective pin to HIGH state aka turned on,
and the two other pins to LOW state aka turned off, 
via the built-in function on the Arduino digitalWrite.*/

void GreenLight() {
	digitalWrite(Green, HIGH);
	digitalWrite(Yellow, LOW);
	digitalWrite(Red, LOW);
}

void YellowLight() {
	digitalWrite(Green, LOW);
	digitalWrite(Yellow, HIGH);
	digitalWrite(Red, LOW);
}

void RedLight() {
	digitalWrite(Green, LOW);
	digitalWrite(Yellow, LOW);
	digitalWrite(Red, HIGH);
}
#pragma endregion

#pragma region RunningCode
// the setup function runs once when you press reset or power the board

void setup() {
	//In initial setup of the program the pins used are defined at output-pins
	pinMode(Green, OUTPUT);
	pinMode(Yellow, OUTPUT);
	pinMode(Red, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	/*Controls the leds by calling the functions that turns on the relavant pin,
	and turns the other two pins off,
	then delays to allow the user to see the on/off state,
	instead of it just being instantanious*/
	GreenLight();
	delay(Go);
	YellowLight();
	delay(Wait*0.5);
	RedLight();
	delay(Stop);
	YellowLight();
	delay(Wait);
}

#pragma endregion