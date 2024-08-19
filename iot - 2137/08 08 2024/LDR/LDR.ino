int porta = A1;
int valor;
const int led = 10;

void setup() {
  Serial.begin(9600);
  pinMode(porta, INPUT);
}

void loop() {
  valor = analogRead(porta);
  Serial.println(valor);
}
if (valor < 100){
  digitalwrite(led,1)
}
if (valor > 500){
  digitalWrite(led,0)
}