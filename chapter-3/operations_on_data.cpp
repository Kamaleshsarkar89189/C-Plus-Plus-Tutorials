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

