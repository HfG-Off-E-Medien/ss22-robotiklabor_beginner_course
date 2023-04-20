/*
  2_2 Sketch Robotic Lab HfG Offenbach
  Reading noise values from microphone sensor
  Code written by Ivan Iovine
*/

int mPin = A0;
int led = 10;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}


// the loop function runs over and over again forever
void loop() {
  int mn = 1024;
  int mx = 0;
  
  for (int i=0; i < 1000; ++i)
  {
     int v= analogRead(mPin);

     mn = min(mn, v);
     mx = max(mx,v); 
  }

  int delta = mx - mn;

  Serial.print("Min: ");
  Serial.print(mn);
  Serial.print(" Max: ");
  Serial.print(mx);
  Serial.print(" Delta: ");
  Serial.println(delta);

  if(delta > 100)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}
