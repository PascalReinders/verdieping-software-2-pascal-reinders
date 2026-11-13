#include <iostream>

/* Bij de opdracht: Conditionals & Logic moet ik leren om if / elseif / else en switch toe te passen in C++
Ik moest simpele opdrachten maken zoals de PH level meten met if else statements.
En pokemon karakters in een switch statement neerzetten en dat opzoeken met een integer.

simpele opdrachten, maar ik weet nu wel dat deze hetzelfde zijn als in C#. Vandaag dat ik dit gedeelte vrij weinig hoef door te leren.
*/

int main() {

    double ph = 4.6;
  
    // Write the if, else if, else here:
  
    if (ph > 7){
        std::cout << "Basic\n";
    } else if (ph < 7){
        std::cout << "Acidic\n";
    } else {
        std::cout << "Neutral\n";
    }

    int number = 9;
  
    switch(number) {
    
        case 1 :
        std::cout << "Bulbusaur\n";
        break;
        case 2 :
        std::cout << "Ivysaur\n";
        break;
        case 3 :
        std::cout << "Venusaur\n";
        break;
        case 4 :
        std::cout << "Charmander\n";
        break;
        case 5 :
        std::cout << "Charmeleon\n";
        break;
        case 6 :
        std::cout << "Charizard\n";
        break;
        case 7 :
        std::cout << "Squirtle\n";
        break;
        case 8 :
        std::cout << "Wartortle\n";
        break;
        case 9 :
        std::cout << "Blastoise\n";
        break;
        default :
        std::cout << "Unknown\n";
        break;
  
    }
}