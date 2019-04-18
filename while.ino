//programa que percorre todos os Leds acendendo e quando usuario digitar P o led para.

int pinLed[9] = {12,11,10,9,8,7,6,5,4};
int numeroLed;
char digitado;

void setup(){
	int x;
	for(x = 0; x < 9; x++){
		pinMode(pinLed[x], OUTPUT);
	}	
	
	Serial.begin(9600);
}

void loop(){
	digitado = ' ';
	numeroLed = 0;
	while (digitado != 'P'){
		digitalWrite(pinLed(numeroLed), LOW);
		numeroLed++;
		if(numeroLed > 8){
			numeroLed = 0;
		}
		digitalWrite(pinLed[numeroLed], HIGH);
		if(Serial.avaliable()){
			digitado = Serial.read();
		}
		delay(50);
	}
	delay(5000);
}