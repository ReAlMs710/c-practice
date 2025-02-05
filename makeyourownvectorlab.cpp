#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> cities = {"New York", "Los Angeles", "Chicago", "Houston", "Phoenix"};
    cout << "Original vector: ";
    for (auto it = cities.begin(); it != cities.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    auto insertPos = cities.begin() + 2; 
    cities.insert(insertPos, "San Francisco");
     
    cout << "After insertion: ";
    for (auto it = cities.begin(); it != cities.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    
    auto erasePos = cities.begin() + 3; 
    cities.erase(erasePos);
    
    // Display vector after deletion
    cout << "After deletion: ";
    for (auto it = cities.begin(); it != cities.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
   
    cout << "Final vector size: " << cities.size() << endl;
    string searchCity = "Chicago";
    if (find(cities.begin(), cities.end(), searchCity) != cities.end()) {
        cout << searchCity << " is still in the list." << endl;
    } else {
        cout << searchCity << " was removed from the list." << endl;
    }
    
    return 0;
}
