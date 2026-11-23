# Attribution

## Source repository

This repository contains an Arduino Uno / ATmega328 implementation for the
ELEGOO Tumbller V1.1 self-balancing robot.

## Upstream origin

The original official ELEGOO source, schematics and 3D model are provided at:

- https://github.com/elegooofficial/ELEGOO-TumbllerV1.1-Self-Balancing-Car-Tutorial
- Official source package: `Tumbller_Code_20191012.zip`

The official repository does not include a LICENSE file. This attribution
documents provenance and source mapping; it does not grant a license or claim
commercial-use permission.

## Educational and non-commercial use

**Commercial use is not permitted.** This project is intended exclusively for
educational, personal and non-commercial learning use. Commercial use, including
use in commercial products, services or distribution, requires separate written
permission from the relevant rights holders.

## Source mapping

| File or component | Source role |
|---|---|
| `src/main.cpp` | ELEGOO Tumbller program structure and control flow |
| `src/BalanceCar.h` | ELEGOO Tumbller balance, speed and turn control |
| `src/KalmanFilter.h`, `src/KalmanFilter.cpp` | Kalman/complementary filter implementation |
| `src/MPU6050.h`, `src/MPU6050.cpp` | MPU6050 implementation supplied with the project source |
| `src/I2Cdev.h`, `src/I2Cdev.cpp` | I2Cdev implementation supplied with the project source |
| `src/helper_3dmath.h` | I2C 3D math helper supplied with the project source |
| `src/Pins.h` | ELEGOO Tumbller ATmega328 pin definitions |
| `src/mode.h` | ELEGOO Tumbller operating-mode enumeration |
| `src/Rgb.h` | ELEGOO Tumbller RGB/status implementation |
| `src/Ultrasonic.h` | ELEGOO Tumbller ultrasonic implementation |
| `src/voltage.h` | ELEGOO Tumbller battery-voltage implementation |
| `src/EnableInterrupt.h` | Pin-change interrupt support bundled with the project |
| `src/Adafruit_NeoPixel.h`, `src/Adafruit_NeoPixel.cpp` | Adafruit NeoPixel library implementation included in the project |

## Third-party source notices

The I2Cdev and 3D math helper files include MIT/Copyright notices for Jeff
Rowberg's i2cdevlib code. Those notices must remain in the source files.

The repository URL for this project is:

- https://github.com/OE3KUW/TumbllerVSC
