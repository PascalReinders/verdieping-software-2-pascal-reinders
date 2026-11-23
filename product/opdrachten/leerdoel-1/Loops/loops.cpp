#include <iostream>

// Dit waren de belangrijkste leerpunten in de Loops opdracht op codecademy

int main() {
    // Write a while loop here:
    int i = 0;
    int square = 0;
  
    while (i < 10) {
        square = i * i;
        std::cout << i << " " << square << "\n";
        i++;
    }

    // Write a while loop here:
    for (int i = 99; i > 0; i--) {
        std::cout << i << " bottles of pop on the wall.\n";
        std::cout << "Take one down and pass it around.\n";
        std::cout << i - 1 << " bottles of pop on the wall.\n\n";
    }
}