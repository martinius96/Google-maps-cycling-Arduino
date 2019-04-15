#include <Keyboard.h>
const int tlacidloVpred = 2; 
int tlacidloStav; 
int poslednetlacidloStav = HIGH; 
unsigned long poslednezakmitCas = 0; 
unsigned long zakmitDelay = 50; 
int pocitadlo = 0;
const int tlacidloVlavo = 3;
const int tlacidloVpravo = 4;
void setup() {
  Keyboard.begin();
  Serial.begin(115200);
  pinMode(tlacidloVpred, INPUT_PULLUP);
  pinMode(tlacidloVlavo, INPUT_PULLUP);
  pinMode(tlacidloVpravo, INPUT_PULLUP);
}

void loop() {
  int citanie = digitalRead(tlacidloVpred);
  while(!digitalRead(tlacidloVlavo)){
  Keyboard.press('a');
  delay(300);
  Keyboard.releaseAll();
    }
    while(!digitalRead(tlacidloVpravo)){
    Keyboard.press('d');
  delay(300);
  Keyboard.releaseAll();
    }
if (citanie != poslednetlacidloStav) {
    poslednezakmitCas = millis();
  }

  if ((millis() - poslednezakmitCas) > zakmitDelay) {
    if (citanie != tlacidloStav) {
      tlacidloStav = citanie;

      if (tlacidloStav == LOW) {
        pocitadlo++;
      }
    }
  }
  poslednetlacidloStav = citanie;
  Serial.println("Hodnota counteru:");
  Serial.println(pocitadlo);
if(pocitadlo>=5){
  Keyboard.write(218);
  pocitadlo = 0;
  Serial.println("Pohyb vpred");
  }
}

