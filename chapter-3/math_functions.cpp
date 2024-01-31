#include<iostream>
#include<cmath>

int main(){
    double weight {7.7};
    //floor
    std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;

    //ceil
    std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl;

    //abs
    double savings {-5000};
    weight = 7.7;
    std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
    std::cout << "Abs of savings is : " << std::abs(savings) << std::endl;

    // exp : f(x) = e^x, where e = 2.71828.
    double exponential = std::exp(10);
    std::cout << "The exponential of 10 is : " << exponential << std::endl;

    //pow
    std::cout << "3 ^ 4 is : " << std::pow(3,4) << std::endl;
    std::cout << "9 ^ 3 is : " << std::pow(9,3) << std::endl;

    //log : reverse function of pow . if 2 ^ 3 = 8, log 8 in base 2 = 3. log is like asking to which exponent should we elevate 2 to get eight? 
    // Log, by default computes the log in base e. There also is another function which uses base 10 called log10
    //Try the reverse operation of e ^ 4 = 54.59, it will be log 54.59 in base e = ?
    std::cout << "Log, to get 54.59, you would elevate e to the power of : " << std::log(54.59) << std::endl;

    //log10, 10 ^ 4 = 10000, to get 10k, you'd need to elevate 10 to the power of? This is log in base 10
    std::cout << "to get 1000, you'd need to elevate 10 to the power of : " << std::log10(10000) << std::endl;
    
    //sqrt
    std::cout << "The square root fo 81 is : " << std::sqrt(81) <<std::endl;

    //round. Halfway points are rounded away from 0. 2,5 is rounded to 5 for example
    std::cout << "3.654 round to : " << std::round(3.654) << std::endl;
    std::cout << "2.5 is round to : " << std::round(2.5) << std::endl;
    std::cout << "2.4 is round to : " << std::round(2.4) << std::endl;

    std::cout << std::endl;

    //Weired Integral Types

        // Integral types less then 4 bytes in size don't support arithmetic operations

        short int var1 {10};
        short int var2 {20};

        char var3 {40};
        char var4 {50};

        std::cout << "Size of var1 : " << sizeof(var1) << std::endl;
        std::cout << "Size of var2 : " << sizeof(var2) << std::endl;
        std::cout << "Size of var3 : " << sizeof(var3) << std::endl;
        std::cout << "Size of var4 : " << sizeof(var4) << std::endl;

        auto result1 = var1 + var2; // Conversion to int
        auto result2 = var3 + var4;
        
        std::cout << "Size of result1 : " << sizeof(result1) << std::endl;
        std::cout << "Size of result2 : " << sizeof(result2) << std::endl;

        // The same behavior is present on other operators like bitwise shift operators ( >> and <<) .
    return 0;
} 