## ENCODER-DECODER

**I2C protocol implementation in arduino**

The master takes in a 2 digit number from serial  and encodes it into code , the encoding algorithm can be anything .
It then sends the encoded digits to the slave.

The slave decodes the encoded input and switches on RGB LEDs , wherein the colours of LED correspond to the input 2 digit.
Mster and slave communicate via I2C.

![image](https://user-images.githubusercontent.com/85502194/176367584-3c1ede44-7365-41c7-b630-627ec6a2b911.png)
