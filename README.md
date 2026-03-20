# ESP32 Motor Driver Test

### Parts

- NodeMCU-ESP32S (Select NodeMCU-32S on PlatformIO)
- BTS7960 High Power Motor Driver
- JGB32-520 Geared DC Motor
- 12V Power Source


### BTS7960 Connections

<img width="415" height="318" alt="image" src="https://github.com/user-attachments/assets/27670713-384e-4954-961b-975a71d46f24" />


- B+ - 5.5 - 27V
- B- - Gnd
- M+ - Motor Positive
- M- - Motor Negative
- VCC - 3V3
- GND - GND
- R_EN - 3V3
- L_EN - 3V3
- RPWM - GPIO 32
- LPWM - GPIO 33

### JGB32-520 Motor Wiring

<img width="400" height="400" alt="image" src="https://github.com/user-attachments/assets/d23bc081-8b04-4efe-ab71-1802ee43db51" />



### References

- [BTS7960 Datasheet](https://www.handsontec.com/dataspecs/module/BTS7960%20Motor%20Driver.pdf)
- [IC Datasheet](https://makerselectronics.com/wp-content/uploads/2016/11/BTS7960.pdf)
- [JGB32-520 Motor Wiring](https://dientuachau.com/motor-encorder-jgb37-520-12v-200rpm#1)
