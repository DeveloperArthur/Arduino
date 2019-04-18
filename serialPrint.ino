int valorX;
int valorY;
int valorZ;

void setup(){
	//informa a velocidade que vai ser enviado a informação bytes por miuto
	Serial.begin(9600);

	valorX = 10;
	valorY = 20;
	valorZ = 50;

	Serial.print("valorX=");
	Serial.print(valorX);

	Serial.print("  valorY=");
	Serial.print(valorY);

	Serial.print("  valorZ=");
	Serial.print(valorZ);
}

void loop(){
	
}