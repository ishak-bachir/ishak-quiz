#include <iostream>
#include <cctype>
#include <string>

void welcome() {
    std::cout << "--------------welcome to Ishak's quiz game--------------" << std::endl;
}

std::string toLower(const std::string& str) {
    std::string lowerStr;
    for (char c : str) {
        lowerStr += std::tolower(c);
    }
    return lowerStr;
}

int main() {
    std::string questions[2][5] = {
        {"Is C++ a low-level language?",
         "Can React.js be used for mobile app development?",
         "Does HTML stand for HyperText Markup Language?",
         "Is Python a statically typed language?",
         "Is Git used for version control?"},

        {"Yes", "Yes", "Yes", "No", "Yes"}
    };

    welcome();
    int row = sizeof(questions) / sizeof(questions[0]);
    int column = sizeof(questions[0]) / sizeof(questions[0][0]);
    int score;
    for (int i = 0; i < column; i++) {
        std::string userChoice;
        std::cout << questions[0][i] << std::endl;
        std::cout << "-yes" << std::endl;
        std::cout << "-no" << std::endl;
        std::cin >> userChoice;
        userChoice = toLower(userChoice);

        if (userChoice == toLower(questions[1][i])) {
            std::cout << "Correct!" << std::endl;
            score +=1;
        } else {
            std::cout << "Wrong!" << std::endl;
        }
    }
    std::cout<<"Your score is : "<<score<<std::endl;
    return 0;
}
