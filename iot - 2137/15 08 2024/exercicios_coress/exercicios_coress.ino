const int led_vermelho = 8;
const int led_verde = 10;
const int led_azul = 9;
int aux;
int valor;
int valor;

void setup() {
  Serial.begin(9600);
  Serial.println("Digite um valor entre 0 (brilho minimo) e 100 (brilho maximo):");
  Serial.println();
}

void loop() {
  if (Serial.available() > 0) {
    valor = Serial.parseInt();
    if (aux == 0){
      brilho = valor *2.55;
      AnalogWrite(led,vermelho,brilho);
    }
    if(aux == 1){
      analogWrite(led_verde,brilho);
      aux = 2;
    }
    if(aux == 2){
      analogWrite(led_azul,brilho);
      aux = 0
    }
  }
}