#include<iostream>

int main(){
    //How we've used pointer so far
    /*
    int number {22}; //Stack

    int * p_number = &number;

    std::cout << std::endl;
    std::cout << "Declaring pointer and assigning address : " << std::endl;
    std::cout << "number : " << number << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "&number : " << &number << std::endl;
    std::cout << "*p_number : " << std::endl;

    int * p_number1; //Uninitialized pointer , contains junk address
    int number1 {12};
    p_number1 = &number1; //Make it pointer to a valid address
    std::cout << std::endl;
    std::cout << "Uninitialized pointer : " << std::endl;
    std::cout << "*p_number1 : " << *p_number1 << std::endl;
    */
    
    // BAD 
    //writing into uninitialized pointer through dereference
    int *p_number2; //Contains junk address : could be anything 
    *p_number2 = 55; //Writing into junk address : BAD!
    std::cout << "writing into uninitialized pointer through dereference" << p_number2 << std::endl; //

    std::cout << "p_number2 : " << p_number2 << std::endl; //Reading from junk address.
    std::cout << "*p_number2 : " << *p_number2 << std::endl;

    //Initializing pointer to null
    //int *p_number3{nullptr}; //Also works
    int * p_number3 {}; //Initialized with pointer equivalent of zero : nullptr
                        //A pointer pointing nowhere
    //*p_number3 = 33; //Writting into  a pointer pointing nowhere : BAD, CRASH

    std::cout << std::endl;
    std::cout << "Reading and writting through nullptr : " << std::endl;
    //std::cout << "p_number3 : " << p_number3 << std::endl;
    std::cout << "*p_number3 : " << *p_number3 << std::endl; //Reading from nullptr  
                                                                //BAD, CRASH.
    



    return 0;
}