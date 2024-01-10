#include <iostream>

// cout << (insertion operator)     two left angle brackets
// cin  >> (extraction operator)    two right angle brackets

//int main()
//{

//    std::string name;
//    int age;

//    std::cout << "What's your name?:";  // Once you hit a string that has spaces we stop reading that string 
    //std::cin >> name;                   
//    std::getline(std::cin, name);   // If we need to read a string that contains spaces there a function that we can use to help us with that it is the get line function

//    std::cout << "Whats your age?:";
//    std::cin >> age;

//    std::cout << "Hello " << name << '\n'; 
//    std::cout << "You are " << age << "years old.";

//   return 0;
//}
21

int main()
{

    std::string name;
    int age;

    std::cout << "Whats your age?:";    //If we accept some user input with cin followed by get line well in our input buffer theres a new line character and we 
    std::cin >> age;                    //dont pick up that new line charaqcter when we reach the getline function it accepts newline character thats still within the 
                                        //buffer. To prevent that from happening there one change that we can make to getline function after cin add this >> extraction
                                        //Operator std::ws. for any whitespace this portion will eliminate any new line characters or any whitespaces before any user input

    std::cout << "What's your name?:";  // Once you hit a string that has spaces once we hit a spacee we stop reading that string 
    //std::cin >> name;                   
    std::getline(std::cin >> std::ws, name);    // If we need to read a string that contains spaces there a function that we can use to help us with that it is the get line 
                                                //function

    

    std::cout << "Hello " << name << '\n'; 
    std::cout << "You are " << age << "years old.";

    return 0;
}
