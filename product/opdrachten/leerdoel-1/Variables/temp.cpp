#include <iostream>

// Challenge: Temperature (Part 1)
/*Now that we’ve learned about the basics of 
variables and cin, which stands for “character input”, reads user input from the keyboard. let’s write a program!

The mad scientist Kelvin has mastered predicting the weather in his mountain-side meteorology lab.
Recently, Kelvin began publishing his weather forecasts on his website, however, there’s a problem: All of his forecasts describe the temperature in Fahrenheit degrees.
Let’s convert a temperature from Fahrenheit (F) to Celsius (C).
The formula is the following: C=(F−32)/1.8

1.
First, google the current temperature of New York in Fahrenheit.
Declare a double.
Declare another double variable named tempc.

2. Calculate the temperature to Celsius. Store it in tempc.
3. Display the result.
Output exactly this: The temp is [tempc] degrees Celsius.
Copy to Clipboard. Don’t forget to add a \n.

4. Compile the program using the terminal.
5. Now execute the output file using the terminal.*/

// Challenge: Temperature (Part 2)
/* Let’s ask the user what the temperature is using cin!
1. Tell the user “Enter the temperature in Fahrenheit: “ using std::cout.
And get their input using std::cin and store it in tempf.

2.Compile and execute your program using the terminal.
If you see an error message after compiling correctly, continue on and execute your program. You should pass after executing.*/

int main() {
    // Part 1
    double tempf = 57;
    double tempc;

    tempc = (tempf - 32)/1.8;  
  
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";

    // Part 2
    tempf = 0;
    tempc = 0;
  
    // Ask the user
  
    std::cout << "Enter the temperature in Farenheit\n";
    std::cin >> tempf;
  
    tempc = (tempf - 32) / 1.8;
  
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";

}