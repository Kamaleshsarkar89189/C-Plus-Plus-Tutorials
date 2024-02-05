#include<iostream>

int main(){
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

    return 0;
}