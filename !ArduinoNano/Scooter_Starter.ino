void setup() {

  pinMode(5, OUTPUT);
  digitalWrite(5, HIGH);
  
  // initialize Serial1:
  Serial1.begin(9600);
  Serial1.write(0xA6);
  Serial1.write(0x12);
  Serial1.write(0x02);
  Serial1.write(0x10);
  Serial1.write(0x14);
  Serial1.write(0xCF);
  delay(500);
  Serial1.write(0xA6);
  Serial1.write(0x12);
  Serial1.write(0x02);
  Serial1.write(0x11);
  Serial1.write(0x14);
  Serial1.write(0x0B);
}

void loop() {
  delay(500);
  Serial1.write(0xA6);
  Serial1.write(0x12);
  Serial1.write(0x02);
  Serial1.write(0x15);
  Serial1.write(0x14);
  Serial1.write(0x30);
}
