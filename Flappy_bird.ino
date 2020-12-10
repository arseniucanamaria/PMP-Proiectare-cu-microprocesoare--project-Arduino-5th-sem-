#include <UTFT.h> 
#include <URTouch.h>

// creare obiecte
UTFT myGLCD(SSD1289,38,39,40,41);
URTouch  myTouch( 6, 5, 4, 3, 2);

extern uint8_t BigFont[];

//int x, y; // coordonatele bird-ului
//int score = 0; -retine scorul jocului

void setup() {
  // Initiate display
  myGLCD.InitLCD();
  myGLCD.clrScr();
  myTouch.InitTouch();
  
  initiateGame(); // Initializare joc 
}

void initiateGame() {
  myGLCD.clrScr();

  // background
  myGLCD.setColor(114, 198, 206);//setarea background-ului in albastru
  myGLCD.fillRect(0, 0, 319, 239);
 
  // Text
  myGLCD.setColor(0, 0, 0);
  myGLCD.setBackColor(221, 216, 148);
  myGLCD.setFont(BigFont);
  myGLCD.print("Score:",5,220);

  myGLCD.setColor(0, 0, 0);
  myGLCD.setBackColor(114, 198, 206);
  myGLCD.print(">RESET<",255,5);
  myGLCD.drawLine(0,23,319,23);

  myGLCD.print("TAP TO START",CENTER,100);
  
  //drawBird(yB); // trebuie implementata functia pt desenarea FlappyBird-ului
  
}