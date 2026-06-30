# square-pyramid-calculator

A C++ console application that logs student identification details and performs geometric computations to determine the total surface area and volume of a square pyramid.

## Math Formulas Used
- **Surface Area**: \(A = b^2 + 2bs\) (where \(b\) is the base edge and \(s\) is the slant height)
- **Volume**: \(V = \frac{1}{3}b^2h\) (where \(b\) is the base edge and \(h\) is the vertical height)

## Features
- **Student Data Logging**: Prompts for and displays student profile tracking information (Name and Section) alongside calculation metadata.
- **Dimensional Input Processing**: Accepts decimal dimensions for the base edge (\(b\)), vertical height (\(h\)), and slant height (\(s\)).
- **High-Precision Computations**: Prevents integer truncation bugs by processing geometric equations using floating-point types (`double`).
- **Structured Execution Summary**: Outputs a clean, formatted terminal layout aggregating student tracking metrics with calculations.

## Requirements
- A modern C++ compiler (e.g., GCC/MinGW, Clang, MSVC).

## Compilation and Execution

Compile the source code using `g++`:
```bash
g++ main.cpp -o pyramid
```

Run the compiled executable:
```bash
.\pyramid
```

## Example Usage
```text
Enter Student Name: Jane Doe
Enter Section: BSCS-1B

Enter b: 6
Enter h: 4
Enter s: 5

----- PYRAMID CALCULATOR -----
Student Name: Jane Doe
Section: BSCS-1B

Surface Area of Square Pyramid: 96
Volume of Square Pyramid: 48
```
