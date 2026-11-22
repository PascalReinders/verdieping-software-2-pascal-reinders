#include <string>
//Function Overload

int fancy_number(int num1, int num2) {
  
  return num1 - num2 + (num1 * num2);
  
}

int fancy_number(int num1, int num2, int num3) {
  
  return num1 - num2 - num3 + (num1 * num2 * num3);
  
}

int fancy_number(double num1, double num2) {
  
  return num1 - num2 + (num1 * num2);
  
}

// How to Get Your Functions Inline
std::string goodnight2(std::string thing1, std::string thing2) {
  return "Goodnight, " + thing1 + " jumping over the " + thing2 + ".\n";
}