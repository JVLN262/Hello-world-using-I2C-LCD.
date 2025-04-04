This code controls an RGB LED using a potentiometer input on an Arduino:

Pin Definitions:

potPin is connected to analog pin A0, where the potentiometer's middle pin is connected
redPin, greenPin, and bluePin are connected to digital pins 9, 10, and 11, which support PWM output for controlling the RGB LED


Setup Function:

The three LED pins are configured as OUTPUT pins
Loop Function:
The code continuously reads the analog value from the potentiometer (range 0-1023)
Based on this value, it controls the RGB LED in different ways:
Below 200: All colors are OFF (LED is off)
Between 200-699: Only RED is ON at full brightness
Between 700-899: Only GREEN is ON at full brightness
900 or above: Only BLUE is ON at full brightness

Control Mechanism:
analogWrite() is used to control the brightness of each LED color (0 = off, 255 = full brightness)
A small 100ms delay provides stability between readings

In simple terms, turning the potentiometer knob will cycle through off → red → green → blue as you rotate it from minimum to maximum position. This creates a simple color selector controlled by the potentiometer's position.
