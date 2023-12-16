// C++ code
//
#define LED_INT 13
#define LED 12
#define RELE 11
#define PULSADOR 10
bool push;
void setup()
{
  //Definer como salidas os pins 
  pinMode(LED_INT ,OUTPUT);
  pinMode(LED,OUTPUT);
  pinMode(RELE,OUTPUT);
  pinMode(PULSADOR,INPUT);//DEFINER COMO ENTRAD 
}
void loop()
{
  push=digitalRead(PULSADOR);
    if(push==LOW)//*Cando o pulsador está premido, 
     //*ircuíto non funciona
//*Cando non prememos o pulsador foncciona igual que prac 12 
    {
  digitalWrite(LED_INT ,HIGH);
  delay(10000);//WAIT FOR 10000 MILLISECONDS 
  digitalWrite(LED_INT,LOW);
  //apaga o lide pin10
  delay(4000);// Wait for 4000 millisecond(s)
  digitalWrite(LED,HIGH);// Permite iluminar una led
  digitalWrite(RELE, HIGH);// Obtener el estado del botón
  delay(1000);//Wait for 10000 millisecond(s)
  digitalWrite(LED,LOW);
  digitalWrite(RELE, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}

else {//La sentencia condicional else if con Arduino nos
  //va a permitir tener 2 o más condiciones dentro de un bloque de if anidados.
   digitalWrite(LED_INT ,LOW);
   digitalWrite(LED,LOW);
   digitalWrite(RELE, LOW);
   delay(4000);
}}
