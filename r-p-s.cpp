#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    std::cout << "Welcome to Rock, Paper, Scissors!" << std::endl;
    
    while (true) {
        // User's choice
        std::cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors, 0 to quit): ";
        int userChoice;
        std::cin >> userChoice;
        
        if (userChoice == 0) {
            std::cout << "Thanks for playing! Goodbye." << std::endl;
            break;
        } else if (userChoice < 1 || userChoice > 3) {
            std::cout << "Invalid choice. Please try again." << std::endl;
            continue;
        }
        
        // Generate computer's choice
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        int computerChoice = std::rand() % 3 + 1; // Random number between 1 and 3

        // Display choices
        const char* choices[] = {"Rock", "Paper", "Scissors"};
        std::cout << "You chose: " << choices[userChoice - 1] << std::endl;
        std::cout << "Computer chose: " << choices[computerChoice - 1] << std::endl;

        // Determine the winner
        if (userChoice == computerChoice) {
            std::cout << "It's a tie!" << std::endl;
        } else if ((userChoice == 1 && computerChoice == 3) ||
                   (userChoice == 2 && computerChoice == 1) ||
                   (userChoice == 3 && computerChoice == 2)) {
            std::cout << "You win!" << std::endl;
        } else {
            std::cout << "Computer wins!" << std::endl;
        }
    }
    
    return 0;
}

