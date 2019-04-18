int pinLed[9] = {12,11,10,9,8,7,6,5,4};
int numeroLed;
void setup(){
	int i;
	for(i=0; i<9; i++){
		pinMode(pinLed[i], OUTPUT);
	}
}

void loop(){
	for (numeroLed = 0; numeroLed<9; numeroLed++){
		digitalWrite(pinLed[numeroLed], HIGH);
		delay(200);
	}

	for (numeroLed = 8; numeroLed>=0; numeroLed--){
		digitalWrite(pinLed[numeroLed], LOW);
		delay(200);
	}
	
}
