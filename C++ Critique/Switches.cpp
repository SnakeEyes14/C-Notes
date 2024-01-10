#include <iostream>

//switch = alternative to using many "else if " statements
//         compare one value against matching cases

int main()
{
    int month;  //integer data type
    std::cout << "Enter the month (1-12):";
    std::cin >> month;

    switch(month){  //What value would we like to examine against matching cases lets examine our month
        case 1:    // To write a case we would type case then the value
            std::cout << "It is January";   //Next line what we want to do if month is equal to 1 lets display a message
            break;
        case 2:
            std::cout << "It is February"; 
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break; 
        default: std::cout << "Please enter in only nuymbers (1-12)";                                       
    } 

    return 0;
}

//So a switch is an alternative to using many else if statements its more efficient and easier to read. If there are no matching cases we can execute a default case type
