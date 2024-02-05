#include<iostream>

int main(){
const int COUNT {10};
unsigned int i {0};// Initialization

do{
    std::cout << "[" << i << "] : I love C++" << std::endl;
    ++i; // Increment
            }
            while(i < COUNT); // Test

    return 0;
}