void screamAndShout() {
    lc.clearDisplay(0);
    /* SMILEY BRASSE */
    lc.setRow(0,0,B00111100);
    lc.setRow(0,1,B01000010);
    lc.setRow(0,2,B10100101);
    lc.setRow(0,3,B10000001);
    lc.setRow(0,4,B10011001);
    lc.setRow(0,5,B10011001);
    lc.setRow(0,6,B01000010);
    lc.setRow(0,7,B00111100);
  
    tone(buzzer, 400); // Send 1KHz sound signal...
    delay(1000);        // ...for 1 sec
    noTone(buzzer);     // Stop sound...
  
    lc.clearDisplay(0);
  
    lc.setRow(0,0,B00111100);
    lc.setRow(0,1,B01000010);
    lc.setRow(0,2,B10100101);
    lc.setRow(0,3,B10000001);
    lc.setRow(0,4,B10100101);
    lc.setRow(0,5,B10011001);
    lc.setRow(0,6,B01000010);
    lc.setRow(0,7,B00111100);
  
    delay(300);
  
    lc.clearDisplay(0);
  
    lc.setRow(0,0,B00111100);
    lc.setRow(0,1,B01000010);
    lc.setRow(0,2,B10100101);
    lc.setRow(0,3,B10000001);
    lc.setRow(0,4,B10000001);
    lc.setRow(0,5,B10111101);
    lc.setRow(0,6,B01000010);
    lc.setRow(0,7,B00111100);
  
    delay(300);
  
    lc.clearDisplay(0);
  
    lc.setRow(0,0,B00111100);
    lc.setRow(0,1,B01000010);
    lc.setRow(0,2,B10100101);
    lc.setRow(0,3,B10000001);
    lc.setRow(0,4,B10000001);
    lc.setRow(0,5,B10011001);
    lc.setRow(0,6,B01000010);
    lc.setRow(0,7,B00111100);
  
    delay(300);
}

//INVADER
 void alien(){
  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00111100);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11011011);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00100100);
  lc.setRow(0,6,B01100110);
  lc.setRow(0,7,B10000001);

  delay(400);
  lc.clearDisplay(0);

  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00111100);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11111011);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00100100);
  lc.setRow(0,6,B11100111);
  lc.setRow(0,7,B00000000);

  delay(400);
  lc.clearDisplay(0);
  
  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00111100);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11011111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00100100);
  lc.setRow(0,6,B01100110);
  lc.setRow(0,7,B10000001);

  delay(400);
  lc.clearDisplay(0);

  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00111100);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11011011);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00100100);
  lc.setRow(0,6,B11100111);
  lc.setRow(0,7,B00000000);

  delay(400);
  alienIndex++;
  if(alienIndex <= 1){
    alien();
  }
 }

/* FUCK */
void fuck(){
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B01111100);
  lc.setRow(0,4,B10000011);
  lc.setRow(0,5,B10000001);
  lc.setRow(0,6,B10000001);
  lc.setRow(0,7,B01111110);

  delay(50);
  lc.clearDisplay(0);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B01101100);
  lc.setRow(0,4,B10000011);
  lc.setRow(0,5,B10000001);
  lc.setRow(0,6,B10000001);
  lc.setRow(0,7,B01111110);

  delay(50);
  lc.clearDisplay(0);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00111000);
  lc.setRow(0,2,B00101000);
  lc.setRow(0,3,B01101100);
  lc.setRow(0,4,B10000011);
  lc.setRow(0,5,B10000001);
  lc.setRow(0,6,B10000001);
  lc.setRow(0,7,B01111110);

  delay(50);
  lc.clearDisplay(0);

  lc.setRow(0,0,B00111000);
  lc.setRow(0,1,B00101000);
  lc.setRow(0,2,B00101000);
  lc.setRow(0,3,B01101100);
  lc.setRow(0,4,B10000011);
  lc.setRow(0,5,B10000001);
  lc.setRow(0,6,B10000001);
  lc.setRow(0,7,B01111110);

  delay(1000);
}
