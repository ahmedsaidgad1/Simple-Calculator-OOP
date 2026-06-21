# Simple Calculator (OOP)

A console-based C++ project demonstrating core Object-Oriented Programming concepts through a simple stateful calculator class.

## Overview

`clsSimpleClac` models a basic calculator that keeps track of running totals, the last operation performed, and supports undoing the most recent action — all through encapsulated state and public methods.

## Features

- Basic arithmetic operations: **Add**, **Subtract**, **Multiply**, **Divide**
- Division-by-zero protection (prints an error instead of crashing)
- Tracks the last operation performed and the last operand used
- **Undo** support via `CancelLastOperation()`, reverting to the previous result
- **Clear** function to reset the calculator to its initial state
- Encapsulation: all internal state is private, accessed only through public methods

## Sample Output

```
Result After Multiply 2 is: 60
```

(Starting from a cleared state: `Add(10)` → 10, `Add(20)` → 30, `Multiply(2)` → 60)

## How to Build & Run

**Requirements:** A C++ compiler that supports C++17 (e.g. `g++`).

```bash
g++ -std=c++17 main.cpp -o simple_calculator
./simple_calculator
```

## Concepts Demonstrated

- Class design and encapsulation (private data members, public interface)
- Maintaining object state across multiple method calls
- Basic input validation (guarding against division by zero)
- A simple undo mechanism using a stored previous state

## Author

**Ahmed Said Gad**
[GitHub](https://github.com/ahmedsaidgad1)

## License

This project is licensed under the MIT License — see the [LICENSE](LICENSE) file for details.
