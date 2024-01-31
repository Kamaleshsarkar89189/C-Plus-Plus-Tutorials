/*
    There are some operators below

        if          else            switch          Ternary operator
    */

    //If statement
    // Doing things conditionally
#include<iostream>

int main(){
    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_stop{true};

    /*
    If green : go
    If red, yellow : stop

    */

    if(red){
        std::cout << "Stop" << std::endl;
    }
    if(yellow){
        std::cout << "Slow down" << std::endl;
    }
    if(green) {
        std::cout << "Go" << std::endl;
    }

    //if clause
    int number1 {55};
    int number2 {60};

    bool result = (number1 < number2); //Expression yielding the condition
    std::cout << std::boolalpha << "result : " << result << std::endl;
    std::cout << std::endl;
    std::cout << "free standing if statement" << std::endl;

    //if(result) 
    if(result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }    
    //if(!result)
    if(!(result == true)){
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    //Using else
    std::cout << std::endl;
    std::cout << "Using the else clause : " << std::endl;

    if(result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    //Use expression as condition directly

    std::cout << std::endl;
    std::cout << "Using expression as condition : " << std::endl;

    if(number1 < number2){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    // Nested conditions
    std::cout << std::endl;
    std::cout << "Nested conditions" << std::endl;
    std::cout << "Police officer stops(verbose)" << std::endl;
    if(green){
        if(police_stop){
            std::cout << "Stop" << std::endl;
        }
        else{
            std::cout << "Go" << std::endl;
        }
    }

    // Nesting alternative
    std::cout << std::endl;
    std::cout << "Nesting alternative" << std::endl;
    std::cout << "Police officer stops(less verbose)" << std::endl;
    if(green && !police_stop){
        std::cout << "Go" << std::endl;
    }else{
        std::cout << "Stop" << std::endl;
    }
    return 0;
}