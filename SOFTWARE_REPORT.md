CODE ON ARDUINO IDE:
Adafruit Library installed
 1. Sensor_Node_X.ino
    -C++/C
    -Dependencies
      -RadioHead.h
      -SPI.H
      -Adafruit_VEML7700.h
      -Adafruit_SHT31.h
      -Adafruit_SleepyDog.h
 2. client_node.ino
    -C++/C
    -Dependencies
      -RadioHead.h
      -SPI.H
--TO RUN--
1. Open .ino using Arduino IDE
2. Connect Feather M0 to computer using usb-microusb
3. Hit Upload on upper left-hand corner
4. Wait for upload to finish

CODE ON DEKSTOP
NODEJS installed
  1. SerialTest.js
     -NODEJS
     -Dependencies
        -ThingSpeakClient
        -serialport
        -prompt-sync
--TO RUN--
1. Install NODEJS https://nodejs.org/en/download/
2. Make sure MotherNode is connected to computer, CANNOT be used by another program, connection will be blocked
3. Open command prompt
4. Go to directory where file is
5. Run command "Node [FILENAME]" where [FILENAME] is the name of the file with the extension

CODE ON WINDOWS
1. PANinstall.bat
2. runMESH.bat
  -Dependencies
    -SerialTest.js
--TO RUN--
1. Open any command prompt
2. Go to where the .bat files are (they should be grouped together, with the NODEJS code)
3. Double click PANinstall.bat first, runMESH may not run if done out-of-order
4. Double click runMESH.bat