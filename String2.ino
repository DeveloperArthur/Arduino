String textoRecebido = "";
unsigned long delay1 = 0;

String padR( String texto, int tamanho, char caractere = ' ' );
String padL( String texto, int tamanho, char caractere = ' ' );
String strZero( String texto, int tamanho );
String replicate( char caractere, int vezes );

void setup() {  
  Serial.begin(9600);  
 
}

void loop() {
  char caracter;
  
  if (Serial.available()) {
     caracter = Serial.read();
     textoRecebido += caracter;
     delay1 = millis();
  }

  if (((millis() - delay1) > 10) && (textoRecebido != "")) {
     Serial.print("Texto digitado: ");
     Serial.println(textoRecebido);

     textoRecebido = "";
  }
}

String padR( String texto, int tamanho, char caractere) {
  if (texto.length() > tamanho) {
     return texto.substring( texto.length() - tamanho, texto.length() );  
  } else {
     return replicate( caractere, tamanho - texto.length() ) + texto;  
  }
}

String padL( String texto, int tamanho, char caractere) {
  if (texto.length() > tamanho) {
     texto.remove( tamanho ); 
     return texto; 
  } else {
     return texto + replicate( caractere, tamanho - texto.length() );  
  }
}

String strZero( String texto, int tamanho ) {
  return padR( texto, tamanho, '0');
}

String replicate( char caractere, int vezes ) {
  String temp;

  for (int nL=0; nL < vezes; nL++) {
      temp += caractere;   
  }
  return temp;
}

