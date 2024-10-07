// Neil Kumaran
// 10.7.24
// Do now
// Extra: 

#include <iostream>
using namespace std;
int mood;

int main() {
    while (true) {
    // Prompt user for mood
    cout << "How are you feeling today?" << endl;
    cout << "1. Happy" << endl;
    cout << "2. Sad" << endl;
    cout << "3. Angry" << endl;
    cout << "4. Stressed" << endl;
    cout << "5. Sigma" << endl;
    cout << "6. Exit" << endl;
    // then assign that the var mood
    cin >> mood;

    //Switches like im a YN in chicago
    switch (mood) {
        case 1:
            cout << "That's great to hear!" << endl;
            break;
        case 2:
            cout << "I'm sorry to hear that." << endl;
            break;
        case 3:
            cout << "Calm down, take a deep breath." << endl;
            break;
        case 4:
            cout << "Take a break and relax." << endl;
            break;
        case 5:
            cout << "SIGMA SIGMA ON THE WALL!!!! WHOS THE SKIBBIEST OF THEM OF THEM" << endl;
            cout << "SO SO SKIBITY!!!!!!" << endl;
            break;
        case 6:
            cout << "seeyaaaa" << endl;
            return 0;
        default:
            cout << "Invalid input." << endl;
            break;
    }
} 
    return 0;           
}