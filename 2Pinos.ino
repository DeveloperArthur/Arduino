//programa que alterna entre desligar e ligar com dois pinos
void setup(){
	pinMode(10, OUTPUT);
	pinMode(9, OUTPUT);
}

void loop(){
	digitalWrite(10, HIGH);
	digitalWrite(9, LOW);
	delay(500);
	
	digitalWrite(10, LOW);
	digitalWrite(9, HIGH);
	delay(500);
}