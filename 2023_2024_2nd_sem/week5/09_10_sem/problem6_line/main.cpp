///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Create a program to extract a specific line number from a text file and
/// write it to another file.
///////////////////////////////////////////////////////////////////////////////

#include <fstream>
#include <iostream>
#include <string>

void extractLineToFile(const std::string &inputFilePath,
                       const std::string &outputFilePath, int lineNum) {
  std::ifstream inputFile(inputFilePath);
  std::ofstream outputFile(outputFilePath);
  std::string line;
  int currentLineNum = 1;

  while (std::getline(inputFile, line)) {
    if (currentLineNum == lineNum) {
      outputFile << line << '\n';
      break;
    }
    currentLineNum++;
  }

  inputFile.close();
  outputFile.close();
}

int main() {
  extractLineToFile("input.txt", "specific_line.txt", 3);
  return 0;
}
