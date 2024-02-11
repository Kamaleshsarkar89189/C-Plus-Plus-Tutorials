#include<iostream>

int main(){
    //Size of an array [c++17]
    int scores[] {10,12,13,14,15};
    // int count { std::size(scores)};
    // //Can get the size with std::size
    // std::cout << "Scores size : " << std::size(scores) << std::endl;

    // //print data out 
    // for( size_t i{0}; i < count; ++i){
    //     std::cout << "Scores[" << i << "] : " << scores[i] << std::endl;
    // }

    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;

    //Range based for loop
    for (auto i : scores){
        std::cout << "value : " << i << std::endl;
    }

    return 0;
}