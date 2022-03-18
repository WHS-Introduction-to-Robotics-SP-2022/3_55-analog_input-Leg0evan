int inPin = A0;
int val;

void setup()
{
    pinMode(A0, INPUT);// set up your input pin
    Serial.begin(9600);// initialize the serial monitor at 9600 baud
}

void loop()
{
    val=analogRead(A0);// read your sensor pin A0 and store that in the "val" variable
    Serial.println(val, HEX);// print that value as a hexidecimal number in the serial monitor
    delay(250);// delay the appropriate amount of time
}
