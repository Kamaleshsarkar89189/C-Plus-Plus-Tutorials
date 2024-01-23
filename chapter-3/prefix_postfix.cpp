#include<iostream>

int main(){
    //Increment by one 
    int value = 5;
    value = value+1;
    std::cout << "The value is : " << value << std::endl;

    value = 5; // Reset value to 5
    // Decrement by one 
    value = value - 1;
    std::cout << "The value is : " << value << std::endl;



//   Another way to do 
    
    value = 5;
    std::cout << "The value is (incremmenting) : " << value++ <<std::endl; // 5
    std::cout << "The value is : " << value << std::endl; // 6

    std::cout << std::endl;

    // Decrement with postfix
    //Reset value to 5
    value = 5;

    std::cout << "The value is  (decrementing) : " << value-- << std::endl; // 5
    std::cout << "The value is : " << value << std::endl; // 4


    // One more war to do 

        value = 6;
        ++value;
        std::cout << "The value is (prefix++) : " << value << std::endl; //7

        //Reset value to 5
        value = 5;
        std::cout << "The value is (prefix++ in place ) : " << ++value << std::endl;

        std::cout << std::endl;

        //prefix : Decrementing
        // Reset value to 5;
         value = 5;
         --value;
         std::cout << "The value is (prefix--) : " << value << std::endl;
         //Reset value to 5;
         value = 5;
         std::cout << "The value is (prefix-- in place) : " << --value << std::endl;
    return 0;
}