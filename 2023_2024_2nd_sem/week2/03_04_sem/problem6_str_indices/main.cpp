////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 6: "String indices".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course
///             "Introduction to programming" provided by the Faculty of
///             Computer Science at the Higher School of Economics.
///
/// Work with operator[], and length() property. Consider valid indices of an
/// std::string object.
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

int main() {
  std::string str = "Hello, World!";
  int length = str.length();
  for (int i = 0; i < length; i++) {
    std::cout << "Index " << i << ": " << str[i] << std::endl;
  }
  return 0;
}
