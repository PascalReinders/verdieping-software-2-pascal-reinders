#include <iostream>
#include <bits/stdc++.h>

/*Dit is van de opdracht code challenge functions.
In deze opdracht is er dieper op ingedoken met hoe je functions kan gebruiken
Ik heb de laatste twee opdrachten in deze c++ bestand gedaan om aan te tonen wat ik heb gemaakt.*/

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
    std::string reverse = text;
    std::reverse(reverse.begin(), reverse.end());
    if (text == reverse) return true;
    else return false;
}

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent) {
    if (days > 3 && is_succulent == false) return "Time to water the plant.";
    else if (days < 13 && is_succulent == true) return "Don't water the plant!";
    else if (days >= 13 && is_succulent == true) return "Go ahead and give the plant a little water.";
    else return "Don't water the plant!";
}

int main() {
  
    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";

    std::cout << needs_water(10, false) << "\n";
  
}