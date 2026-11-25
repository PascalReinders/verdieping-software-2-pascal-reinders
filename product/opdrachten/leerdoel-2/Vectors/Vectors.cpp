#include <iostream>
#include <vector>

/*Bij deze opdracht heb ik deze dingen geleerd.
- Hoe je een vector aanmaakt en initialiseert.
- Hoe de index werkt en hoe je er een oproept.
- Hoe je iets toevoegt en weer verwijderd uit een vector.
- Hoe je de lengte van een vector terug kan zien.
- Hoe je een loop gebruikt om door een vector te gaan.
*/

int main() {

    // index oproepen
    std::vector<double> subway_adult = {800, 1200, 1500};
    std::vector<double> subway_child = {400, 600, 750};
  
    std::cout << subway_child[2] << "\n";

    // hoe je elementen in een vector toevoegt en hoe je de lengte kan terugzien van de vector.

    std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
    grocery.push_back("Mushrooms");
    grocery.push_back("Tomatoes");
    grocery.push_back("Milk");

    std::cout << grocery.size() << "\n";

    // eindopdracht hoe je met loops een vector gebruikt

    std::vector<int> numbers = {2, 4, 3, 6, 1, 9};

    int even = 0;
    int odd = 1;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) even += numbers[i];
        else odd *= numbers[i];
    }

    std::cout << "Sum of even numbers is " << even << "\n";
    std::cout << "Product of odd numbers is " << odd << "\n";
}