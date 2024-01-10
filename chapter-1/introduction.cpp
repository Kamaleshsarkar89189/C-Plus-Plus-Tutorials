/*

C++ is a general-purpose, object-oriented programming language. Developed by Bjarne Stroustrup at Bell Labs in 1985.
C++ is a compiled language, which means that it is converted into machine code before it is executed. This makes C++ programs very fast and efficient.

C++ is used in a wide variety of applications, including operating systems, embedded systems, game development, and scientific computing. It is also one of the most popular languages for teaching programming.

Here are some of the key features of C++:

Object-oriented:
C++ is an object-oriented language, which means that it allows you to create objects that contain both data and functions. This makes it easy to model real-world objects in your code.

Compiled:
C++ is a compiled language, which means that it is converted into machine code before it is executed. This makes C++ programs very fast and efficient.

Powerful:
C++ is a very powerful language, and it can be used to create a wide variety of applications.

Portable:
C++ is a portable language, which means that it can be compiled and run on a variety of different platforms.


syntax:

    #include<iostream>  //Header file
    
    int main(){
        std::cout<<"Hellow World";
        return 0;
    }
COMMENTS:

 Entry point main function 
    int main(int argc, char ** argv )

    //One line comment

    Multi-line block comment which is used in the allover line


    Errors and Warnings:

        1.Compile time errords
        2.Runtime errors
        3.Warnings


    
Statements and Functions

    * Statement is a basic unit of computation in a c++ program
    * Every C++ program is a collection of statements organized in a certain way to achieve some goal
    * Statement end with a semicolon in C++(;)
    * Statements are executed in order from top to bottom when the program is run
    * Execution keeps going until there is a statement causing the program to terminate, or run another sequence fo statements

        syntax: 

            int addNumbers(int first_number, int second_number){
                int sum = first_number + second_number;
                return sum;
            }



Input Output:

    std::cout --->Printing data to the console(terminal)
    std::cin --->Reading data from the terminal
    std::cerr --->Printing errors to the console
    std::clog --->Printing log messages to the console
*/