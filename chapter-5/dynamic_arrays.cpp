/*
Arrays allocated on the heap with the new operator. Can also use the std::nothrow version of new


size_t size{10};

//Different ways you can declare an array dynamically and how they are initialized

double *p_salaries { new double[size]}; //Salaries array will contain garbage values

int *p_students { new(std::nothrow) int[size]{}}; //All values initialized to 0

double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5}}; //Allocating memory space for an array of size double
                                                                //vars. First 5 will be initialized with 1,2,3,4,5 and the rest will be 0's.

//nullptr check and use the allocated array
if(p_scores){
    //Print out element. Can use regular array access notation, o rpointer arithmetic
    for(size_t i{}; i < size; ++i){
        std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
    }
}   

//Releasing memory[Array version]
delete[] p_scores;
p_scores = nullptr;

delete[] p_students;
p_students = nullptr;

delete[] p_salaries;
p_salaries = nullptr;

//Pointers and arrays are different 
//Pointer initialize with dynamic array are different from arrays : 
//std::size doesn't work on them, and they don't support range based for loops

double *temperatures = new double[size] {10.0,20.0,30.0,40.0,50.0,60.0};
//std::cout << "std::size(temperatures) : " << std::size(temperatures) << std::endl;//Error
//Error : Temperatures doesn't have array properties that are needed for the range based for loop to work.
for(double temp : temperatures) {
    std::cout << "temperatures : " << temp < std::endl;
}

//We say that the dynamically allocated array has decayed into a pointer

*/

#include<iostream>

int main(){
    //Different ways you can declare an array dynamically and how they are initialized
const size_t size{10};
double *p_salaries { new double[size]}; //Salaries array will contain garbage values

int *p_students { new(std::nothrow) int[size]{}}; //All values initialized to 0

double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5}}; //Allocating memory space for an array of size double


//nullptr check and use the allocated array
if(p_scores){
    //Print out element. Can use regular array access notation, o rpointer arithmetic
    for(size_t i{}; i < size; ++i){
        std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
    }
}   

//Releasing memory[Array version]
delete[] p_scores;
p_scores = nullptr;

delete[] p_students;
p_students = nullptr;

delete[] p_salaries;
p_salaries = nullptr;

//Static array Vs Dynamic arrays

int scores[10] {1,2,3,4,5,6,7,8,9,0}; //Leaves on the stack
std::cout << "scores size : " << sizeof(scores) << std::endl;
for(auto s : scores){
    std::cout << "value : " << s << std::endl;
}

int * p_scores1 = new int[10] {1,2,3,4,5,6,7,8,9,0}; //Lvess on the heap
// std::cout << "p_scores1 size : " << sizeof(p_scores1) << std::endl;

// for(auto s : p_scores1){
//     std::cout << "value : " << s << std::endl;
// }
//     return 0;
// }

