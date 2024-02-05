#include<iostream>

int main(){
    int scores[10]; // An array storing 10 integers
                        // [ is not angle bracket, it's a square bracket. 
    // Reading values
    std::cout << "Reading out score values (manually) : " << std::endl;
    std::cout << "score[0] : " << scores[0] << std::endl;
    std::cout << "Score[1] : " << scores[1] << std::endl;
    //so on....
    std::cout << "Scores[9] : " << scores[9] << std::endl;
    //Array Bounds
    //Reading past bounds of your array : BAD!
    //It's going to read out something you didn't put there.
    std::cout << "Scores[10] : " << scores[10] << std::endl;

    //Writing data into an array
    // int scores[10]; // An array storing 10 integers
    //Writing data in an array
    scores[0] = 20;
    scores[1] = 270;
    scores[2] = 240;
    scores[3] = 420;
    scores[4] = 240;
    scores[5] = 420;
    scores[6] = 2;
    //Writing out of bounds. BAD!
    scores[20] = 234;

    std::cout << "Manually writing data in array : " << std::endl;
    for(size_t i{0}; i < 10; ++i){
        std::cout << "Scores[" << i << "] : " << scores[i] << std::endl;
    }
    //Writing data with a loop
    int scores[10];
    std::cout << std::endl;
    std::cout << "Writing data in array with loop :" << std::endl;

    //Write data
    for(size_t i{0}; i<10; ++i){
        std::cout << "scores[" << i << "] :" << scores[i] << std::endl;
    }
    return 0;
}