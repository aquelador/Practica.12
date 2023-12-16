// C++ code
/*
A partir da montaxe da práctica anterior cos dous 
LEDs (nos pins 13 e 12), engade no pin 11 un relé 
SPDT que accionará unha lámpada alimentada cunha 
fonte exterior de 24 V CC.

Modifica a programación por bloques de maneira que 
a lámpada siga ao LED no pin 12, é dicir, cando o 
LED 12 está aceso, a lámpada está acesa, cando está
apagado, a lámpada está apagada.

Usa os comentarios en liña (usando '//') para 
explicar o que fai cada parte do programa. Ten en 
conta que en canto se modifica o texto do código, 
perdemos a posibilidade de de manter os bloques.
*/
int rele = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}
