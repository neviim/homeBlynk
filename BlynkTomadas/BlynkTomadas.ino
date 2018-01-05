
#define BLYNK_PRINT Serial // Ativa Serial Monitor

#include <SPI.h>
#include <Ethernet.h>
#include <BlynkSimpleEthernet.h>

// Chave da aplicação criada no Blynk
char auth[] = "";

void setup()
{
  // Inicializa porta serial.
  Serial.begin(9600);

  // Conecta ao Blynk Cloud.
  Blynk.begin(auth);
}

void loop()
{
  // Blynk inicialização...
  Blynk.run();

  // Aqui pode entrar o novos codigos
}

