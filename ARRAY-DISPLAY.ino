//aperte o botao e o display varia de 0 a 9
#define pinBotao 2
byte portas[8] = {10,9,6,7,8,11,12,5};
int numero = 10;
boolean botaoAtu = false;
boolean botaoAnt = false;  // a b c d e f g ponto 
byte displayConfig[11][8] = {{1,1,1,1,1,1,0,0}, //Digito 0
		             {0,1,1,0,0,0,0,0}, //Digito 1
			     {1,1,0,1,1,0,1,0}, //Digito 2
                             {1,1,1,1,0,0,1,0}, //Digito 3
  			     {0,1,1,0,0,1,1,0}, //Digito 4
                     	     {1,0,1,1,0,1,1,0}, //Digito 5
                             {1,0,1,1,1,1,1,0}, //Digito 6
                             {1,1,1,0,0,0,0,0}, //Digito 7
                             {1,1,1,1,1,1,1,0}, //Digito 8
                             {1,1,1,1,0,1,1,0}, //Digito 9
                             {0,0,0,0,0,0,0,0}}; //Tudo apagado
void setup() {
  	pinMode(pinBotao, INPUT);
	for (int nP = 0; nP <= 7; nP++) {
      		pinMode(portas[nP], OUTPUT);
	}
}

void loop() {
  	botaoAtu = digitalRead(pinBotao);
		if (botaoAtu && !botaoAnt) {
     			numero++;
			if (numero > 9) {
        			numero = 0; 
     			}
  		}
  	botaoAnt = botaoAtu;
	for (int nD = 0; nD <= 7; nD++) {
     		digitalWrite(portas[nD], displayConfig[numero][nD]);
  	}
}
