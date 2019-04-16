//programa que ao apertar o botao, controla os estados dos leds
void setup(){
	//saida de corrente eletrica
	pinMode(10, OUTPUT);
	pinMode(9, OUTPUT);
	
	//entrada de corrente eletrica
	pinMode(7, INPUT);
}

void loop(){
	int estadoBotao;
	
	//verifica qual eh o estado da porta (botao) Ligado ou desligado
	estadoBotao = digitalRead(7);
	
	//caso esteja apertado, o led liga
	digitalWrite(10, estadoBotao);
	
	//caso nao esteja apertado, o led liga
	digitalWrite(9, !estadoBotao);
}