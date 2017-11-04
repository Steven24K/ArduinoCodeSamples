//Globalen variablen, dat houd in dat ze voor het hele programma zichtbaarzijn
//Ook zijn ze vanaf overal aan te roepen, voor zowel de setup() als de loop() funties.
int port_nummer; //port nummer wordt pas in het verloop van het programma toegekent
int aantal_leds = 6; //Deze waarde blijft altijd constant

//Deze functie(code) wordt 1 keer uitgevoerd door de arduino,
//dit is om de computer te vertellen wat elke poort is(INPUT of OUTPUT)
void setup() {
  //De for-loop zal voor het aantal LED's dat is aangesloten op de arduino
  //een port toekennen en deze markeren als een OUTPUT.
  for(port_nummer=1;port_nummer<=aantal_leds;port_nummer++){
    pinMode(port_nummer, OUTPUT);//Markeer de poort als OUTPUT
    }
}

//Deze functie wordt oneinig uitgevoerd door de arduino, hier worden all acties in geplaatst
void loop() {
  //Deze for-loop gaat elke LED langs en zet deze aan, na 1 seconde wordt de LED weer uitgezet
  //Het port_nummer wordt weer op 1 gezet, want als de arduino klaar is met de setup() dan is de waarde 6
  for(port_nummer=1;port_nummer<=aantal_leds;port_nummer++){
    digitalWrite(port_nummer, HIGH); //Zet de LED aan van een bepaalde port
    delay(1000); //Wacht 1000 miliseconden
    digitalWrite(port_nummer, LOW); //Zet de LED uit
    }
}
