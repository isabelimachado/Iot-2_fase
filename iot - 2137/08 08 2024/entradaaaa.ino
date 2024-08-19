const int pin_entrada = A0;
int valor;
float tensao;
const int led_1=8;
const

void setup() {
  Serial.begin(9600);
  pinMode(pin_entrada, INPUT);
  pinMode(led_1, OUTPUT);
}

void loop() {
  valor = analogRead(pin_entrada);
  tensao = float(valor)*5/1023;
  Serial.print("Tensao = ");
  Serial.print(tensao);
  Serial.println(" V");
if(tensao>2.50){
  digitalWrite(led_1,1);
}
else{
  digitalWrite(led_1,0);
}

}
