#include <iostream>
#include <cctype>
#include <cstdlib>
#include <vector>

using namespace std;

string lowerCase(string& str) {
    string lowercase;

    for (char c : str) {
        lowercase += tolower(c);
    }

    return lowercase;
}

int multiply(int &num) {
    return num * 2;
}

int randAdd(int &num) {
    srand(time(0));
    int randomNum = rand() % 101;

    return num + randomNum;
}

void addToVector(vector<int>& vec) {
    vec.push_back(4); 
    vec.push_back(5); 
}

int main() {
    // Problem 1
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);
    userInput = lowerCase(userInput); 
    cout << "Lowercase string: " << userInput << endl;

    // Problem 2
    int userInt;
    cout << "Enter an integer: ";
    cin >> userInt;
    userInt = multiply(userInt); 
    cout << "Multiplied integer: " << userInt << endl;

    // Problem 3
    int originalInt;
    cout << "Enter another integer: ";
    cin >> originalInt;
    int randomizedInt = randAdd(originalInt);
    cout << "Original integer: " << originalInt << endl;
    cout << "Randomized integer: " << randomizedInt << endl;

    // Problem 4
    vector<int> numbers = {1, 2, 3};
    cout << "Vector before modification: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    addToVector(numbers);

    cout << "Vector after modification: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
