#include <Ultrasonic.h> // Inclusão de biblioteca do Sensor Ultrassonico

Ultrasonic ultrassonico(8, 7); // Definição dos pinos trigger e echo do ultrassonico

void stop() // Função utilizada para o robô parar
{ 
  analogWrite(5, 0); // motor B IA - frente -> velocidade 0
  analogWrite(6, 0); // motor B IB - trás -> velocidade 0
  analogWrite(9, 0); // motor A IA - frente -> velocidade 0
  analogWrite(10, 0); // motor A IB - trás -> velocidade 0
}

void re() // Função utilizada para o robô dar ré
{
  analogWrite(5, 0); // motor B IA - frente -> velocidade 0
  analogWrite(6, 135); // motor B IB - trás -> velocidade 150 (max 225)
  analogWrite(9, 0); // motor A IA - frente -> velocidade 0
  analogWrite(10, 135); // motor A IB - trás -> velocidade 150 (max 225)
}

void frente() // Função utilizada para o robô se locomover de frente
{
  analogWrite(5, 150); // motor B IA - frente -> velocidade 150 (max 225)
  analogWrite(6, 0); // motor B IB - trás -> velocidade 0
  analogWrite(9, 150); // motor A IA - frente -> velocidade 150 (max 225)
  analogWrite(10, 0); // motor A IB - trás -> velocidade 0
}

void girar() // Função utilizada para o robô girar quando encontrar a linha
{
  
  analogWrite(5, 0); // motor B IA - frente -> velocidade 0
  analogWrite(6, 150); // motor B IB - trás -> velocidade 150 (max 225)
  analogWrite(9, 150); // motor A IA - frente -> velocidade 150 (max 225)
  analogWrite(10, 0); // motor A IB - trás -> velocidade 0 
}

void atacar() // Função utilizada para o robô atacar o oponente quando identificado
{
  analogWrite(5, 200); // motor B IA - frente -> velocidade 200 (max 225)
  analogWrite(6, 0); // motor B IB - trás -> velocidade 0
  analogWrite(9, 200); // motor A IA - frente -> velocidade 200 (max 225)
  analogWrite(10, 0); // motor A IB - trás -> velocidade 0
}

void setup()
{
  pinMode(11, INPUT); // Sensor de linha
  pinMode(12, INPUT); // Sensor de linha 
  pinMode(13, INPUT); // Sensor de linha

  pinMode(2, INPUT_PULLUP); // Botão para ligar sistema

  pinMode(5, OUTPUT); // Ponte H - B IA
  pinMode(6, OUTPUT); // Ponte H - B IB 
  pinMode(9, OUTPUT); // Ponte H - A IA
  pinMode(10, OUTPUT); // Ponte H - A IB

  pinMode(8, OUTPUT); // Trigger Sensor Ultrassonico
  pinMode(7, INPUT); // Echo Sensor Ultrassonico

  Serial.begin(9600); // Faz a conexão serial do computador caso necessário

  while (digitalRead(2) == 0) // Função que determina que o sistema só rode ao pressionar o botão
  {
    delay(1);
    stop();
  }
}

void loop()
{
  if(digitalRead(11) || digitalRead(12)) // Função situacional em caso de encontrar linha branca
  {
    stop();
    delay(1);
    re();
    delay(800);
    stop();
    delay(1);
    girar();
    delay(600);
    stop();
  }
  
  int centimetros = ultrassonico.read(CM);
  delay(50); // Transforma a leitura do ultrassonico para centimetros

  Serial.println(centimetros);

  if (centimetros < 10) // Condição -> se a distancia for menor que 5 centimetros, condição...
  {
    stop();
    delay(1);
    atacar();
    delay(300);
    stop();
    return;
  }

  frente(); // Função predominante do loop
  delay(1);
}