#include <iostream>

int menuProcess;
int number[2];

void mainMenu(){
    std::cout << "[1] - Addition Process" << std::endl;
    std::cout << "[2] - Subtraction Process" << std::endl;
    std::cout << "[3] - Multiplication Process" << std::endl;
    std::cout << "[4] - Division Process" << std::endl;
    std::cout << "Vote:";
    std::cin >> menuProcess;
}

int NumbersInput(){
    std::cout << "Enter first number:";
    std::cin >> number[0];

    std::cout << "Enter secound number:";
    std::cin >> number[1];

    return 0;
}

void AdditionProcess(){
    std::cout << "Sum of numbers:" << number[0] + number[1] << std::endl;
}

void SubtractionProcess(){
    std::cout << "Difference of number:" << number[0] - number[1] << std::endl;
}

void MultiplicationProcess(){
    std::cout << "Multiplication of numbers:" << number[0] * number[1] << std::endl;
}

void DivisionProcess(){
    std::cout << "Division of number:" << number[0] / number[1] << std::endl;
}

int main(){
    mainMenu();

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
