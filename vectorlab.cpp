#include <iostream>
#include <vector>
#include <string>

void displayVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void task1() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << numbers[2] << std::endl;
    numbers.pop_back();
    displayVector(numbers);
}

void task2() {
    std::vector<int> vec;
    int choice;
    do {
        std::cout << "1. Add Element\n2. Display Vector\n3. Vector Size\n4. Exit\n";
        std::cin >> choice;
        if (choice == 1) {
            int element;
            std::cout << "Enter number: ";
            std::cin >> element;
            vec.push_back(element);
        } else if (choice == 2) {
            displayVector(vec);
        } else if (choice == 3) {
            std::cout << "Size: " << vec.size() << std::endl;
        }
    } while (choice != 4);
}

void task3() {
    std::vector<std::string> colors;
    std::string color;
    char choice;
    do {
        std::cout << "Enter favorite color: ";
        std::cin >> color;
        colors.push_back(color);
        std::cout << "Add another color? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    for (const auto& c : colors) {
        std::cout << c << " ";
    }
    std::cout << std::endl;
}

void greetUser(const std::vector<std::string>& names) {
    std::cout << "Hello, ";
    for (const auto& name : names) {
        std::cout << name << " ";
    }
    std::cout << "!" << std::endl;
}

void task4() {
    std::vector<std::string> names;
    int num;
    std::cout << "How many names do you have? ";
    std::cin >> num;
    for (int i = 0; i < num; ++i) {
        std::string name;
        std::cout << "Enter name: ";
        std::cin >> name;
        names.push_back(name);
    }
    greetUser(names);
}

int main() {
    task1();
    task2();
    task3();
    task4();
    return 0;
}