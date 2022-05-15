# Test Plan
## Table no 1: High level test plan
Test ID | Description | Exp I/P | Exp O/P | Actual Output | Type of test  
--------|-------------|---------|---------|---------------|---------------
H_01  | Car is Unlocked | Switch button pressed one time | Car unlocked | Car unlocked | Requirement based
H_02  | Activation of Wiper System | Switch button pressed second time | Wiper activated | Wiper activated | Requirement based
H_03  | Deactivation of Wiper System| Switch button pressed third time | Wiper deactivated | Wiper deactivated  | Requirement based
H_04  | Car is locked | Switch button pressed fifth time | Car is locked | Car is locked | Requirement based

## Table no 2: Low level test plan
Test ID | Description | Exp I/P | Exp O/P | Actual Output | Type of test  
--------|-------------|---------|---------|---------------|---------------
L_01  | Car System ON condition | Button pressed once | Red LED ON | Red LED ON | Requirement based
L_02  | Wiper System gets activated | Button pressed twice | Blue, Green and Orange LEDs ON one by one | Blue, Green and Orange LEDs ON one by one | Requirement based
L_03  | Wiper System gets inactivated | Button pressed thrice | Orange, Green and Blue LEDs OFF one by one | Orange, Green and Blue LEDs OFF one by one | Requirement based
L_04  | Car System OFF condition | Button pressed four times | Red LED OFF | Red LED OFF | Requirement based
