int PinMotore = 5; //PIN PWM
int PotPin = 0; //pin potenziometro
int lettura = 0; //variabile per la lettura
int velocita = 0; //variabile per la velocità
void setup()
{
pinMode(PinMotore, OUTPUT); //Imposto il pin in uscta
}
void loop()
{
lettura = analogRead(PotPin); //Leggo il valore del potenziometro
velocita = map(lettura, 0, 1023, 0, 255); //mappo i valori da 1024 a 255
azione(velocita); //richiamo la funzione passandogli la velocità
}
void azione(int velocita)
{
analogWrite(PinMotore, velocita); //faccio girare il motore in base alla lettura
}
