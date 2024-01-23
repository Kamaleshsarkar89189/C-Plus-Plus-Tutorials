#include<iostream>

int main(){
     
     // Addition
     int number1{7}; 
     int number2{5}; 
     int result = number1 + number2;
     std::cout << "Result : " << result << std::endl;

     // subtraction
      result = number1 - number2;
      std::cout << "Result : " << result << std::endl;

     //Multiplication 
    int product {number1 * number2};
    int other_product = number1 * 2 * number2;

    std::cout << "The product is : " << product << std::endl;

    // Integer Division
    int quotient { number1 / number2 };
    int other_quotient = number1 / 17;

    std::cout << "The quotient is : " << quotient << std::endl;


    // Modulus
     result = number1 % number2;
     std::cout << "The modulus is : " << result << std::endl;


    return 0;
}