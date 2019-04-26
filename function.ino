#define pinLedVm 2
#define pinLedVd 3
#define pinBotao 4

boolean pisca = false;

boolean leBotao(int porta);
void piscaLED (int porta, int tempo);

void setup(){
	pinMode(pinLedVd, OUTPUT);
	pinMode(pinLedVm, OUTPUT);
	pinMode(pinBotao, INPUT_PULLUP);
}

void loop(){
	if(leBotao(pinBotao)){
		pisca = !pisca;
	}
	if(pisca){
		piscaLED(pinLedVm, 500);
		piscaLED(pinLedVd, 200);
	}
}

boolean leBotao(int porta){
	static boolean estadoAnterior[14] = {true,true,true,true,true,true,true,true,true,true,true,true,true,true};

	boolean estadoBotao = digitalRead(porta);
	boolean ligado = false;
	if(!estadoBotao && estadoAnterior[porta]){
		ligado = true;
	}
	estadoAnterior[porta] = estadoBotao;
	
	return ligado;
}

void piscaLED (int porta, int tempo){
	static unsigned long delay1[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	if(millis() - delay1[porta] < tempo){
		digitalWrite(porta, HIGH);
	} else {
		digitalWrite(porta, LOW);
	}

	if((millis() - delay1[porta]) >= (tempo*2)){
		delay1[porta] = millis();
	}
}