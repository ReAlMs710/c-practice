// Neil Kumaran
// Zombie Survival
// Ms. Alblas
// 11/5/2024 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

std::string daysOfWeek[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
std::string quotes[7];

int energy = 5;
int supplies = 0;
int dayCount = 0;
int choice;
int opt = 0;
char enter;

int main() {
    std::srand(std::time(0));

    // Main game loop
    while (energy > 0 && supplies < 10) {
        cout << "\nDay " << dayCount << endl;
        cout << "----------------" << endl;
        cout << "Current energy: " << energy << endl;
        cout << "Current supplies: " << supplies << endl;
        cout << "\nChoose an action:" << endl;
        cout << "1: Search for supplies (costs 1 energy, adds 1 supply)" << endl;
        cout << "2: Rest (restores 2 energy)" << endl;
        cout << "Enter your choice: ";
        
        cin >> choice;
        
        if (choice == 1) {
            energy -= 1;
            supplies += 1;
            dayCount += 1;
            cout << "You searched for supplies and gained 1 supply!" << endl;
        } else if (choice == 2) {
            dayCount += 1;
            energy += 2;
            cout << "You rested and regained 2 energy!" << endl;
        } else {
            cout << "Invalid choice. Please choose 1 or 2." << endl;
        }
    }

  // End conditions
if (supplies >= 10) {
    cout << "\nCongratulations! You've gathered enough supplies to survive!" << endl;
} else if (energy <= 0) {
    cout << "\nYou ran out of energy. You didn't make it..." << endl;
}


    // Ask for quotes for each day
    cin.ignore(); 
    for (int i = 0; i < 7; i++) {
        cout << "Enter your quote for " << daysOfWeek[i] << ":" << endl;
        getline(cin, quotes[i]);
    }

    cout << endl;

    // Display the quotes for each day
    for (int i = 0; i < 7; i++) {
        cout << daysOfWeek[i] << ": " << quotes[i] << endl;
    }

    cout << endl;

    // Gabmling!!!!
    std::srand(std::time(0));
    int pin = std::rand() % 900 + 100;
    do {
        cout << "Enter the 3-digit pin to win a GAZILLION DOLLARS!!!!";
        cin >> opt;
        if (opt != pin) {
            cout << "WRONG!!! Try again? (Y/N)" << endl;
            cin >> enter;
            if (tolower(enter) == 'n') {
                cout << "ur broke lol but never give up on gambling!" << endl;
                break;
            }
        }
    } while (opt != pin);

    if (opt == pin) {
        cout << "you won a TRILLION GAZILLION!!!!" << endl;
    }

    return 0;
}
