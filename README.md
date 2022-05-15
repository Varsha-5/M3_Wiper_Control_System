# WIPER CONTROL SYSTEM

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/d393eb76e7fa44e687e198aee014522a)](https://app.codacy.com/gh/Varsha-5/M3_Wiper_Control_System?utm_source=github.com&utm_medium=referral&utm_content=Varsha-5/M3_Wiper_Control_System&utm_campaign=Badge_Grade_Settings)

![image](https://github.com/Varsha-5/M2_Project_2022/blob/main/wiper%20(2).jfif)

# INDRODUCTION

The Wiper speed control system is designed to make the vision clear to the drivers driving the car by wiping away the liquid drops sensed by a sensor in the
Windshield wipers are operated by an electric motor. The electric motor is attached to a worm gear, which transmits the necessary force to a long rod that sets the wiper arms in motion. The worm gear is able to generate the force required to move the wipers as fast as they need to move.This project is developed by having the STM32F407 Discover Board.

# HARDWARE REQUIREMENTS

 * STM32F407 Discovery Board
 * Push Button
 * LEDS
 * Resistors
 * Power Supply

# REQUIRED SOFTWARE TOOLS

* STM32cube IDE software for simulation.
* Visual Studio Code.
* Makefile greneration for compiling , testing, analysis and coverage.


# BADGES




## Integrated Tools to GitHub

*  [Codacy](https://www.codacy.com/)
*  [Codiga](https://app.codiga.io/home)

## Contributors List and Summary

|S.No. |  Name   |    Features    |No Test Cases|Test Case Pass|
|:---:|:---:|:---:|:---:|:---:|
|1. | Varsha R B  | Complete project   | 5   | 5    |


## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`0_Abstract`       | Documents specifying the project
`1_Requirements`   | Documents specifying requirements and analysis
`2_Design`         | Documents detailing structural and flow diagram
`3_Implementation` | Documents with code 
`4_TestCases`      | Test cases analysed and solved
`5_Report`         | Document containing the entire project overlook
`6_Output`         | Simulated Images
    

## Challenges Faced and How Was It Overcome

1. **Generation of Makefile:** To overcome this problem research on makefiles was done.
2. **Generation of startup file:** To overcome this startup  resources are utilized.


# GitHub Actions
* Build  using CI
* Static code analysis using cppcheck
* Dynamic Code analysis using Valgrind

## Learning Resources
1. [Car Wiper System](https://wuling.id/en/blog/autotips/car-wipers-components-functions-and-how-they-work)
2. [Arm Cortex M4 Programming](https://microcontrollerslab.com/arm-cortex-m4-architecture/)
3. [Arm Cortex](https://community.arm.com/cfs-file/__key/telligent-evolution-components)
4. [Startup file generation](https://community.silabs.com/s/article/understand-the-gnu-assembler-startup-file-of-cortex-m4?language=en_US)
5. [Makefile generation](https://stackoverflow.com/questions/37372824/writing-a-makefile-for-arm-project)
