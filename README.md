# Morse Code Decoder Project

## Overview

This project combines assembly and C++ code to create a Morse code decoder system using an Arduino platform. The project involves both hardware and software components to read Morse code input and decode it into corresponding English characters and numbers.

## Repository Structure

- **`MorseCode.S`**: Assembly code file responsible for implementing the core functionality of the Morse code decoder.
- **`MorseCode.ino`**: Arduino sketch written in C++ that interfaces with the assembly code and sets up the system.

## Assembly Code (`MorseCode.S`)

The assembly code defines the core logic for the Morse code decoder. It includes functionality to decode Morse code input, mapping it to ASCII characters. The assembly code is integrated with the Arduino sketch using the `extern "C"` block.

## Arduino Sketch (`MorseCode.ino`)

The Arduino sketch initializes serial communication, reads Morse code input from the user, and then calls the assembly code (`decode_morse()`) to display the decoded message. The project involves a delay loop in the `loop()` function for periodic operation.

## Getting Started

1. Connect the Arduino platform to your computer.
2. Upload the `MorseCode.ino` sketch to the Arduino board.
3. Open the Serial Monitor to interact with the Morse code decoder.
4. Enter a Morse code string when prompted.

## Notes

- The Morse code string should be entered with characters separated by a space.
- The `decode_morse()` function decodes the input Morse code and displays the corresponding English characters.

## Dependencies

- Arduino IDE (or compatible development environment).
- Arduino board compatible with the code.

## Author

- Trent Tucker
