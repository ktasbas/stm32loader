// M. Kaan Tasbas | mktasbas@gmail.com

// STM32F103 sketch

/**
 * USART1 Pins (Serial):
 * CK PA8
 * TX PA9
 * RX PA10
 * CTS PA11
 * RTS PA12
 * 
 * unable to identify other serial pins listed at:
 * http://embedded-lab.com/blog/stm32-serial-communication/
 */

void setup() {
  Serial.begin(115200, SERIAL_8E1);   // STM32 USB port = 8 bit, even parity, 1 stop bit
  //Serial1.begin(115200, SERIAL_8E1);
  //Serial2.begin(115200, SERIAL_8E1);
  //Serial3.begin(115200, SERIAL_8E1);
  pinMode(PC13, OUTPUT);
}

void loop() {
  Serial.println("5");
  //Serial1.println("*");
  //Serial2.println("*");
  //Serial3.println("*");
  delay(100);

  digitalWrite(PC13, HIGH - digitalRead(PC13));   // toggle LED

}

void initChip(void)
{
  
}
