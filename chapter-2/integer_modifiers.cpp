#include<iostream>

int main(){
    
    int value1 {300};
    // signed int value1 {300}; // this is return same value .Signed meaning it may negative number of posetive number
    int value2 {-450};

    std::cout<< value1 <<std::endl;
    std::cout<< value2 << std::endl;

    std::cout << "sizeof(value): "<<sizeof(value1) <<std::endl;

    unsigned int value3 {5};
    // unsigned int value4 {-4}; //Compiler error . Because unsigned meaning it only posetive number




    return 0;
}