//Neil Kumaran
// 5/20/25
// Company Consistency Lab
// Extra: Using constants and using transform()

#include <iostream>
#include <string>
#include "communications.h"
#include "discounts.h"

using namespace std;

int main() {
    int price;
    string name;
    string address;
    string prodName;
    int prodPrice;
    string discountCode;
    int discountPrice;

    cout << "Welcome to Industry Company Inc!\n";
    
    cout << "What is your name >> ";
    cin >> name;
    cout << greeting(name) << endl;
    
    cout << "What is your address >> ";
    cin >> address;
    streetFormat(address);
    cout << "Your address has been stored as: " + address << endl;

    cout << "Type the product name >> ";
    cin >> prodName;
    cout << "What is the price of the product >> ";
    cin >> prodPrice;

    cout << "Enter a discount code >> ";
    cin >> discountCode;

    if (discountCode == "STUDENT") {
        discountPrice = studentDiscount(prodPrice);        
    }
    else if (discountCode == "VETERAN") {
        discountPrice = veteranDiscount(prodPrice);
    }
    else if (discountCode == "WORKER") {
        discountPrice = workerDiscount(prodPrice); 
    }

    cout << "Your final price: " << discountPrice << "." << endl;
    cout << closing(prodName) << endl;


    return 0;
}
