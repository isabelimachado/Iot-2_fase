const int blue=4;
const int red=3;
const int green=2;
int valorvermelho;
int valorverde;
int valorazul;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println("Digite um valor para o vermelho");
  Serial.println();
  Serial.setTimeout(60000);
  if (Serial.available() >= 0) {
    valorvermelho = Serial.parseInt();
    analogWrite(red, valorvermelho);
  }
  Serial.println("Digite um valor para o verde:");
  Serial.println();
  Serial.setTimeout(60000);
  if(Serial.available()>=0){
    valorverde=Serial.parseInt();
    analogWrite(green, valorverde);
  }
  Serial.println("Digite um valor para o azul:");
  Serial.println();
  Serial.setTimeout(60000);
  if(Serial.available() >=0){
    valorazul= Serial.parseInt();
     analogWrite(blue, valorazul);
  }

    
  

}
