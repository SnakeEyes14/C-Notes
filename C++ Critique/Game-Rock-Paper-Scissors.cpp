#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;                                                // This is us 
    char computer;                                              // This is the computer that we are playing against

    player = getUserChoice();
    std::cout << " Your choice: \n";                            // Lets display the user's choice
    showChoice(player);                                         // Invoke the show choice function. There is one parameter we have to pass in a choice as an argument. 
                                                                // We will pass in our player thats character within the show choice function im going to create a switch.                
    
    computer = getComputerChoice();                             // Now we need to fill in this funciton at the bottom.
    std::cout << "Computer's choice: \n";                             // Lets display the computer' choice
    showChoice(computer);                                       // Invoke the show choice function. But pass in our computer.

    chooseWinner(player, computer);                             // Now we will need to decide who won. Invoke the chooseWinner function. Pass in our player as well as computer
    
    return 0;
}

char getUserChoice(){

    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";

    do{
        std::cout << "Choose one of the following\n";
        std::cout << "**************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;

        std::cout << player;    

    }while(player != 'r' && player != 'p' && player != 's');    // This will do this do while loop as long as 
                                                                //our player does not oequal the charactreer r and player does not equal character p and player does not equal 
                                                                //the character s!!! At the end of this function we will return player.
//    std::cout << "**************************\n";              //Note paste this block of code within our do while loop.
//    std::cout << "'r' for rock\n";
//    std::cout << "'p' for paper\n";                           // Going to place some of this code within a do while loop. Because the user might not type in r p or s  
//    std::cout << "'s' for scissors\n";
//    std::cin >> player;

//    std::cout << player;    
    
    return player;                                              // We cant escape this while loop until we pick either r p or s thats how this condition works.
}
char getComputerChoice(){
    
    srand(time(0));  // include this header file at the top of your program <ctime>. For srand(time(0)) can also put NULL
    int num = rand() % 3 + 1;   // Generate a random number between 1 and 3. We will examine this number against matching cases 

    switch(num){                // examining our num. the first case will be the number one if our rnadom number is 1. Lets return the character r. 
        case 1: return 'r';     // Since were returning a value wew dont need to add that reak statement were already breaking when we return
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}
void showChoice(char choice){

    switch(choice){                                             // Were examining some value against matching case. Well examine our choice our choice argument that we 
                                                                //receive if our choice matches the case r what would we like to do. im going to display the standard output.
    case 'r': std::cout << "Rock\n";
                break;
    case 'p': std::cout << "Paper\n";
                break;
    case 's': std::cout << "Scissors\n";
                break;                                          
    }
}    
void chooseWinner(char player, char computer){

    switch(player){
        case 'r':   if(computer == 'r'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "You lose!\n";
                    }
                    else{
                        std::cout << "You win!\n";
                    }
                    break;               
        case 'p':   if(computer == 'r'){
                        std::cout << "You win!\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "You a tie!\n";
                    }
                    else{
                        std::cout << "You lose!\n";
                    }
                    break;
        case 's':   if(computer == 'r'){
                        std::cout << "You lose!\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "You win!\n";
                    }
                    else{
                        std::cout << "It's a tie!\n";
                    }
                    break;                    
    }
}
