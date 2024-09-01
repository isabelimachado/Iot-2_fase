
void setup() {
  Serial.begin(9600);
}

void loop() {

  Serial.println('digite o primeiro n:');
  while(1){
    if(Serial.available() > 0){
      break;
    }
  }
  int prim = Serial.parseInt();
  Serial.println(prim);

  Serial.println('digite o segundo n:');
  while (1){
    if(Serial.available() > 0){
      break;
    }
  }
  int segundo = Serial.parseInt();
  Serial.println(segundo);
  }
  int resultado = mult(prim,segundo);
  imprime(resultado);
}
  int mult(int a,int b) {
    int c = 0;
    for (int i = 0; i<b, i++){
      c += a;
    }
    return c;
  }

void imprime(int dado){
  Serial.print("o resultado é ");
  Serial.println(dado);
}


