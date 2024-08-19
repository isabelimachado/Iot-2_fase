const int led = 9;
const int pot = A0;
int valor;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int valor = analogRead(led);
  valor = map(valor,0,1023,0,255);
  analogWrite(led,valor);

}
