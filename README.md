# DSA Learning Journey - [start: August 18, 2024]

Today, I focused on the following C++ concepts:

## Concepts Covered
- Functions
- GCD (Greatest Common Divisor)
- Pointers

## Code Snippets

```cpp
// Function to Add Two Numbers
int add(int a, int b) {
    return a + b;
}

// GCD Using the Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Pointer Example
int var = 20;
int *ptr = &var;
