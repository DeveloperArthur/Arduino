//Operadores Matemáticos

float valor1, valor2, resultadoSoma, resultadoSub, resultadoDiv, resultadoMult, resultadoMod, resultadoFinal;
void setup(){
	valor1 = 250;
	valor2 = 7.8;

	resultadoSoma = valor1 + valor2;
	resultadoSub = valor1 - valor2;
	resultadoDiv = valor1 / valor2;
	resultadoMult = valor1 * valor2;
	resultadoMod = int(valor1) % int(valor2);

	resultadoFinal = resultadoSoma * resultadoSub - resultadoDiv + resultadoMult / resultadoMod;
	
	Serial.begin(9600);
	Serial.print("Valor1: ");
	Serial.println(valor1);

	Serial.print("Valor2: ");
	Serial.println(valor2);

	Serial.print("A-SOMA: ");
	Serial.println(resultadoSoma);

	Serial.print("B-SUBTRACAO: ");
	Serial.println(resultadoSub);

	Serial.print("C-DIVISAO: ");
	Serial.println(resultadoDiv);

	Serial.print("D-MULTIPLICACAO");
	Serial.println(resultadoMult);

	Serial.print("E-RESTO DA DIVISA0: ");
	Serial.println(resultadoMod);

	Serial.print("RESULT FINAL (A * B - C + D / E) : ");
	Serial.println(resultadoFinal);

}

void loop(){

}
