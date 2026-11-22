// Replace these declarations with a template
template <typename T>

T get_smallest(T num1, T num2) {
  return num2 < num1? num2 : num1;
}

//Function Overload
int fancy_number(int num1, int num2);
int fancy_number(int num1, int num2, int num3);
int fancy_number(double num1, double num2);

// How to Get Your Functions Inline
inline
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}
std::string goodnight2(std::string thing1, std::string thing2);