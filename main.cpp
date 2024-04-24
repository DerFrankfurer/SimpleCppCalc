#include <iostream>
#include <string>
#include <cctype> 
#include <sstream> 

int main() {
    std::string input;
    double num1, num2;
    char operation;

    std::cout << "Geben Sie eine Rechnung ein (z.B. 1+1): ";
    std::getline(std::cin, input);

    std::stringstream ss;
    size_t i = 0;

    while (i < input.size() && (isdigit(input[i]) || input[i] == '.')) {
        i++;
    }

    operation = input[i];

    ss << input.substr(0, i) << " " << input.substr(i + 1);
    ss >> num1 >> num2;

    switch(operation) {
        case '+':
            std::cout << "Ergebnis: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Ergebnis: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Ergebnis: " << num1 * num2 << std::endl;
            break;
        case '/':
            if(num2 != 0.0) {
                std::cout << "Ergebnis: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Fehler: Division durch Null!" << std::endl;
            }
            break;
        default:
            std::cout << "Ungültige Operation!" << std::endl;
    }

    return 0;
}
