int saida = 11;
int entrada = A5;
int pontos = 500;
int tempo = 1;
int valor, k;
float tensao;
const int led = 8;

void setup() {
  pinMode(saida, OUTPUT);
  pinMode(entrada, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(saida, LOW);
  for (k=1; k<=pontos; k++) {
    valor = analogRead(entrada);
    tensao = float(valor)*5/1023;
    Serial.println(tensao);
    delay(tempo);
    if (tensao>4){
      digitalWrite(led,0);
  }
}
  
  digitalWrite(saida, HIGH);
  for (k=1; k<=pontos; k++) {
    valor = analogRead(entrada);
    tensao = float(valor)*5/1023;
    Serial.println(tensao);
    delay(tempo);
    if (tensao>4){
      digitalWrite(led,1);
  }
}
}
