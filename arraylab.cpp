#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

void problem1() {
    srand(time(0));
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 10 + 1;
    }
    std::cout << "\nArray: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\nBackwards: ";
    for (int i = 9; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
    int evenCount = 0;
    for (int num : arr) {
        if (num % 2 == 0) evenCount++;
    }
    std::cout << "\nEven numbers: " << evenCount << "\n\n";
}

void problem2() {
    double sales[5];
    std::cout << "\nEnter sales for Monday: ";
    std::cin >> sales[0];
    std::cout << "Enter sales for Tuesday: ";
    std::cin >> sales[1];
    std::cout << "Enter sales for Wednesday: ";
    std::cin >> sales[2];
    std::cout << "Enter sales for Thursday: ";
    std::cin >> sales[3];
    std::cout << "Enter sales for Friday: ";
    std::cin >> sales[4];
    
    std::string continueInput;
    do {
        int day;
        std::cout << "Enter day (1-5): ";
        std::cin >> day;
        if (day < 1 || day > 5) {
            std::cout << "Invalid day.\n";
        } else {
            std::cout << "Sales for day " << day << ": " << sales[day-1] << "\n";
        }
        std::cout << "Do you wish to continue? (Yes/No): ";
        std::cin >> continueInput;
    } while (continueInput == "Yes");
}

void problem3() {
    int ages[20];
    for (int i = 0; i < 20; i++) {
        std::cout << "Enter age #" << (i+1) << ": ";
        std::cin >> ages[i];
    }
    int count = 0;
    for (int age : ages) {
        if (age > 15) count++;
    }
    std::cout << "Ages over 15: " << count << "\n\n";
}

void problem4() {
    double finalGrade[] = {85.8, 93.7, 76, 88.5, 100, 91.3};
    int size = sizeof(finalGrade) / sizeof(finalGrade[0]);
    
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += finalGrade[i];
    }
    double avg = sum / size;
    avg = std::round(avg * 10) / 10;
    std::cout << "\nAverage: " << avg << "\n\n";
}

int main() {
    int choice;
    do {
        std::cout << "Menu:\n"
                  << "1. Random array analysis\n"
                  << "2. Ice cream sales tracker\n"
                  << "3. Age counter\n"
                  << "4. Grade average calculator\n"
                  << "5. Exit\n"
                  << "Enter your choice: ";
        std::cin >> choice;
        
        switch(choice) {
            case 1:
                problem1();
                break;
            case 2:
                problem2();
                break;
            case 3:
                problem3();
                break;
            case 4:
                problem4();
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice!\n";
        }
    } while (choice != 5);
    
    return 0;
}