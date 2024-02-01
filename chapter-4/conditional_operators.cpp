/*
    There are some operators below

        if          else            switch          Ternary operator
    */

    //If statement
    // Doing things conditionally
#include<iostream>
#include<string>

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

    // Else if 
    // Testing for several different conditions
    // Tools
    const int Pen{10};
    const int Marker{20};
    const int Eraser{30};
    const int Ractangle{40};
    const int Circle{50};
    const int Ellipse{60};

    int tool{Pen};
    if(tool == Pen){
        std::cout << "Active tool is Pen" << std::endl;
        //Do the actual painting
    }
    else if(tool == Marker){
        std::cout << "Active tool is Marker" << std::endl;
    }
    else if(tool == Eraser){
        std::cout << "Active tool is Eraser" << std::endl;
    }
    else if(tool == Ractangle){
        std::cout << "Active tool is Ractangle" << std::endl;
    }
    else if(tool == Circle){
        std::cout << "Active tool is Circle" << std::endl;
    }
    else if(tool == Ellipse){
        std::cout << "Active tool is Ellipse" << std::endl;
    }

    std::cout << "Moving on!" << std::endl;

    std::cout << std::endl;

    //Switch

    // int tool{Pen};
    switch(tool){
        case Pen: {
            std::cout << "Active tool is pen" << std::endl;
        }
        break;

        case Marker: {
            std::cout << "Active tool is Marker" << std::endl;
        }
        break;

        default: {
            std::cout << "Can't match any tool!" << std::endl;
        }
        break;
    }

    std::string name {"Kisan"};

    /*
    Break : The break statement after each case is very important. It stops processing the switch block when a successful case has been
    found. If the break statement is not there, all the cases following the current case will be executed.


    Condition : Integral types and enums: int, long, unsigned short, ect.
    */


    

    int max{};
    int a{35};
    int b{45};

    std::cout << std::endl;
    std::cout << "Using regular if " << std::endl;
    
    // if(a > b){
    //     max = a;
    // }else{
    //     max = b;
    // }
    
    // Ternary Operator
    max = (a > b)? a:b; //Ternaru operator
    std::cout << "max : " << max << std::endl;

    //Loops

    return 0;
}