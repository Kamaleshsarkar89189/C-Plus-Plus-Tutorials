#include<iostream>

int main(){
    const char * message {"Hello Kisan!"};

    std::cout << "message : " << message << std::endl;

    // *message = "B"; //Compiler Error!
    std::cout << "message : " << message << std::endl;

    //Allow users to modify the string
    char message1[] = "Hello Kisan!";
    message1[0] = 'B';
    std::cout << "Message1 : " << message1 << std::endl;
    return 0;
}