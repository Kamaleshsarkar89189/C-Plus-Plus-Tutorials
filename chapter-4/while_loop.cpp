#include<iostream>

int main(){
std::cout << "Using while loop" << std::endl;
const unsigned int COUNT {10};
unsigned int i {0};
while ( i < COUNT){
std::cout << "I love C++" << std::endl;
++i;
}

    return 0;
}