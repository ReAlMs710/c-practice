#include <iostream>
#include <string>
using namespace std;

int main() {
    string favoriteShow;

    cout << "What is your favorite show? ";
    getline(std::cin, favoriteShow);

    
    if (favoriteShow == "jjk") {
        cout << "You're great!" << endl;
    } else if (favoriteShow == "One Piece") {
        cout << "You're amazing!" << endl;
    } else {
        cout << "You're probably normal." << endl;
    }

    return 0;
}
