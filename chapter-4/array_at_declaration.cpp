#include<iostream>

int main(){
    //Declare and intitialize at the same time 
    std::cout << std::endl;
    std::cout << "Declare and initialize at the same time  " << std::endl;

    double salaries[5] {12.3, 7.4, 89.5, 67.4, 45.5};
    for(size_t i{0}; i < 5; ++i){
        std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
    }

    //Array Initialization : Omitting elements
    //If you don't inititalize all the elements, those you leave out are initialized to 0
    std::cout << std::endl;
    std::cout << "Leaving out some elements un-initialized : " << std::endl;

    int families[5] {34, 34,55};

    for(size_t i{0}; i < 5; ++i){
        std::cout << "Families[" << i << "] : " << families[i] << std::endl;
    }

    //Array Declaration : Omit size
    //Omit the size of the array at declaration
    std::cout << std::endl;
    std::cout << "Omit the size of the array at declaration"<< std::endl;
    int class_sizes[] {10, 12, 13, 14, 15, 16};

    for(auto value : class_sizes){
        std::cout << "Value : " << value << std::endl;
    }

    // std::cout << std::endl;
    // //Constant arrays, cna't be modified.
    // const int multipliers [] {22, 23, 34};
    // multipliers[1] = 20; // Can't change elemnts of a const array: ERROR

    //Operations on data stored in arrays
    //Sum up scores array, store result in sum
    int sum {0};
    //Declare an array
    int scores [10];// junk data
    for(int element : scores){
        sum += element;
    }
    std::cout << "Score sum : " << sum << std::endl;

    //Size of an array [c++17]
    // int scores[] {10,12,13,14,15};
    // //Can get the size with std::size
    // std::cout << "Scores size : " << std::size(scores) << std::endl;

    // //print data out 
    // for( size_t i{0}; i < std::size(scores); ++i){
    //     std::cout << "Scores[" << i << "] : " << scores[i] << std::endl;
    // }

    //Array size with sizeof

    std::cout << "size of scores : " << sizeof(scores) << std::endl;
    std::cout << "size of scores[0] : " << sizeof(scores[0]) << std::endl;
    std::cout << "score item count : " << sizeof(scores)/ sizeof(scores[0]) << std::endl;

    size_t count {sizeof(scores)/ sizeof(scores[0])};

    std::cout << "Printing out array items : " << std::endl;
    for( size_t i {0}; i < count; ++i){
        std::cout << "scores[" << i << "]" << scores[i] << std::endl;
    }

    return 0;
}