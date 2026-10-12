# Number System Converter (C++)

A C++ command-line application that converts multiple decimal integers into binary, octal, or hexadecimal.

## Features

- Converts decimal integers to binary (base 2), octal (base 8), and hexadecimal (base 16).
- Converts multiple numbers in a single run.
- Implements the conversion algorithm using repeated division and remainders.
- Uses reusable functions, vectors, and strings to organize the program.

## Technologies

- C++
- Standard Library: `iostream`, `vector`, `string`, and `algorithm`

## How It Works

The program accepts a list of decimal integers and a target number system. It repeatedly divides each number by the selected base, collects the remainders, and reverses them to produce the converted representation.

For hexadecimal output, values from 10 to 15 are represented by the letters A to F.

## How to Run

1. Compile the source file using a C++ compiler:

   ```bash
   g++ numberSystem_convertor.cpp -o converter
   ```

2. Run the program:

   ```bash
   ./converter
   ```

   On Windows, run:

   ```bash
   converter.exe
   ```

3. Enter the number of values, provide the decimal integers, and select `binary`, `octal`, or `hexa`.

## Scope and Limitations

- Accepts non-negative integers within the supported `int` range.
- Supports conversion from decimal to binary, octal, and hexadecimal only.
- Does not currently validate all user inputs or support negative integers.

## Learning Objectives

This project explores basic number-system conversion, modular arithmetic, functions, vectors, strings, loops, and standard library algorithms in C++.
