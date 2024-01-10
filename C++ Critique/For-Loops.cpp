#include <iostream>

/*
int main()
{

    for(int i = 1; i <=3; i++){             // We'll continue this as long as i is less 
        std::cout << "HAPPY NEW YEAR!\n";   // This will print the statement 3 times in a new line each time

}

    return 0;

}   
*/


// Lets try this 5 times. We will begin i at one we'll continue this as long as i is less than or equal to five
/*
int main()
{

    for(int i = 1; i <=5; i++){             // We'll continue this as long as i is less 
        std::cout << "HAPPY NEW YEAR!\n";   // This will print the statement 3 times in a new line each time

}

    return 0;

}   
*/

/*
// This time lets count up to 10 then display happy new year once exit out of the for loop 
int main()
{

    for(int i = 1; i <=10; i++){            // I'll move this line to outside of the for loop. I'll set i to be 1. 
        std::cout << i << '\n';             // We'll continue this as long as i is less than or equal to 10.
}                                           // Starting at 1 then we're counting up to ten then we escape the for loop  

    std::cout << "HAPPY NEW YEAR!\n";       // Once we escape the for loop then we print Happy New Year when you increment or decrement your counter you can skip
                                            // iterations and increase i by 2 after or any other number...
    
    return 0;

}   
*/

/*
int main()
{

    for(int i = 1; i <=10; i+=2){            // Change the iteration i plus equals 2. i+=2
        std::cout << i << '\n';             // We'll continue this as long as i is less than or equal to 10.
}                                           // Starting at 1 then we're counting up to ten then we escape the for loop  

    std::cout << "HAPPY NEW YEAR!\n";       // Once we escape the for loop then we print Happy New Year when you increment or decrement your counter you can skip
                                            // iterations and increase i by 2 after or any other number...
    
    return 0;

}  
*/


/*
int main()
{

    for(int i = 0; i <=10; i+=2){            // Change the iteration int =0; This will count with even numbers. i plus equals 2. i+=2
        std::cout << i << '\n';             // We'll continue this as long as i is less than or equal to 10.
}                                           // Starting at 0 then we're counting up to ten then we escape the for loop  

    std::cout << "HAPPY NEW YEAR!\n";       // Once we escape the for loop then we print Happy New Year when you increment or decrement your counter you can skip
                                            // iterations and increase i by 2 after or any other number...
    
    return 0;

}  
*/

/*
// In this one we will change the decrement to count backwards by changing the iteration to i-- i minus minus this will count backwards!!!!
int main()
{

    for(int i = 10; i >=0; i--){            // Change the iteration    for(int = 10; Will continue as long as i is greater than or equal to 0; i >= 0; i--3){ 
        std::cout << i << '\n';             // We'll continue this as long as i is less than or equal to 10.
}                                           // Starting at 0 then we're counting up to ten then we escape the for loop  

    std::cout << "HAPPY NEW YEAR!\n";       // Once we escape the for loop then we print Happy New Year when you increment or decrement your counter you can skip
                                            // iterations and increase i by 2 after or any other number...
    
    return 0;

}  
*/

/*
int main()
{

    for(int i = 1; i <=20; i++){            // Change the iteration    for(int = 1; Will continue as long as i is less than or equal to 20; i >= 0; i++){ 
        std::cout << i << '\n';             // We'll continue this as long as i is less than or equal to 1
}                                           // Starting at 1 then we're counting up to twenty then we escape the for loop  

    std::cout << "HAPPY NEW YEAR!\n";       // Once we escape the for loop then we print Happy New Year when you increment or decrement your counter you can skip
                                            // iterations and increase i by 2 after or any other number...
    
    return 0;

} 
*/


// Here we are going to do a countdown but going to skip 13 because it is considered to be a unlucky number!!!!
int main()
{

    for(int i = 1; i <=20; i++){  
        if(i == 13){
//            break;  // If you leave like this it will count up to 12 and break out of the loop!!! We do not finish the rest of the iterations...
                continue; // We will count the numbers 1 through 20 but we will skip the number 13



        }          
        std::cout << i << '\n';           
}                                            

    std::cout << "HAPPY NEW YEAR!\n";       
                                            
    
    return 0;

} 