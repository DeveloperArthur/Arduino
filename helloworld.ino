void setup(){
	//informa ao arduino o pino e o estado que queremos
	pinMode(10, OUTPUT);
}

void loop(){
	//liga corrente eletrica no pino 10
	digitalWrite(10, HIGH);
	//delay de 1 segundo
	delay(1000);
	
	//desliga corrente eletrica do pino 10
	digitalWrite(10, LOW);
	//delay de 1 segundo
	delay(1000);
}