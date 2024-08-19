  const int led = 8;
const int pin_entrada = A0;
int valor;
float tensao;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(pin_entrada,INPUT);
}

void loop() {
  valor = analogRead(pin_entrada);
  tensao = float(valor)*5/1023;
  digitalWrite(led,1);
  Serial.print("Tensao = ");
  Serial.print(tensao);
  Serial.println(" V");

if(tensao>2.50){
  digitalWrite(led,1);
}
else{
  digitalWrite(led,0);
}
}