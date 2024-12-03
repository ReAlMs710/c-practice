// Neil Kumaran
//Mrs Alblas
// 12/3/2024
#include <iostream>
#include <cmath>

int main() {
    // Problem #1: Ayaan Gill has -5 dollars, absolute value of negative 5?
    int ayaan_dollars = -5;
    int ayaan_absolute_value = std::abs(ayaan_dollars);
    std::cout << "Ayaan Gill has -5 dollars, absolute value of negative 5?" << std::endl; 
    std::cout << "Problem #1: Ayaan's absolute dollar amount is " << ayaan_absolute_value << " dollars.\n";

    // Problem #2: Mano has 25 fake AirPods, what is the square root of them?
    int mano_airpods = 25;
    double mano_airpods_sqrt = std::sqrt(mano_airpods);
    std::cout << "Problem #2: The square root of Mano's fake AirPods is " << mano_airpods_sqrt << ".\n";

    // Problem #3: John has 5 bananas, what is 5 raised to the power of 2?
    int john_bananas = 5;
    double john_bananas_squared = std::pow(john_bananas, 2);
    std::cout << "Problem #3: John's bananas raised to the power of 2 equals " << john_bananas_squared << ".\n";

    return 0;
}
