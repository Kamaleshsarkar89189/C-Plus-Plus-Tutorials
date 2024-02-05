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
     /*
     It's allow to do repetitive tasks relatively easily, suppose we have a task to print a message 10 times we can go down and do it like this but if we asked to print the message 10000 times than to do this is not a easy work to do this so c++ provide a way to do 
     that relatively easily.

        There are 4 types of loops:

            1.For loop
            2.Range based for loop
            3.While loop
            4.Do while loop


     */
    // 1. For loop
    //     syntax:
        
            for(unsigned int i{}; i<10; ++i){
                std::cout << "I'm Kamalesh" << std::endl;
            }

        /*Pillars of any loop
        --> Iterator
        --> Starting Point
        --> Test(controls when the loop stops)
        --> Increment(Decrement)
        --> Loop body 
        */

            //Use size_t : A representation of some unsigned int for positive numbers [sizes]
            for(size_t i{0}; i < 10; ++i){
                std::cout << i << " I love Program" << std::endl;
            }

        //sizeof(size_t)
        std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;

        //Scope of the iterator
        for(size_t i{0}; i < 10; ++i){
            std::cout << i << " : I love c++" << std::endl;
        }
        // std::cout << "i :" << i << std::endl; Compiler Error : i is not in scope

        //Iterator declared outside the loop
        // size_t i{0}; // Iterator defined outside
        // for(i; i < 10; ++i){
        //     std::cout << "I love C++" << std::endl;
        // }
        // std::cout << "i :" << i << std::endl;

        //Leave out the iterator declaration part

        // size_t i{0}; 
        // for( ; i < 10; ++i){
        //     std::cout << "I love C++" << std::endl;
        // }
        // std::cout << "i :" << i << std::endl;
        // //Don't hard code values : BAD!
        // const size_t COUNT{100};  
        // for(size_t i{0}; i < COUNT; ++i){
        //     std::cout << "I love C++" << std::endl;
        // }
        // std::cout << "Loop done!" << std::endl;

        //while loop
        std::cout << "Using while loop" << std::endl;
        const unsigned int COUNT {10};
        unsigned int i {0};
        while ( i < COUNT){
            std::cout << "I love C++" << std::endl;
            ++i;
        }


        //Do while loop

            const int COUNT {10};
            size_t i {0};// Initialization

            do{
                std::cout << "[" << i << "] : I love C++" << std::endl;
                ++i; // Increment
            }
            while(i < COUNT); // Test

            // Run the body then checks







    /* Arrays
        Declaring and Using Arrays
        // Declaring an array
        int
        


    */
    // Initialize the array at declaration
    //Declare and intitialize at the same time 
    std::cout << std::endl;
    std::cout << "Declare and initialize at the same time  " << std::endl;

    double salaries[5]; {12.3, 7.4, 89.5, 67.4, 45.5};
    for(size_t i{0}; i < 5; ++i){
        std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
    }

    //Array Initialization : Omitting elements
    //If you don't inititalize all the elements, those you leave out are initialized to 0
    std::cout << std::endl;
    std::cout << "Leaving out some elements un-initialized : " << std::endl;

    int families[5] {34, 34,55};

    for(size_t i{0}; i < 5; ++i){
        std::cout << "Families[" << i << "] : " << std::endl;
    }


    return 0;
} 