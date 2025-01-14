# Unexpected Behavior with std::vector<bool>

This repository demonstrates a potential issue with the `std::vector<bool>` specialization in C++.  The standard doesn't mandate a specific implementation, but many implementations optimize memory usage by storing bools as bits. This optimization can lead to unexpected behavior when directly accessing elements.

The `bug.cpp` file shows a simple example where accessing a `std::vector<bool>` element doesn't behave as expected.  The `bugSolution.cpp` demonstrates the proper method for accessing the elements and avoiding this problem.

## Problem
Directly accessing elements of `std::vector<bool>` might not return a `bool` value but a proxy object.  This can cause issues when you expect a boolean value. 

## Solution
To avoid this, consider using the `at()` method or explicitly casting to `bool`.