int porta = A1;
int valor;
const int led=8;
int escuro=30;

void setup() {
  Serial.begin(9600);
  pinMode(porta, INPUT);
}

void loop() {
  valor = analogRead(porta);
  Serial.println(valor);
  if(valor<=escuro){
    digitalWrite(led,1);
  }
  else{
    digitalWrite(led,0);
  }
}
