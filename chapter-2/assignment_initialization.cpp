// Assignment Initialization
#include<iostream>

int main(){
    int apple_count = 5;
    int orange_count =10;
    int fruit_count = apple_count + orange_count;
    
    int narrowing_conversion_functional = 2.7;

    std::cout << "Apple count: " << apple_count << std::endl;
    std::cout << "Orange count: " << orange_count << std::endl;
    std::cout << "Fruit count: " << fruit_count << std::endl;
    std::cout << "Narrowing conversion: " << narrowing_conversion_functional << std::endl;

    //Check the size with sizeof 

    std::cout << "Size of int : " << sizeof(int) << std::endl;
    std::cout << "Size of truck count : " << sizeof(fruit_count) << std::endl;

    return 0;
}