// Neil Kumaran
// 11/25/2024
// Mrs. Alblas
// Pizza Shop Functions
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// make those constants
const string PIZZA_SHOP_NAME = "Delicious Pizza Shop";
const double PRICE_SMALL_PIZZA = 8.99;
const double PRICE_LARGE_PIZZA = 12.99;
const double PRICE_PER_TOPPING = 1.50;
const double NJ_SALES_TAX = 0.06625;

// calc (short for caluculate) price
//basically, that entire questionmark thing is a ternary operator, and itll be able to shorten
//an if stateent into one line when ur doing something very simple.
double calculatePrice(char size, int numToppings) {
    double basePrice = (size == 'S' || size == 's') ? PRICE_SMALL_PIZZA : PRICE_LARGE_PIZZA;
    double totalPrice = basePrice + (numToppings * PRICE_PER_TOPPING);
    return totalPrice + (totalPrice * NJ_SALES_TAX); // Adding sales tax
}

// display bill lol
void displayBill(string customerName, char size, int numToppings, double totalPrice) {
    cout << fixed << setprecision(2); // Set precision to 2 decimal places
    cout << "\n--- " << PIZZA_SHOP_NAME << " ---\n";
    cout << "Customer: " << customerName << endl;
    cout << "Pizza Size: " << (size == 'S' || size == 's' ? "Small" : "Large") << endl;
    cout << "Number of Toppings: " << numToppings << endl;
    cout << "NJ Sales Tax is " << NJ_SALES_TAX * 100 << "%\n";
    cout << "Total Price: $" << totalPrice << endl;
    cout << "Thank you for your order!\n";
}

int main() {
    string customerName;
    char pizzaSize;
    int numToppings;

    // get user input
    cout << "Enter your name: ";
    getline(cin, customerName);
    cout << "Enter pizza size (S for Small, L for Large): ";
    cin >> pizzaSize;
    cout << "Enter number of toppings: ";
    cin >> numToppings;

    // get total
    double totalPrice = calculatePrice(pizzaSize, numToppings);

    // show tha bill
    displayBill(customerName, pizzaSize, numToppings, totalPrice);

    return 0;
}
