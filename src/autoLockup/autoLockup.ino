#include <Keyboard.h>
#include <Adafruit_VL53L0X.h>


Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() {
  lox.begin();
  Keyboard.begin();
}

void loop() {
  VL53L0X_RangingMeasurementData_t measure;
  lox.rangingTest(&measure, false);

  if (measure.RangeStatus != 4 && measure.RangeMilliMeter < 80) {
		//stop music
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('m');
    delay(50);
    Keyboard.releaseAll();
			
		delay(50);

		//lock computer
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('l');
    delay(50);
    Keyboard.releaseAll();

    //debounce
    delay(8000);
  }
  
}
