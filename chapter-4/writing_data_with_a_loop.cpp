#include<iostream>

int main(){
    int scores[10];
    std::cout << std::endl;
    std::cout << "Writing data in array with loop :" << std::endl;

    //Write data
    for(size_t i{0}; i<10; ++i){
        std::cout << "scores[" << i << "] :" << scores[i] << std::endl;
    }
    return 0;
}