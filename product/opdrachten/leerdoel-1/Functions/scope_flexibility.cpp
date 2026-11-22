/*Bij deze opdracht heb ik deze dingen geleerd:
- Hoe ik Header files gebruik
- Hoe ik Functies inline krijg
- Wat een Function overload is
- Hoe je Function templates gebruikt
*/

#include <iostream>
#include <chrono>
//numbers.cpp en numbers.hpp horen bij deze file
#include "numbers.hpp"

int main() {
  
    //Function templates
    std::cout << get_smallest(100, 60) << "\n";
    std::cout << get_smallest(2543.2, 3254.3) << "\n";

    //Function Overload
    std::cout << fancy_number(12, 3) << "\n";
    std::cout << fancy_number(12, 3, 19) << "\n";
    std::cout << fancy_number(13.5, 3.8) << "\n";

    // How to Get Your Functions Inline
    // Measure time taken for goodnight1():
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    std::cout << goodnight1("tulip");
  
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> time_span = end - start;

    // Print time taken for goodnight1():
    std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";
  
  
    std::cout << goodnight2("eraser", "ivy");
  
}