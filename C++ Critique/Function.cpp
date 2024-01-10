//#include <iostream>
// fuction = a block of reusable code

// If you  ever think that your going to sue some section of code more than once you might as well stick it within a funciton .

// To begin the program we call the main function before the main function we can create a new funciton. 

/*
void happyBirthday(){
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear you!\n";
    std::cout << "Happy Birthday to you!\n\n";  // add a new line function to separate the happyBirthday lyrics
} // Then a unique funciton name 

int main(){

// To invoke this function all we have to do is within the main function type the function name followed by a set of parentheses this will call or otherwise 
// known as invoke the function. I like ot think of the parentheses as a pair of telepohones that are talking to each other to use a function you have to call 
// the function call it up on the phone so when i run this code we have the lyrics to happy birthday this funciton is reusable. I can call this funciton as many 
//times as i want ill call this function two additional times just to separate these lyrics im goin to add a new line character.

    happyBirthday();    // Called the function three times 
    happyBirthday();
    happyBirthday();    // A function is just a block of reusable code 

    return 0;
}

*/

/*
// What alot of people do is that they will declare and define their funcitons after the main fucntion because its more readable to people but theres one issue with this 
// happy bday was not declared so you cannot put void function after the main function because it is not declared in this scope !!! Our programs are read from the top down!!!
// Since we are invoking the happyBirthday function before we even know what it is while the ocmpiler doesnt recognize it 

// Then a unique funciton name 

#include <iostream>

void happyBirthday(std::string name);   // You can declare funcitons but define them later before the main function then make sure you add a void or a return type 

int main(){     // Think of each funciton as a house the main function is your house funcitons outside of the main funciton would be your neighbors their house 
                // functions cant see whats going on inside of other funcitrons you cant see whats gong on inside of your neighbors house your only familiar 
                // with whats going on inside of your house in order for the happyBirthday funciton to use the main funcitons name variable it needs to be 
                //made aware of it to do that when you invoke a neighboring funciton you can pass that variable or some other value as an argument so within 
                //the parentheses when you invoke that funciton place your values or varibale i would like to make my happyBirthday funciton when you send 
                //some data over to a funciton that data is also an argument. However receiving funciton needs a matching set of what are called paramets if 
                //this funciton is going to receive this data this name you need a matching parameter. You first list the dat type we will receive a standard string

    // What if we have a variable

    std::string name = "Bro";

    happyBirthday(name);    // Call the function with the variable name 


    return 0;
}

void happyBirthday(std::string name){    //List the data type we will receive a standard string parameter name. Now this happyBirthday function can use 
                                        //this name variable within the main function if you have a funciton declaration at the top with 
                                        //void happyBirthday(std::string name){} you will have to add that parameter there as well!!!

    std::cout << "Happy Birthday to " << name << '\n';  // Problem with this is that name was not declared in this scope 
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
}   

*/

#include <iostream>

void happyBirthday(std::string name, int age);

int main(){         

    std::string name = "Bro";
    int age = 21;   // Lets pass an age int. I want to send my age over to the happyBirthday function. So i need to pass that as an additional argument. 

    happyBirthday(name, age);    // Call the function with the variable name and now add age to the arguments. Now we need a matching set of parameters 


    return 0;
}

void happyBirthday(std::string name, int age){    
// Right now the happyBirthday funciton is only equipped to receive a name so we list the data type and age and 
//if you have a funciton declaration chage that there as well then ill add one more line

    std::cout << "Happy Birthday to " << name << '\n';  // Problem with this is that name was not declared in this scope 
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old! \n";
}  