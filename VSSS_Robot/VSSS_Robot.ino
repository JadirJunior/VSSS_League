
//Motor direito 
#define MTD 6
#define RD 7

//Motor Esquerdo
#define MTE 2  
#define RE 3

//Velocidade dos motores
#define VE 8
#define VD 9


int calcularVelocidade(float percentual) {
  float val = percentual/100;
  int ret = val*255;
  return ret;
}


void walk() {
  Serial.println("Andando");
  
  digitalWrite(MTD, HIGH);
  digitalWrite(RD, LOW);
  

  
  digitalWrite(MTE, HIGH);
  digitalWrite(RE, LOW);
  
  
  analogWrite(VE, calcularVelocidade(100));
  analogWrite(VD, calcularVelocidade(100));

  
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  pinMode(MTE, OUTPUT);
  pinMode(RE, OUTPUT);
  
  pinMode(MTD, OUTPUT);
  pinMode(RD, OUTPUT);
  
  pinMode(VE, OUTPUT);
  pinMode(VD, OUTPUT);
  
  /*ledcSetup(canal, frequencia, resolucao);  
  ledcAttachPin(VE, canal);  
  ledcAttachPin(VD, canal);*/

}

void loop() {
  // put your main code here, to run repeatedly:

  walk();
}
