#include <iostream>

int main(){

    char op;        //#character operator + - * /
    double num1;
    double num2;
    double result;

    std::cout << "*************CALCULATOR ****************\n";

    std::cout << "Enter either (+ - * / ):";    //Ask the user what operand they would like standard output
    std::cin >> op;                             //input operand from the user 

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch(op) {
        case '+':                                       //Make sure the operand is within single quotes because its a character
            result = num1 + num2;                        //If the user wants to add two numbers we will take result equalts num1 + num2
            std::cout << "result: " << result << "\n";  //Display the result followed by the variable result then ill add a new line to the end 
            break;
        case '-':                                       //case for subtraction
            result = num1 - num2;
            std::cout << "result: " << result << "\n";
            break;
        case '*':
            result = num1 * num2;                       //case for multiplication
            std::cout << "result: " << result << "\n"; 
            break;
        case '/':                                       //case for division
            result = num1 / num2;
            std::cout << "result: " << result << "\n"; 
            break;
        default:
            std::cout << "That wasn't a valid respoonse\n";
            break;    

    

    }

    std::cout << "****************************************";

    return 0;
}    