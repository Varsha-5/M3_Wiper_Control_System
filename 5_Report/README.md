# WIPER CONTROL SYSTEM

![image](https://github.com/Varsha-5/M2_Project_2022/blob/main/wiper%20(2).jfif)

# INDRODUCTION

The Wiper speed control system is designed to make the vision clear to the drivers driving the car by wiping away the liquid drops sensed by a sensor in the
Windshield wipers are operated by an electric motor. The electric motor is attached to a worm gear, which transmits the necessary force to a long rod that sets the wiper arms in motion. The worm gear is able to generate the force required to move the wipers as fast as they need to move.This project is developed by having the STM32F407 Discover Board.

# AIM & OBJECTIVE

*  It is used to maintain the windscreen sufficiently clean for driver's visibility specifically for modern high speed vehicle.
*  It helps to avoid accidents caused due to blurry windsheild.

# FEATURES

Ignition Key Position at ACC: The Red LED is ON, if the user button is pressed and held for 2 secs at first press.
Wiper ON: Wiper is OFF: On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency at second press.
FREQUENCY VARIATION: The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz .
Wiper OFF: Wiper is ON: The LED glow pattern stops on the 4th press.
Ignition Key Position at Lock: The Red LED is OFF, if the user button is pressed and held for 2 secs at fifth press.


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

# DESCRIPTION OF COMPONENTS

## STM32F407VG

The STM32F407 Kit is a  high-performance  microcontroller which has the capability to make it simple for users to create applications. 
It has  an ST-LINK embedded debug tool, an ST-MEMS digital accelerometer, a digital microphone, an audio DAC with integrated class D speaker driver, LEDs, pushbuttons and USB OTG micro-AB connector, Ethernet connectivity, an LCD Display and other features have been added ti the STM32F4 DISCOVERY kit.The STM32F405xx and STM32F407xx families are built around the high performance Arm cortex -M4 bit RISC core, which runs at up to 168 MHz.

##  SPECIFIC FEATURES OF STM32F407VG MICROCONTROLLER

* Up to 1 Mbyte of flash memory
* Up to 192+4 Kbytes of SRAM including 64-Kbytes of CCM (Core Coupled Memory) data RAM.
* 512 bytes of OTP memory.
* Flexible static memory controller supporting Compact flash SRAM, PSRAM, NOR and NAND memories


# WORKING

This project named car wiper system is designed by using the microcontroller. Ignition Key Position at ACC is indicated by the Red LED being  ON, if the user button is pressed and held for 2 secs at first press.The Wiper ON on  the second press of the user and three LED's namely Blue, Green and Orange LEDs come ON one at a time with the pre-defined frequency. The frequency variation is indroduced  on every alternate key press with frequency levels of 1, 4 and 8 Hz.The Wiper OFF is indicated by stopping the LED glow pattern on the 4th press.Ignition Key Position at Lock is demonstrated by making the Red LED is OFF, if the user button is pressed and held for 2 secs at fifth press.

# USES

* Rain-sensing windshield wipers detect moisture on the windshield and activate the wipers to help increase driver visibility.
* It helps in considerable degradation in the number of accidents caused by the blur windsheild.

# 4W'S AND 1H

## WHERE 

*  It is a device used to remove rain, snow, ice, washer fluid, water, and/or debris from a vehicle's front window in most of the automobiles.

## WHY

* The primary objective of the wiper system is to clean the wind screen sufficiently to provide clear visibility at all the time.

## WHEN 

* The windshield wipers clear away rain and snow from the windshield while the headlights help us to get better visibility at time of rain.

## WHAT

* Wiper system is used to remove the dust, water, oil and snow by moving at a pre-defined angle.

## HOW

* The arm is powered by a motor, often an electric motor, although pneumatic power is also used for some vehicles. The blade is swung back and forth over the glass, pushing water, other precipitation, or any other impediments to visibility, from its surface.

# SWOT ANALYSIS

 ![image](https://github.com/Varsha-5/M1_Project-name/blob/main/swot%20pic.png)

## STRENGTH

* Avoid  accidental situation
* Ensures safety


## WEEKNESS

* Limited speed 
* Latency.
* Cost.
* Maintainance.


## OPPORTUNITIES

* Technology can drive  the system cost.


## THREATS

* Cost
* Maintaining the efficacy.


# DETAIL REQUIREMENTS

## High Level Requirements
| ID | Description | Status |
|--|--|--|
| HR01 | Locking the car  | Implemented |
| HR02 | Unlocking the car | Implemented |
| HR03 | Triggering Wiper System |  Implemented |
| HR04 | Shutting Wiper System |  Implemented |


## Low Level Requirements 

| ID | Description |  Status |
|--|--|--|
| LR01 | Switch pressed once and held for 2secs - ON LED RED  |  Implemented |
| LR02 | Switch pressed second time - OFF LED RED| Implemented |
| LR03 | Switch pressed third time  - ON BLUE, GREEN, ORANGE | Implemented |
| LR04 | Switch pressed fourth time - ON BLUE, GREEN, ORANGE on varying the frequency | Implemented |
| LR05 | Switch pressed fifth time and held for 2secs - Wiper is Deactivated | Implemented |




