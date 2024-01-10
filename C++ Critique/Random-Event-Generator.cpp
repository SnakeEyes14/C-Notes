#include <iostream>
#include <ctime>    // Creating a random event generator using random numbers and a switch this can be useful if you're writing a game you need some random event to occur.
                    // Random monster show up or the weather changes anything like this add this header file. Need access to ctime need time function.
int main()
{

    srand(time(0)); // Need to generate a seed srand funciton pass in time pass in zero this funciton will us ethe current time as seed to generate rnadom numbers create
    int randNum = rand() % 5 +1;    // a local variable to store our random number  int rand num equals use the rand function modulus then whats the range of numbers would 
                                    // like the numbers one through five but this will give us zero through four so im going to add one to the end my integer random num 
                                    // will be a random nbumber between 1 and 5. This will give us zero through four so im going to add one to the end.
    
// Create a switch to examine this random number against many matching cases. so we have case 1 through 5.
// If the random number is one what  would you like to do exactly so in this program going to give away prizes like its a random prize generator.
/*                                                            
    switch(randNum){                                                   
        case 1: std::cout << "You win a bumper sticker!'\n";   
                break;                                          // Now if you dont add these break statements you'll just fall through switch
        case 2: std::cout << "You win a t-shirt!'\n";   
                break; 
        case 3: std::cout << "You win a free lunch!'\n";   
                break; 
        case 4: std::cout << "You win a gift card!'\n";   
                break; 
        case 5: std::cout << "You win a concert ticket!'\n";   
                break; 
    }   // Depending on the random number we'll give a participant a random prize how about a bumber sticker. Bumper sticker that will be thge lowest tier prize.
        // That will be the lowest tier prize then we should prbably add a break to break out of the switch. Lets think of some others .

    return 0;

}        

*/
                                                            
    switch(randNum){                                                   
        case 1: std::cout << "You win a bumper sticker!'\n";   // Now if you dont add these break statements you'll just fall through switch
        case 2: std::cout << "You win a t-shirt!'\n";   
        case 3: std::cout << "You win a free lunch!'\n";   
        case 4: std::cout << "You win a gift card!'\n";   
        case 5: std::cout << "You win a concert ticket!'\n";   
    }   // Depending on the random number we'll give a participant a random prize how about a bumber sticker. Bumper sticker that will be thge lowest tier prize.
        // That will be the lowest tier prize then we should prbably add a break to break out of the switch. Lets think of some others .

    return 0;

}  // If you want someone only to win one prize you need to enter the break statements!!! If not they win all the prizes!!! 

