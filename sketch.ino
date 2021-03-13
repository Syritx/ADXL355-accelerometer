const int x = A0,
          y = A1,
          z = A2;

int currentx;
int xmovementAmount;

void setup() {
    analogReference(EXTERNAL);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

    int x_axis = analogRead(x);
    int y_axis = analogRead(z);
    int z_axis = analogRead(y);
    Serial.println(String(x_axis) + "  " + String(y_axis) + "  " + String(z_axis));
}
