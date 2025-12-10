#include <iostream>

int menuProcess;
int number[2];

// Displays the main menu and reads user choice
void mainMenu(){
    std::cout << "[1] - Addition Process" << std::endl;
    std::cout << "[2] - Subtraction Process" << std::endl;
    std::cout << "[3] - Multiplication Process" << std::endl;
    std::cout << "[4] - Division Process" << std::endl;
    std::cout << "Vote:";
    std::cin >> menuProcess;
}

// Gets two numbers from the user
int NumbersInput(){
    std::cout << "Enter first number:";
    std::cin >> number[0];

    std::cout << "Enter secound number:";
    std::cin >> number[1];

    return 0;
}

// Adds the two numbers and prints the result
void AdditionProcess(){
    std::cout << "Sum of numbers:" << number[0] + number[1] << std::endl;
}

// Subtracts the second number from the first
void SubtractionProcess(){
    std::cout << "Difference of number:" << number[0] - number[1] << std::endl;
}

// Multiplies the two numbers
void MultiplicationProcess(){
    std::cout << "Multiplication of numbers:" << number[0] * number[1] << std::endl;
}

// Divides the first number by the second
void DivisionProcess(){
    std::cout << "Division of number:" << number[0] / number[1] << std::endl;
}

int main(){
    // Display the menu for operation selection
    mainMenu();

    // Execute the operation chosen by the user
    switch(menuProcess){
    case 1:
        NumbersInput();
        AdditionProcess();
        break;

    case 2:
        NumbersInput();
        SubtractionProcess();
        break;

    case 3:
        NumbersInput();
        MultiplicationProcess();
        break;

    case 4:
        NumbersInput();
        DivisionProcess();
        break;

    default:
        std::cout << "Invalid selection!" << std::endl;
    }

   return 0;
}
