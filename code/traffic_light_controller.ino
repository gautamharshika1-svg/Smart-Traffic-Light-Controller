int r1 = 2;
int y1 = 3;
int g1 = 4;

int r2 = 5;
int y2 = 6;
int g2 = 7;

// 7-segment pins
int a = 8;
int b = 9;
int c = 10;
int d = 11;
int e = 12;
int f = 13;
int g = A0;

void setup()
{
  pinMode(r1, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(g1, OUTPUT);

  pinMode(r2, OUTPUT);
  pinMode(y2, OUTPUT);
  pinMode(g2, OUTPUT);

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

// DISPLAY NUMBER FUNCTION
void displayDigit(int num)
{
  switch(num)
  {
    case 0:
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
      break;

    case 1:
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;

    case 2:
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      break;

    case 3:
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      break;
  }
}

void loop()
{
  // ROAD 1 GREEN
  digitalWrite(g1, HIGH);
  digitalWrite(r2, HIGH);

  for(int i=3; i>=0; i--)
  {
    displayDigit(i);
    delay(1000);
  }

  digitalWrite(g1, LOW);
  digitalWrite(y1, HIGH);

  delay(2000);

  digitalWrite(y1, LOW);
  digitalWrite(r2, LOW);

  // ROAD 2 GREEN
  digitalWrite(g2, HIGH);
  digitalWrite(r1, HIGH);

  for(int i=3; i>=0; i--)
  {
    displayDigit(i);
    delay(1000);
  }

  digitalWrite(g2, LOW);
  digitalWrite(y2, HIGH);

  delay(2000);

  digitalWrite(y2, LOW);
  digitalWrite(r1, LOW);
}
