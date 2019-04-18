int pinos[9] = {12,11,10,9,8,7,6,5,4};
int pinLED;
float valorLDR;
float minimo = 85;
float maximo = 1020;
float luminosidade;

void setup(){
	for(pinLED = 0; pinLED < 9; pinLED++){
		pinMode(pinos[pinLED], OUTPUT);
		
	}
	pinMode(A0, INPUT);		
}

void loop(){
	valorLDR = analogRead(A0);
	luminosidade = ((valorLDR - minimo) / (maximo-minimo)) * 10;
	luminosidade = (luminosidade-10) * -1;
	for(pinLED = 0; pinLED < 9; pinLED++){
		if(pinLED < luminosidade){
			digitalWrite(pinos[pinLED], HIGH);
		}else {
			digitalWrite(pinos[pinLED], LOW)
		}
	}
	delay(500);
}