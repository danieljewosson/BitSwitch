# BitSwitch

This project demonstrates how to manage the state of multiple switches using a single 8-bit variable and bit shifts.

## How It Works

We use a variable of type `uint8_t`:

uint8_t switches = 0b00000000;

Each bit represents the state of a switch:

0 — the switch is OFF

1 — the switch is ON

# For example 

0000 0000 means that all switches are turned off.

If the first switch is turned on: 0000 0001

If all three switches are turned on: 0000 0111

Each switch is controlled by a separate bit inside the same variable.

# Why Use Bit Shifts

Using bit operations allows us to store the state of multiple switches inside a single variable instead of using separate bool variables.

For example,instead of:

bool LED_PIN;
bool WIFI_PIN;
bool BLUETOOTH_PIN;

we can use: uint8_t system = 0b00000000;
This makes the code more compact and is especially useful in microcontroller programming, where memory and performance can be important.

# Features
The program provides functions to:

Turn a switch ON
Turn a switch OFF
Display the current state of all switches
Exit the program

# Purpose
This project is a simple exercise for learning:

Bitwise operations

Bit shifts

Binary numbers

uint8_t

Managing multiple states using a single variable

Basic microcontroller programming concepts

It's a great exercise for getting familiar with bit manipulation and microcontroller programming.
