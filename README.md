# square-pyramid-calculator

A simple C++ console application that logs student details and computes the total surface area and volume of a square pyramid based on user inputs.

## Math Formulas Used
- **Surface Area**: \(A = b^2 + 2bs\) (where \(b\) is the base edge and \(s\) is the slant height)
- **Volume**: \(V = \frac{1}{3}b^2h\) (where \(b\) is the base edge and \(h\) is the vertical height)

## Features
- **Precise Floating-Point Math**: Uses `double` types and floating-point division (`1.0 / 3.0`) to avoid integer truncation errors.
- **Clean Namespace Management**: Avoids global namespace pollution by explicitly utilizing `std::` prefixes.
- **Formatted Summary**: Generates a clean output receipt containing student tracking data alongside geometric results.

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
Enter Student Name: John Doe
Enter Section: BSCS-1A

Enter b: 4
Enter h: 6
Enter s: 5

----- PYRAMID CALCULATOR -----
Student Name: John Doe
Section: BSCS-1A

Surface Area of Square Pyramid: 56
Volume of Square Pyramid: 32
```
