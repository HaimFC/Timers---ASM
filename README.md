# MSP430 Embedded Systems Project

This repository contains the source code and documentation for a set of MSP430 embedded systems labs. The labs focus on implementing modular and portable systems using abstraction layers, timers, GPIO, FSM architecture, and interrupt-driven programming.

---

## 📋 Project Overview

### Features
- **GPIO and Button Handling**:
  - Interfacing LEDs and buttons with interrupt handling and debouncing.
- **Timers**:
  - Advanced use of Basic Timer and Timer_B modules for precise timekeeping and event triggering.
- **FSM (Finite State Machine)**:
  - Implementation of state transitions triggered by external inputs, including advanced features such as context saving and prioritized states.
- **LCD Display**:
  - Integration with an LCD for dynamic data visualization.
- **Frequency Measurement**:
  - Using capture mode to measure external clock frequencies dynamically.
- **Low Power Modes**:
  - Optimizing power usage by entering sleep modes during idle states.
- **Portable Design**:
  - Modular code structure for easy portability between MSP430x2xx and MSP430x4xx families.

---

## 🔧 How to Run

### Software Requirements
- **IAR Embedded Workbench**:
  - Use to compile and debug `.s43` assembly files.

### Hardware Requirements
- MSP430 Development Board:
  - Buttons connected to `P2.0` and `P2.1`.
  - LEDs connected to `PORT1` or `PORT2`.
  - LCD Display connected to `P1` and `P2.5`, `P2.6`, `P2.7`.
  - Signal generator for frequency measurement tasks.

### Execution Steps
1. **Code Preparation**:
   - Include all `.s43` files in the IAR project.
   - Configure the hardware connections as specified.
2. **Compile and Flash**:
   - Compile the project and upload it to the MSP430 microcontroller.
3. **Test Features**:
   - Interact with the buttons to trigger FSM states.
   - Observe LED behaviors, LCD updates, and PWM outputs.
   - Measure external frequencies using the frequency counter mode.

---

## 📝 Key Concepts and Features

### Abstraction Layers
1. **BSP (Board Support Package)**:
   - Hardware-specific configuration, including GPIO initialization and timer setups.
2. **HAL (Hardware Abstraction Layer)**:
   - Mid-level routines for peripheral interaction (e.g., LED and button control).
3. **API (Application Programming Interface)**:
   - High-level logic providing a clean interface to the application layer.
4. **Application Layer**:
   - Implements FSM logic, user interaction, and system management.

### FSM Implementation
- **Idle State**:
  - Entering low-power mode with all peripherals off.
- **State 1**:
  - Countdown timer displayed on the LCD, ending at `00:00`.
- **State 2**:
  - Frequency measurement and dynamic LCD updates for values between 20 Hz and 20 kHz.
- **State 3**:
  - PWM signal generation with a 75% duty cycle at 4 kHz.

### Timer Usage
- **Basic Timer**:
  - Configured for 1-second and 8 µs intervals.
- **Advanced Timer (Timer_B)**:
  - Used for capture and compare modes to measure frequencies and generate PWM signals.

---