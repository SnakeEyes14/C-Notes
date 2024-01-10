#include <iostream>
#include <iomanip>                                          // Theres a funciton in here to set some  precision for floating point numbers 

void showBalance(double balance);                           // function definitions
double deposit();
double withdraw(double balance); 

int main()
{

    //double balance = 0;
    double balance = 0;
    int choice = 0;

    do{
        std::cout << "*******************************\n";   // Cut all this block of code and paste it into the do while loop 
        std::cout << "Enter your choice:\n";                // Text decorations. : Use semicolon to end the statment 
        std::cout << "*******************************\n";   // Text decorations
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;                                 // Here we accept some user input of choice

        std::cin.clear();                                   // This function will reset any error flags when the standard input fails to interpret the input 
        fflush(stdin);                                      // This function pass in standard input this will clear the input buffer. Once we hit enter we have a new line 
                                                            //character within our input buffer. We just need to flush that and get rid of it.    
        
        switch(choice){                                     //Going to create a switch were examining the users choice. Examining our choice against many matching cases.  
            case 1: showBalance(balance);                   // User wants to show their balacne well invoke the show balance funciton but we need to pass in our balance
                    break;
            case 2: balance += deposit();                   // User wnats to deposit money so were going to take our balance + deposit. Will return a double
                    showBalance(balance); 
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4: std::cout << "Thanks for visiting!\n";     
                    break;
            default:std::cout << "Invalid choice\n"; 
        }
    }while(choice != 4);   // The condition will be while choice does not equal four four is what we use to exit 
    
    return 0;
}
void showBalance(double balance){   // function definitions //Note after the parentheses there is no semi colon to end the statement!!!
        std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n'; // This will display our balance up to two decimal places after decimal point
}    
double deposit(){
    
    double amount = 0;
    
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;   // for now add a return funciton for the last two functions. Return amount at the end of this function.
    }
    else{
        std::cout << "That's not a valid amount: \n";
        return 0;
    }
}
double withdraw(double balance){

    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount; 

    if(amount > balance){
        std::cout << "insufficient funds\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amoutn\n";
        return 0;
    }
    else{
        return amount;
    }    
}    