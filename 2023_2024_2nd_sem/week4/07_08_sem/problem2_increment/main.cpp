///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Increment Value
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function `void increment(int &value)`
/// that increments the value of
/// the passed integer by 1.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

void increment(int &value) { value++; }

int main() {
  int x = 5;
  increment(x);
  std::cout << "x is now " << x << std::endl;
  return 0;
}