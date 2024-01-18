#include<iostream>

int main(){
    char character2 {'I'};
    char character3 {'S'};
    char character4 {'A'};
    char character1 {'K'};
    char character5 {'N'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    //One byte in memory : 2^8 = 256 different values (0 ~ 255)
    char value = 65; //ASCII  character code for 'A'
    std::cout << "valaue : " << value <<std::endl;
    std::cout << "valaue(int) : " << static_cast<int>(value) <<std::endl;
  
    return 0;
}