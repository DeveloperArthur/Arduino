
int valor1 = 120;
int valor2 = 148;
int valor3 = 120;

void setup() {
  Serial.begin(9600);  

  Serial.print("true = ");
  Serial.println(true);

  Serial.print("false = ");
  Serial.println(false);

  Serial.print("HIGH = ");
  Serial.println(HIGH);

  Serial.print("LOW = ");
  Serial.println(LOW);
  
  
  Serial.println();
  Serial.print("valor1 = ");
  Serial.println(valor1);

  Serial.print("valor2 = ");
  Serial.println(valor2);

  Serial.print("valor3 = ");
  Serial.println(valor3);

  Serial.println();
  Serial.println("****** OPERADORES DE COMPARACAO ******");
  Serial.print("valor1 == valor2 ? ---> ");
  Serial.println(valor1 == valor2);

  Serial.print("valor1 == valor3 ? ---> ");
  Serial.println(valor1 == valor3);

  Serial.println();
  Serial.print("valor1 != valor2 ? ---> ");
  Serial.println(valor1 != valor2);

  Serial.print("valor1 != valor3 ? ---> ");
  Serial.println(valor1 != valor3);

  Serial.println();
  Serial.print("valor2 > valor3 ? ---> ");
  Serial.println(valor2 > valor3);

  Serial.print("valor1 > valor3 ? ---> ");
  Serial.println(valor1 > valor3);

  Serial.println();
  Serial.print("valor2 >= valor3 ? ---> ");
  Serial.println(valor2 >= valor3);

  Serial.print("valor1 >= valor3 ? ---> ");
  Serial.println(valor1 >= valor3);


  Serial.println();
  Serial.println("****** OPERADORES LOGICOS ******");

  Serial.println();
  Serial.println("------ OPERADOR NAO (NOT)");
  Serial.print(" !true ? ---> ");
  Serial.println(!true);

  Serial.print("!false ? ---> ");
  Serial.println(!false);

  Serial.println();
  Serial.print(" !(valor1 == valor3) ? ---> ");
  Serial.println(!(valor1 == valor3));

  Serial.print("!(valor1 == valor2) ? ---> ");
  Serial.println(!(valor1 == valor2));

  
  Serial.println();
  Serial.println("------ OPERADOR OU (OR)");
  Serial.print("true ou true ? ---> ");
  Serial.println(true || true);

  Serial.print("true ou false ? ---> ");
  Serial.println(true || false);

  Serial.print("false ou true ? ---> ");
  Serial.println(false || true);

  Serial.print("false ou false ? ---> ");
  Serial.println(false || false);

  Serial.println();
  Serial.print("(valor1 == valor3)  ||  (valor2 > valor3) ? ---> ");
  Serial.println( (valor1 == valor3) || (valor2 > valor3) );

  Serial.print("(valor2 >= valor3)  ||  (valor1 == valor2) ? ---> ");
  Serial.println( (valor2 >= valor3) || (valor1 == valor2) );

  Serial.print("(valor1 != valor3)  ||  (valor2 > valor3) ? ---> ");
  Serial.println((valor1 != valor3) || (valor2 > valor3));

  Serial.print("(valor1 == valor2)  ||  (valor1 != valor3) ? ---> ");
  Serial.println((valor1 == valor2) || (valor1 != valor3));

  Serial.println();
  Serial.println("------ OPERADOR E (AND)");
  Serial.print("true e true ? ---> ");
  Serial.println(true && true);

  Serial.print("true e false ? ---> ");
  Serial.println(true && false);

  Serial.print("false e true ? ---> ");
  Serial.println(false && true);

  Serial.print("false e false ? ---> ");
  Serial.println(false && false);

  Serial.println();
  Serial.print("(valor1 == valor3)  &&  (valor2 > valor3) ? ---> ");
  Serial.println( (valor1 == valor3) && (valor2 > valor3) );

  Serial.print("(valor2 >= valor3)  &&  (valor1 == valor2) ? ---> ");
  Serial.println( (valor2 >= valor3) && (valor1 == valor2) );

  Serial.print("(valor1 != valor3)  &&  (valor2 > valor3) ? ---> ");
  Serial.println((valor1 != valor3) && (valor2 > valor3));

  Serial.print("(valor1 == valor2)  &&  (valor1 != valor3) ? ---> ");
  Serial.println((valor1 == valor2) && (valor1 != valor3));

}

void loop() {

}
