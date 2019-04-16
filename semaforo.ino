int pinVermelho = 10;
int pinAmarelo = 9;
int pinVerde = 8;
int pinBotao = 7;
int faseSemaforo;
int estadoBotao;
void setup(){
	pinMode(pinVerde, OUTPUT);		
	pinMode(pinVermelho, OUTPUT);
	pinMode(pinAmarelo, OUTPUT);
	pinMode(pinBotao, INPUT);
	faseSemaforo = 1;
}

void loop(){
	estadoBotao = digitalRead(pinBotao);
	
	if(estadoBotao == HIGH){
		if(faseSemaforo < 4){
			faseSemaforo = faseSemaforo + 1;
		}else if(semaforo >= 4){
			faseSemaforo = 1;
		}
	}
	
	if(faseSemaforo == 1){
		digitalWrite(pinVerde, HIGH);
		digitalWrite(pinVermelho, LOW);
		digitalWrite(pinAmarelo, LOW);
	}
	if(faseSemaforo == 2){
		digitalWrite(pinVerde, LOW);
		digitalWrite(pinVermelho, LOW);
		digitalWrite(pinAmarelo, HIGH);
	}
	if(faseSemaforo == 3){
		digitalWrite(pinVerde, LOW);
		digitalWrite(pinVermelho, HIGH);
		digitalWrite(pinAmarelo, LOW);
	}
}