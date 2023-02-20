int led = 3; //Declaração da variavel e que pino ira usar

void setup() {

pinMode(led, OUTPUT); //Declaração se será usado para receber ou mandar sinal

}

void loop() {
 
 digitalWrite(led, HIGH); //Função para estabelecer valor de HIGH ou LOW
 delay(500);//Delay de tempo para proxima função em milisegundos
 digitalWrite(led, LOW);
 delay(500);
 

}
