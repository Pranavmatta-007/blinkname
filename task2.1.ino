const int ledPin = 13;    // Built-in LED pin
const int pushpin = 2;    // Push button pin
bool buttonPressed = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pushpin, INPUT);  // Enable internal pull-up resistor for the button
  Serial.begin(9600);
}

// dot of  Morse code functions)
void dot() {
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}
// dash of morse code function
void dash() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(500);
}
// creating morse code for different alphabets
void codeA() //".-"
{
  dot();
  dash();
}

void codeB() //"-..."
{
  dash();
  dot();
  dot();
  dot();
}

void codeC() //"-.-."
{
  dash();
  dot();
  dash();
  dot();
}

void codeD()//"-.."
{
  dash();
  dot();
  dot();
}

void codeE()//"."
{
  dot();
}

void codeF()//"..-."
{
  dot();
  dot();
  dash();
  dot();
}

void codeG()//"--."
{
  dash();
  dash();
  dot();
}

void codeH()//"...."
{
  dot();
  dot();
  dot();
  dot();
}

void codeI()//".."
{
  dot();
  dot();
}

void codeJ()//".---"
{
  dot();
  dash();
  dash();
  dash();
}

void codeK()//"-.-"
{
  dash();
  dot();
  dash();
}

void codeL()//".-.."
{
  dot();
  dash();
  dot();
  dot();
}

void codeM()//"--"
{
  dash();
  dash();
}

void codeN()//"-."
{
  dash();
  dot();
}

void codeO()//"---"
{
  dash();
  dash();
  dash();
}

void codeP()//".--."
{
  dot();
  dash();
  dash();
  dot();
}

void codeQ()//"--.-"
{
  dash();
  dash();
  dot();
  dash();
}

void codeR()//".-."
{
  dot();
  dash();
  dot();
}

void codeS()//"..."
{
  dot();
  dot();
  dot();
}

void codeT()//"-"
{
  dash();
}

void codeU()//"..-"
{
  dot();
  dot();
  dash();
}

void codeV()//"...-"
{
  dot();
  dot();
  dot();
  dash();
}

void codeW()//".--"
{
  dot();
  dash();
  dash();
}

void codeX()//"-..-"
{
  dash();
  dot();
  dot();
  dash();
}

void codeY()//"-.--"
{
  dash();
  dot();
  dash();
  dash();
}

void codeZ()//"--.."
{
  dash();
  dash();
  dot();
  dot();
}

// Creating the morsefunction
void MorseCodeFunction(String message)
{
  for(int i = 0; i<message.length();i++)
  {
    char c = toLowerCase(message.charAt(i));
    // checking the alphabet
    switch(c)
    {
      case'a':
      codeA();
      break;
      case'b':
      codeB();
      break;
      case'c':
      codeC();
      break;
      case'd':
      codeD();
      break;
      case'e':
      codeE();
      break;
      case'f':
      codeF();
      break;
      case'g':
      codeG();
      break;
      case'h':
      codeH();
      break;
      case'i':
      codeI();
      break;
      case'j':
      codeJ();
      break;
      case'k':
      codeK();
      break;
      case'l':
      codeL();
      break;
      case'm':
      codeM();
      break;
      case'n':
      codeN();
      break;
      case'o':
      codeO();
      break;
      case'p':
      codeP();
      break;
      case'q':
      codeQ();
      break;
      case'r':
      codeR();
      break;
      case's':
      codeS();
      break;
      case't':
      codeT();
      break;
      case'u':
      codeU();
      break;
      case'v':
      codeV();
      break;
      case'w':
      codeW();
      break;
      case'x':
      codeX();
      break;
      case'y':
      codeY();
      break;
      case'z':
      codeZ();
      break;
    }
    delay(2000);
  }
}
void loop() {
  bool value = digitalRead(pushpin);
  Serial.println(value);
  // Check if the button is pressed
  if (value == LOW) {
    if (!buttonPressed) {
      buttonPressed = true;
      // Define the message to transmit in Morse code
      String message;
      message = "pranav";
      message.trim();
      // Transmit the message in Morse code
      MorseCodeFunction(message);
      //Wait for 5 seconds before allowing another button press
      delay(5000);
    }
  } else {
    buttonPressed = false;
  }
}
