## auto-lockup
lock your computer with a wave...



#### Hardware

* [Adafruit Feather M0 Wifi](https://www.adafruit.com/product/3010) or any arduino with I2C and native USB
* [VL53L0X time-of-flight distance sensor](https://www.adafruit.com/product/3317)

#### Setup

Set keyboard shortcut, so that CTRL + m stops music

How to set keyboard shortcuts
* [Ubuntu](http://web.archive.org/web/20150912214739/https://help.ubuntu.com/stable/ubuntu-help/keyboard-shortcuts-set.html.en)
* [OSX](http://web.archive.org/web/20160904002703/http://computers.tutsplus.com:80/tutorials/how-to-set-up-custom-keyboard-shortcuts-on-your-mac--mac-176)
* [Windows 10](http://web.archive.org/web/20180102215344/https://www.laptopmag.com/articles/create-keyboard-shortcuts-windows-10)

Connect VL53L0X to feather as shown in diagram
![diagram](https://cdn-learn.adafruit.com/assets/assets/000/048/762/medium640/adafruit_products_m0_vl53l0x_bb.png?1534097917)

Upload autoLockup sketch to feather with arduino IDE

Mount device
* near computer 
* with distance sensor facing you
* leave plugged into computer / USB hub

**Wave hand near sensor (<8 cm away) and let auto-lockup do the rest!**
