# Week 02
Sep 14, 2026 (Mon)

## Literals, Variables & Constants + Quiz #1


### Task 2-1: Define v.s. Const Number

```
Circle radius = 5, Area = 78.5397
Area with explicit casting = 78.5397
```

[lab2-1.cpp](lab2-1.cpp)

---

### Exercise 2-1: 2x2 Matrix inverse

Rules: Write a C++ program to calculate the inverse of a 2x2 matrix.

Given a 2x2 matrix:
$$
\begin{bmatrix}
a & b \\\\
c & d
\end{bmatrix}
$$

the determinant of A is:

$$
\text{det}(A) = ad - bc
$$

and the inverse matrix is:

$$
A^{-1} = \frac{1}{\text{det}(A)} \begin{bmatrix}
d & -b \\\\
-c & a
\end{bmatrix}
$$

Input:
- Four matrix elements a, b, c, d would be given, each of which is an integer within the range of -10 to 10.
- The determinant from given input is non-zero, so the given matrix is always invertible.
- Define the four matrix elements directly in your code as variables, without reading input from the user.

```
Original Matrix:
4 7
2 6
Inverse Matrix:
0.6 -0.7
-0.2 0.4
```

[ex2-1.cpp](ex2-1.cpp)

---

### Exercise 2-2: Variance

Requires: Write a C++ program to calculate the avgerage and variance of scores for Math, Physics, and Chemistry.

Formula:

$$
\text{Average Score: } \mu = \frac{\text{Score}_{\text{Math}} + \text{Score}_{\text{Physics}} + \text{Score}_{\text{Chemistry}}}{3}
$$

$$
\text{Variance}: \sigma^2 = \frac{(\text{Score}_{\text{Math}} - \mu)^2 + (\text{Score}_{\text{Physics}} - \mu)^2 + (\text{Score}_{\text{Chemistry}} - \mu)^2}{3}
$$

Input:
- Three subject scores must be integers within the range of 0 to 100.
- Define the scores directly in your code as variables (do not read input from the user).

```
Math: 80
Physics: 90
Chemistry: 70
Average: 80
Variance: 66.6667
```

[ex2-2.cpp](ex2-2.cpp)
