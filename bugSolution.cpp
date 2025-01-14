#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec;
  vec.push_back(true);

  // Correct way to access elements:
  bool b1 = vec.at(0); // Using at() method
  bool b2 = static_cast<bool>(vec[0]); // Explicit cast
  std::cout << "b1: " << b1 << std::endl; // Output: b1: 1
  std::cout << "b2: " << b2 << std::endl; // Output: b2: 1

  return 0;
}

//Alternative (more verbose) solution using iterators:
/*
for (std::vector<bool>::iterator it = vec.begin(); it != vec.end(); ++it) {
  bool b = *it;
  std::cout << b << " ";
}
*/