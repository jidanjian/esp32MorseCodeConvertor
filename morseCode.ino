
int LED_BUILTIN = 21;
void blink();
void dash();
void morseTranslator(const char *text);
void letterTranslator(char letter);
void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
}
int speed = 500;
int volume = 10;
void loop() {
    String words = "sos";
    morseTranslator(words);
    delay(1000000);
}

//hihi



void blink(){
  digitalWrite(LED_BUILTIN, volume);
  delay(speed);
  digitalWrite(LED_BUILTIN,LOW);
  delay(speed);
}
void dash(){
  digitalWrite(LED_BUILTIN,volume);
  delay(speed*3);
  digitalWrite(LED_BUILTIN,LOW);
  delay(speed);
}
void morseTranslator(String text){
  for(char c:text){
    letterTranslator(c);
    delay(speed*3);
  }

}
//should not have wrote this down myself
void letterTranslator(char letter){
  if(letter == 32){
    delay(speed*2);
  }
  if(letter == 'a'){
    blink();
    dash();
  }
  if(letter == 'b'){
    dash();
    blink();
    blink();
    blink();
  }
  if(letter == 'c'){
    dash();
    blink();
    dash();
    blink();
  }
  if(letter == 'd'){
    dash();
    blink();
    blink();
  }
  if(letter == 'e'){
    blink();
  }
  if(letter == 'f'){
    blink();
    blink();
    dash();
    blink();
  }
  if(letter == 'g'){
    dash();
    dash();
    blink();
  }
  if(letter == 'h'){
    blink();
    blink();
    blink();
    blink();
  }
  if(letter == 'i'){
    blink();
    blink();
  }
  if(letter == 'j'){
    blink();
    dash();
    dash();
    dash();
  }
  if(letter == 'k'){
    dash();
    blink();
    dash();
  }
  if(letter == 'l'){
    blink();
    dash();
    blink();
    blink();
  }
  if(letter == 'm'){
    dash();
    dash();
  }
  if(letter == 'n'){
    dash();
    blink();
  }
  if(letter == 'o'){
    dash();
    dash();
    dash();
  }
  if(letter == 'p'){
    blink();
    dash();
    dash();
    blink();
  }
  if(letter == 'q'){
    dash();
    dash();
    blink();
    dash();
  }
  if(letter == 'r'){
    blink();
    dash();
    blink();
  }
  if(letter == 's'){
    blink();
    blink();
    blink();
  }
  if(letter == 't'){
    dash();
  }
  if(letter == 'u'){
    blink();
    blink();
    dash();
  }
  if(letter == 'v'){
    blink();
    blink();
    blink();
    dash();
  }
    if(letter == 'w'){
    blink();
    dash();
    dash();
  }
  if(letter == 'x'){
    dash();
    blink();
    blink();
    dash();
  }
  if(letter == 'y'){
    dash();
    blink();
    dash();
    dash();
  }
  if(letter == 'z'){
    dash();
    dash();
    blink();
    blink();
  }
}