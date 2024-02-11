#include<iostream>

    /*
Bounds of an Array

*/
int main(){
int number[] {1,2,3,4,5,6,7,8,9,0};

//Read beyond bounds : Will read garbage or crash your program
std::cout << "number[12] : " << number[12] << std::endl;

//Write beyond bounds. The compiler allows it. But you don't own the memory at 
//index 12, so other programs may modify it and your programs may modify it and your 
//program may read bogus data at a later time. or you can even corrupt data used by 
//other parts of your program.
number[12] = 10000;
//number[129999] = 10000; Program will crush...
std::cout << "number[12] : " << number[12] << std::endl;

    return 0;
}