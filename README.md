Switch-Case Home Work [C++]
========================

A console-based C++ application created as a **college homework assignment**, demonstrating a multi-functional menu-driven system using switch-case structures. This project integrates mathematical operations, statistical calculations, array manipulations, simple educational features, and ASCII art generation.

---

### Table of Contents
1. [Features](#features)
2. [Functions Overview](#functions-overview)
---

### Features
- **Math Operations**: Addition, subtraction, multiplication, division, modulus, exponentiation, and power calculations
- **Trigonometric Functions**: Sine, cosine, exponential (e^x), and logarithmic calculations
- **Statistical Tools**: Variance and average computation for user-input arrays
- **Array Patterns**: Generate triangular (top/bottom) random number arrays
- **Simple Educational Tool**: Multiplication quiz with instant feedback
- **ASCII Art**: Render shapes like flowers, hearts, boats, houses, and spaceships
---

### Functions Overview
#### **Core Mathematical Functions**
1. **`sum(float num1, float num2)`**
   - **Purpose**: Adds two numbers.
   - **Return**: `num1 + num2`.

2. **`sub(float num1, float num2)`**
   - **Purpose**: Subtracts two numbers.
   - **Return**: `num1 - num2`.

3. **`multi(float num1, float num2)`**
   - **Purpose**: Multiplies two numbers.
   - **Return**: `num1 * num2`.

4. **`div(float num1, float num2)`**
   - **Purpose**: Divides two numbers.
   - **Return**: `num1 / num2`.

5. **`mod(int num1, int num2)`**
   - **Purpose**: Computes the modulus of two integers.
   - **Return**: `num1 % num2`.

6. **`power(int num, int power)`**
   - **Purpose**: Computes `num` raised to the power of `power` (integer exponentiation).
   - **Implementation**: Uses a loop to multiply `num` by itself `power` times.

7. **`root(double num)`**
   - **Purpose**: Computes the square root of a number.
   - **Implementation**: Uses `sqrt(num)` from `<cmath>`.

8. **`exponential(float x, int n=10)`**
   - **Purpose**: Approximates `e^x` using a Taylor series expansion.
   - **Formula**: Summation of `x^k / k!` for `k=0` to `n`.

9. **`sinFun(double degree)`**
   - **Purpose**: Computes the sine of an angle in **degrees** (uses `sin()` from `<cmath>`, which expects radians).

10. **`cosFun(double degree)`**
    - **Purpose**: Computes the cosine of an angle in **degrees** (similar to `sinFun`, but uses `cos()`).

11. **`logFun(double num)`**
    - **Purpose**: Computes the natural logarithm of a number.
    - **Implementation**: Uses `log(num)` from `<cmath>`.

12. **`fact(int num)`**
    - **Purpose**: Computes the factorial of an integer recursively.
    - **Base case**: Returns `1` if `num` is `0` or `1`.

#### **Statistical Functions**
13. **`varianceFun(float arr[], int number)`**
    - **Purpose**: Computes the variance of an array of numbers.
    - **Steps**:
      1. Calculates the average (`ave`).
      2. Computes squared differences from the mean.
      3. Returns the average of squared differences.

14. **`aveFun(float arr[], int number)`**
    - **Purpose**: Computes the average of an array of numbers.

#### **Educational Functions**
15. **`multiTeach(int num1, int num2, int answer)`**
    - **Purpose**: Checks a user’s answer to a multiplication quiz.
    - **Logic**:
      - Compares `answer` to `num1 * num2`.
      - Outputs "correct" or "wrong" with the correct answer.

#### **Array Manipulation Functions**
16. **`printTrianTopArray()`**
    - **Purpose**: Prints a **10x10 upper triangular matrix**:
      - Diagonal elements are `9`.
      - Elements above the diagonal are random numbers (1-9).
      - Elements below the diagonal are `0`.

17. **`printTrianBotArray()`**
    - **Purpose**: Prints a **10x10 lower triangular matrix**:
      - Diagonal elements are `9`.
      - Elements below the diagonal are random numbers (1-9).
      - Elements above the diagonal are `0`.

#### **ASCII Art Functions**
18. **`printFlower()`**, **`printSmFace()`**, **`printHeart()`**, **`printBoat()`**, **`printHouse()`**, **`printSpaceShip()`**
    - **Purpose**: Print predefined ASCII art shapes (flowers, hearts, boats, etc.).
    - **Implementation**: Uses loops and `char(219)` (block character) for shapes.

#### **Helper Functions**
19. **`printMenu()`**
    - **Purpose**: Displays the main menu with available options and their keyboard shortcuts.
    - **Output**: Lists options like `+`, `-`, `s` for root, `G` for shapes, etc.

20. **`printShapeMenu()`**
    - **Purpose**: Displays a submenu for selecting ASCII art shapes (e.g., 1 for flower, 2 for smiley face).
