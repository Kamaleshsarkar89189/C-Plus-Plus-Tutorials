#include<iostream>

int main(){
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
    return 0;
}