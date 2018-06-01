#include <Adafruit_NeoPixel.h>
#include <SoftwareSerial.h>

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags
Adafruit_NeoPixel strip_pinky   = Adafruit_NeoPixel(11, 2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_annular = Adafruit_NeoPixel(11, 3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_middle  = Adafruit_NeoPixel(11, 4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_index   = Adafruit_NeoPixel(11, 5, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_thumb   = Adafruit_NeoPixel(11, 6, NEO_GRB + NEO_KHZ800);


//Constants:
const int flex_pinky    = A0; //pin A0 to read analog input
const int flex_annular  = A1; //pin A1 to read analog input
const int flex_middle   = A2; //pin A2 to read analog input
const int flex_index    = A3; //pin A3 to read analog input
const int flex_thumb    = A4; //pin A4 to read analog input

//Variables:
float value_pinky;
float value_annular;
float value_middle;
float value_index;
float value_thumb;

SoftwareSerial xbee(10, 11); 

void setup() {
  strip_pinky.begin();
  strip_annular.begin();
  strip_middle.begin();
  strip_index.begin();
  strip_thumb.begin();
  strip_pinky.show();
  strip_annular.show();
  strip_middle.show();
  strip_index.show();
  strip_thumb.show();
  Serial.begin(9600);
  xbee.begin(9600);
  }

void loop() {
    int value=analogRead(flex_pinky);
    int Rmax = 780;
    int Rmin = 560;
    int pinky   = map(value  ,Rmin ,Rmax ,0,180); 
    int diff = (Rmax-Rmin)/10;
      for(int i = 0; i<11; i++) {           
          if     (value>Rmin+(diff*0) and i == 0)  { strip_pinky.setPixelColor(i, 0, 40, 0);}
          else if(value>Rmin+(diff*1) and i == 1)  { strip_pinky.setPixelColor(i, 0, 36, 0); }
          else if(value>Rmin+(diff*2) and i == 2)  { strip_pinky.setPixelColor(i, 4, 32, 0); }
          else if(value>Rmin+(diff*3) and i == 3)  { strip_pinky.setPixelColor(i, 8, 28, 0); }
          else if(value>Rmin+(diff*4) and i == 4)  { strip_pinky.setPixelColor(i, 12, 24, 0);}
          else if(value>Rmin+(diff*5) and i == 5)  { strip_pinky.setPixelColor(i, 16, 20, 0);}
          else if(value>Rmin+(diff*6) and i == 6)  { strip_pinky.setPixelColor(i, 20, 16, 0);}
          else if(value>Rmin+(diff*7) and i == 7)  { strip_pinky.setPixelColor(i, 24, 12, 0);}
          else if(value>Rmin+(diff*8) and i == 8)  { strip_pinky.setPixelColor(i, 28, 8, 0); }
          else if(value>Rmin+(diff*9) and i == 9)  { strip_pinky.setPixelColor(i, 32, 4, 0); }
          else if(value>Rmin+(diff*10)and i == 10) { strip_pinky.setPixelColor(i, 36, 0, 0); }
          else                                     { strip_pinky.setPixelColor(i, 0, 0, 0);  }
      }
    strip_pinky.show(); // on affiche

    value=analogRead(flex_annular);
    Rmax = 670;
    Rmin = 500;
    int annular  = map(value  ,Rmin ,Rmax ,0,180);
    diff = (Rmax-Rmin)/10;
      for(int i = 0; i<11; i++) {           
          if     (value>Rmin+(diff*0) and i == 0)  { strip_annular.setPixelColor(i, 0, 40, 0);}
          else if(value>Rmin+(diff*1) and i == 1)  { strip_annular.setPixelColor(i, 0, 36, 0); }
          else if(value>Rmin+(diff*2) and i == 2)  { strip_annular.setPixelColor(i, 4, 32, 0); }
          else if(value>Rmin+(diff*3) and i == 3)  { strip_annular.setPixelColor(i, 8, 28, 0); }
          else if(value>Rmin+(diff*4) and i == 4)  { strip_annular.setPixelColor(i, 12, 24, 0);}
          else if(value>Rmin+(diff*5) and i == 5)  { strip_annular.setPixelColor(i, 16, 20, 0);}
          else if(value>Rmin+(diff*6) and i == 6)  { strip_annular.setPixelColor(i, 20, 16, 0);}
          else if(value>Rmin+(diff*7) and i == 7)  { strip_annular.setPixelColor(i, 24, 12, 0);}
          else if(value>Rmin+(diff*8) and i == 8)  { strip_annular.setPixelColor(i, 28, 8, 0); }
          else if(value>Rmin+(diff*9) and i == 9)  { strip_annular.setPixelColor(i, 32, 4, 0); }
          else if(value>Rmin+(diff*10)and i == 10) { strip_annular.setPixelColor(i, 36, 0, 0); }
          else                                     { strip_annular.setPixelColor(i, 0, 0, 0);  }
      }
    strip_annular.show(); // on affiche

    value=analogRead(flex_middle);
    Rmax = 775;
    Rmin = 560;
    int middle = map(value  ,Rmin ,Rmax ,0,180);
    diff = (Rmax-Rmin)/10;

      for(int i = 0; i<11; i++) {           
          if     (value>Rmin+(diff*0) and i == 0)  { strip_middle.setPixelColor(i, 0, 40, 0);}
          else if(value>Rmin+(diff*1) and i == 1)  { strip_middle.setPixelColor(i, 0, 36, 0); }
          else if(value>Rmin+(diff*2) and i == 2)  { strip_middle.setPixelColor(i, 4, 32, 0); }
          else if(value>Rmin+(diff*3) and i == 3)  { strip_middle.setPixelColor(i, 8, 28, 0); }
          else if(value>Rmin+(diff*4) and i == 4)  { strip_middle.setPixelColor(i, 12, 24, 0);}
          else if(value>Rmin+(diff*5) and i == 5)  { strip_middle.setPixelColor(i, 16, 20, 0);}
          else if(value>Rmin+(diff*6) and i == 6)  { strip_middle.setPixelColor(i, 20, 16, 0);}
          else if(value>Rmin+(diff*7) and i == 7)  { strip_middle.setPixelColor(i, 24, 12, 0);}
          else if(value>Rmin+(diff*8) and i == 8)  { strip_middle.setPixelColor(i, 28, 8, 0); }
          else if(value>Rmin+(diff*9) and i == 9)  { strip_middle.setPixelColor(i, 32, 4, 0); }
          else if(value>Rmin+(diff*10)and i == 10) { strip_middle.setPixelColor(i, 36, 0, 0); }
          else                                     { strip_middle.setPixelColor(i, 0, 0, 0);  }
      }
    strip_middle.show(); // on affiche

    value=analogRead(flex_index);
    Rmax = 750;
    Rmin = 570;
    int index = map(value  ,Rmin ,Rmax ,0,180);
    diff = (Rmax-Rmin)/10;
      for(int i = 0; i<11; i++) {           
          if     (value>Rmin+(diff*0) and i == 0)  { strip_index.setPixelColor(i, 0, 40, 0);}
          else if(value>Rmin+(diff*1) and i == 1)  { strip_index.setPixelColor(i, 0, 36, 0); }
          else if(value>Rmin+(diff*2) and i == 2)  { strip_index.setPixelColor(i, 4, 32, 0); }
          else if(value>Rmin+(diff*3) and i == 3)  { strip_index.setPixelColor(i, 8, 28, 0); }
          else if(value>Rmin+(diff*4) and i == 4)  { strip_index.setPixelColor(i, 12, 24, 0);}
          else if(value>Rmin+(diff*5) and i == 5)  { strip_index.setPixelColor(i, 16, 20, 0);}
          else if(value>Rmin+(diff*6) and i == 6)  { strip_index.setPixelColor(i, 20, 16, 0);}
          else if(value>Rmin+(diff*7) and i == 7)  { strip_index.setPixelColor(i, 24, 12, 0);}
          else if(value>Rmin+(diff*8) and i == 8)  { strip_index.setPixelColor(i, 28, 8, 0); }
          else if(value>Rmin+(diff*9) and i == 9)  { strip_index.setPixelColor(i, 32, 4, 0); }
          else if(value>Rmin+(diff*10)and i == 10) { strip_index.setPixelColor(i, 36, 0, 0); }
          else                                     { strip_index.setPixelColor(i, 0, 0, 0);  }
      }
    strip_index.show(); // on affiche
    
    value=analogRead(flex_thumb);
    Rmax = 620;
    Rmin = 480;
    int thumb = map(value  ,Rmin ,Rmax ,0,180);
    diff = (Rmax-Rmin)/10;
      for(int i = 0; i<11; i++) {           
          if     (value>Rmin+(diff*0) and i == 0)  { strip_thumb.setPixelColor(i, 0, 40, 0);}
          else if(value>Rmin+(diff*1) and i == 1)  { strip_thumb.setPixelColor(i, 0, 36, 0); }
          else if(value>Rmin+(diff*2) and i == 2)  { strip_thumb.setPixelColor(i, 4, 32, 0); }
          else if(value>Rmin+(diff*3) and i == 3)  { strip_thumb.setPixelColor(i, 8, 28, 0); }
          else if(value>Rmin+(diff*4) and i == 4)  { strip_thumb.setPixelColor(i, 12, 24, 0);}
          else if(value>Rmin+(diff*5) and i == 5)  { strip_thumb.setPixelColor(i, 16, 20, 0);}
          else if(value>Rmin+(diff*6) and i == 6)  { strip_thumb.setPixelColor(i, 20, 16, 0);}
          else if(value>Rmin+(diff*7) and i == 7)  { strip_thumb.setPixelColor(i, 24, 12, 0);}
          else if(value>Rmin+(diff*8) and i == 8)  { strip_thumb.setPixelColor(i, 28, 8, 0); }
          else if(value>Rmin+(diff*9) and i == 9)  { strip_thumb.setPixelColor(i, 32, 4, 0); }
          else if(value>Rmin+(diff*10)and i == 10) { strip_thumb.setPixelColor(i, 36, 0, 0); }
          else                                     { strip_thumb.setPixelColor(i, 0, 0, 0);  }
      }
    strip_thumb.show(); // on affiche
    
  if(thumb<0) {thumb=0;}
  if(index<0) {index=0;}
  if(middle<0) {middle=0;}
  if(annular<0) {annular=0;}
  if(pinky<0) {pinky=0;}

  if(thumb>180) {thumb=180;}
  if(index>180) {index=180;}
  if(middle>180) {middle=180;}
  if(annular>180) {annular=180;}
  if(pinky>180) {pinky=180;}
  

  
  Serial.println("<");
  Serial.println(thumb);
  Serial.println(index);
  Serial.println(middle);
  Serial.println(annular);
  Serial.println(pinky);
  
  xbee.println("<");
  xbee.println(thumb);
  xbee.println(index);
  xbee.println(middle);
  xbee.println(annular);
  xbee.println(pinky);
  delay(30);
}

