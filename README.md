# PWM_Drawer
Displaying PWM signal by using GLCD and ATMEGA32
GLCD PWM Waveform Display
Overview
This project showcases the real-time graphical display of PWM waveforms on a Graphical LCD (GLCD) using a microcontroller, Input Capture Unit (ICU), General Purpose Timer (GPT), and Digital Input/Output (DIO). The system captures and processes the PWM signal, converts it into waveform data, and then displays the waveform on the GLCD.

# Features
* Real-time PWM waveform display on a GLCD
* Uses GPT timers for precise delays and display refresh rates
* ICU to capture the PWM duty cycle and frequency
* Visualizes the rising and falling edges of PWM signals
* Adjustable time scaling for waveform representation

# System Architecture
* **Microcontroller** : Processes the PWM signal, handles ICU, GLCD communication, and PWM generation.
* **GLCD** (Graphical LCD): Displays the PWM waveform in real-time.
* **GPT** (General Purpose Timer): Generates precise delays to synchronize waveform display updates.
* **ICU** (Input Capture Unit): Captures the PWM signal's duty cycle and frequency.
* **PWM Module**: Generates PWM signals for output, which can be visualized on the GLCD.
* **DIO** (Digital Input/Output): Controls GLCD communication for data and control signals.

# Hardware Requirements
* Microcontroller (e.g., ATMEGA32)
* Graphical LCD (GLCD) (128x64 or higher resolution)
* PWM Signal Source (internal)
* ICU Input Pin (for PWM signal capture)

**Software Requirements**
* Embedded C/C++ for microcontroller programming
* GLCD Library for waveform rendering
* ICU and GPT libraries for PWM capture and timing

