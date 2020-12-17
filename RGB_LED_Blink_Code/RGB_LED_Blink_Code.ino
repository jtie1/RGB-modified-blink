const int delayTime = 1000;
int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);

  pinMode(A6, OUTPUT);
}

void loop() {
  newBlink(i);
  i++;
//  RGB_color(255, 255, 255);
}

void newBlink(int i){
  int r = 0;
  int g = 0;
  int b = 0;
  int mod = i % 9;
  switch(mod){
    case 0:
      r = 255; break;
    case 1:
      g = 255; break;
    case 3:
      b = 255; break;
    case 4:
      r = g = 255; break;
    case 5:
      g = b = 255; break;
    case 6:
      r = b = 255; break;
    case 7:
      r = g = 255;
      b = 125;     break;
    default:
      r = g = b = 255; break;
  }
  RGB_color(r,g,b);
  delay(delayTime);
}

void RGB_color(int red, int green, int blue){
//  analogWrite(A0, red);
//  analogWrite(A1, green);
//  analogWrite(A2, blue);
//  
//  analogWrite(A3, red);
//  analogWrite(A4, green);
//  analogWrite(A5, blue);

//  /* Code for pins that ended up shifted over :( 
  analogWrite(A1, red);
  analogWrite(A2, green);
  analogWrite(A3, blue);

  analogWrite(A4, red);
  analogWrite(A5, green);
  analogWrite(A6, blue);
//  */
}
