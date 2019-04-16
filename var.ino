//variaveis
void setup(){
	pinMode(10, OUTPUT);
	pinMode(9, OUTPUT);
}

void loop(){
	int intervalo1Pisca;
	intervaloPisca = 200;
	int intervalo2Pisca;
	intervaloPisca = 500;
	
	digitalWrite(10, HIGH);
	digitalWrite(9, LOW);
	delay(intervaloPisca);
	
	digitalWrite(10, LOW);
	digitalWrite(9, HIGH);
	delay(intervalo2Pisca);
}