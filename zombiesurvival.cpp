// Neil Kumaran
// Zombie Survival
// Ms. Alblas
// 11/5/2024 
#include <iostream>
using namespace std;

int energy = 5;
int supplies = 0;
int days = 0;
int choice;

int main() {
    while (energy > 0 && supplies < 10) {
        cout << "\nDay " << days << endl;
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
            days += 1;
            cout << "You searched for supplies and gained 1 supply!" << endl;
        } else if (choice == 2) {
            days += 1;
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
        cout << "\nYou ran out of energy. You didn’t make it..." << endl;
    }

    return 0;
}
