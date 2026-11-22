#include <iostream>
#include <ctime>

/*In de opdracht Functions heb ik twee dingen geleerd voor c++:
- Hoe build-in functions werken
- En de verschillende manieren hoe je zelf Functions codeert.
*/

// Define name_x_times() below:
void name_x_times(std::string name, int x) {
    while (x > 0) {
        std::cout << name;
        x--;
    }
}


int main() {
    // This seeds the random number generator:
    srand (time(NULL));
  
    // Use rand() below to initialize the_amazing_random_number
  
    int the_amazing_random_number = rand() % 29;
    std::cout << the_amazing_random_number << "\n";

    std::string my_name = "Pascal\n";
    int some_number = 5; // Change this if you like!
    // Call name_x_times() below with my_name and some_number

    name_x_times(my_name, some_number);
  
  
}