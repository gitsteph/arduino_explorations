//Pin variables
int redPin = 3;
int greenPin = 5;
int bluePin = 6;

//Color variables
int red = 0;
int green = 0;
int blue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
    //make the LED blink
    // fuschia
    red = 255;
    green = 0;
    blue = 255;

    // remember, use 255 minus the color value with this LED
    analogWrite(redPin, 255 - red);
    analogWrite(greenPin, 255 - green);
    analogWrite(bluePin, 255 - blue);
    delay(500);

    red = 148;
    green = 0;
    blue = 211;
    analogWrite(redPin, 255 - red);
    analogWrite(greenPin, 255 - green);
    analogWrite(bluePin, 255 - blue);
    delay(500);

    red = 75;
    green = 0;
    blue = 30;
    analogWrite(redPin, 255 - red);
    analogWrite(greenPin, 255 - green);
    analogWrite(bluePin, 255 - blue);
    delay(500);
  
    red = 230;
    green = 230;
    blue = 250;
    analogWrite(redPin, 255 - red);
    analogWrite(greenPin, 255 - green);
    analogWrite(bluePin, 255 - blue);
    delay(500);

}

