/*
Operation on Data

    Basic Operations
        1. Add 
        2. Subtract
        3. Divide
        4. Modulus
        5. Multiply

    1. Addition
        int sum { number1 + number2 };
        int other_sum = number1 + number2 + number1;
        std::cout << " The sum is : " << sum <<std::endl;
        std::cout << "Other sum is : " << other_sum << std::endl;

    2. Subtraction 
    int diff { number1 - number2 };
    int other_diff = number1 - number2 - number2;

    std::cout << "The diference is : " << diff << std::endl;
    std::cout << "Other diference is : " << other_diff << std::endl;

    3. Multiplication 
    int product {number1 * number2};
    int other_product = number1 * 2 * number2;

    std::cout << "The product is : " << product << sdd::endl;
    std::cout << "The other product is : " << other_product << sdd::endl;

    3 . Integer Division
    int quotient { number1 / number2 };
    int other_quotient = number1 / 17;

    std::cout << "The quotient is : " << quotient << std::endl;
    std::cout << "The other quotient is : " << other_quotient << std::endl;


    4. Modulus
    result = number1 % number2;
    std::cout << "The modulus is : " << result << std::endl;


Precedence and Associativity
 a+b*c-d/e-f+g
    
    When we have multiple operaor in the same expression.
    In c plus plus the multiplication and division operator have to be doen before do 
    addition and subtraction. If you want to evaluate this expression , you have to do b and c first
    and then do d and e once you have those results then you can do addition and subtraction. If we have only addition 
    and subtraction in an expiration and we solve that problem with associativity, it's defined if you do the operation fro m
    the left or from the right

    Precedence : which operation to do first
    Associativity : which direction or which order
     
     C++ Operator Precedence
        https://en.cppreference.com/w/cpp/language/operator_precedence


Prefix and Postfix + and -
    //Increment by one 
    value = value+1;
    std::cout << "The value is : " << value << std::endl;

    value = 5; // Reset value to 5
    // Decrement by one 
    value = value - 1;
    std::cout << "The value is : " << value << std::endl;



  Another way to do 
    
    value = 5
    std::cout << "The value is (incremmenting) : " << value++ <<std::endl; // 5
    std::cout << "The value is : " << value << std::endl; // 6

    std::cout << std::endl;

    // Decrement with postfix
    //Reset value to 5
    value = 5;

    std::cout << "The value is  (decrementing) : " << value-- << std::endl; // 5
    std::cout << "The value is : " << value << std::endl; // 4


    One more war to do 

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
         std::coout << "The value is (prefix--) : " << value << std::endl;
         //Reset value to 5;
         value = 5;
         std::cout << "The value is (prefix-- in place) : " << --value << std::endl;

---->Prefix and postfix increment/decrement operator are cool
---->But they only increment by one, what if we need to increment by a value other than 1, say 5 or 7.
---->These in no  value** or value**, or // value or value//. They don't make sense, these prefix/postfix operators are only 
     available for + and -, again because that's where they make sense


Compound Assignment Operators
    int value {45};
    std::cout << "The value is : " << value <<std::endl;

    std::cout << std::endl;
    value +=5; // equation to value = value + 5
    std::cout << "The value is after +=5 : " << value << std::endl; // 50

    std::cout << std::endl;
    value -=5; // equation to value = value -5

    std::cout << std::endl;
    value *=2;
    std::cout << "The value is after *=2 : " << value <<std::endl;//90
    
    std::cout << std::endl;
    value /=3;
    std::cout << "The value is after /= : " << value << std::endl;//30

    std::cout << std::endl;
    value  %=11;
    std::cout << "The value is after %= : " << value << std::endl;

Relational Operators : Comparing Stuff

std::cout << "Number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" <<std::endl;

    std::cout << std::boolalpha ; // Make bool show up as true/false instead of 1/0
    // Stress the need for parentheses here
    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
    std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;
    
     std::cout << std::endl;
     std::cout << "Store comparison result and use it later" << std::endl;

     bool result = (number1 == number2);
     std::cout << "Result : " << result << std::endl;



Logical Operators
    AND-------> &&
    OR--------> ||
    NOT-------> !
    

    AND Operators

        a             b               a && b
        false        false            false
        false        true             false
        true         false            false
        true         true             true

    
    OR Operators

        a           b               a || b
        false       false           false
        false       true            true
        true        false           true
        true        true            true


    NOT Operators

        a               !a
        true            false
        false           true




bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;


    // AND : Evaluates to true when all operands are true.
    // A single false operand will drag
    // the entire expression to evaluating false.

    std::cout << std::endl;
    std::cout << "Basic AND operations" << std::endl;

    std::cout << "a && b : " << (a && b) << std::endl;
    std::cout << "a && c : " << (a && c) << std::endl;
    std::cout << "a && b && c: " << (a && b && c) << std::endl;


    // OR : Evaluates to true when at least one operand true.
    // A single true operand will push the entire expression to evaluating true.
    std::cout << std::endl;
    std::cout << "Basic OR operators" << std::endl;
    std::cout << "a || b : " << (a || b) << std::endl;
    std::cout << "a || c : " << (a || c) <<std::endl;
    std::cout << "a || b || c : " << (a || b || c) << std::endl;


    // NOT : Negates whateve operand you put it with
    std::cout << std::endl;
    std::cout << "Basic NOT operators" << std::endl;
    std::cout << "!a : " << !a << std::endl;
    std::cout << "!b : " << !b << std::endl;
    std::cout << "!c : " << !c << std::endl;

    // Combine logical operators in expression
    std::cout << "!(a && b) || c : " << (!(a && b) || c) << std::endl;



    Output Formatting

        Header file 
        #include<ios>
        #include<iomanip>

        There are lot of Library funcion in cpp 

        1. std::endl;
        2. std::flush;
        2. std:showpoint;
        2. std::right;
        2. std::boolalpha;
        2. std::setfill;
        2. std::left;
        2. std::internal;
        2. std::setw;
        2. std::hex;
        2. std::fixed;
        2. std::setprecision;
        2. std::dec;
        2. std::scientific;
        2. std::showbase;
        2. std::uppercase;
        2. std::showpos;
        2. std::oct;

    For more information
        https://en.cppreference.com/w/cpp/io/manip

    1. std::endl ---> 
            std::cout << "Hello";
            std::cout << "World";

            std::cout << std::endl;

            std::cout << "------------" << std::endl;

            std::cout << "Hello" << std:endl;
            std::cout << "World" << std:endl;
            
            std::cout << std::endl;

            std::cout << "Hello\n";
            std::cout << "World\n";

    
    Numeric Limits

#include<limits>

#include <iostream>
#include <limits>



	std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to " 
        << std::numeric_limits<short>::max() << std::endl;
        
    std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to " 
        << std::numeric_limits<unsigned short>::max() << std::endl;
        
        
	std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to " 
        << std::numeric_limits<int>::max() << std::endl;
        
    std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to " 
        << std::numeric_limits<unsigned int>::max() << std::endl;
        
    std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to " 
        << std::numeric_limits<long>::max() << std::endl;
        
    std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to " 
        << std::numeric_limits<float>::max() << std::endl;
        
    std::cout << "The range(with lowest) for float is from " << std::numeric_limits<float>::lowest() << " to " 
        << std::numeric_limits<float>::max() << std::endl;
        
    std::cout << "The range(with lowest) for double is from " << std::numeric_limits<double>::lowest() << " to " 
        << std::numeric_limits<double>::max() << std::endl;
        
    std::cout << "The range(with lowest) for long double is from " << std::numeric_limits<long double>::lowest() << " to " 
        << std::numeric_limits<long double>::max() << std::endl;


    //Other facilities
    //More info : https://en.cppreference.com/w/cpp/types/numeric_limits
    std::cout << "int is signed : " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "int digits : " << std::numeric_limits<int>::digits << std::endl;
    return 0;


    Math Function 
    1.std::floor()
    2.std::ceil()
    3.std::abs()
    4.std::cos()
    5.std::exp()
    6.std::log()
    7.std::pow()
    8.std::sqrt()
    9.std::rounf()
    10.std::sin()
    11.std::tan()
    For more details link below--->
    https://en.cppreference.com/w/cpp/header/cmath

    

