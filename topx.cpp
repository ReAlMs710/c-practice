#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string category;
    std::vector<std::string> list;
    std::string item;

    // Prompt user for category
    std::cout << "Choose a category for your list (Movies, TV Shows, Songs, YouTubers, Video Games): ";
    std::getline(std::cin, category);

    // Prompt user to enter items, type "done" to finish
    std::cout << "Enter items for your top " << category << " list (type 'done' to finish):\n";
    while (std::getline(std::cin, item) && item != "done") {
        list.push_back(item);
    }

    // Display the responses
    std::cout << "\nYour Top " << list.size() << " " << category << " list:\n";
    for (size_t i = 0; i < list.size(); ++i) {
        std::cout << i + 1 << ". " << list[i] << "\n";
    }

    return 0;
}
