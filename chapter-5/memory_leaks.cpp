/*
When we loose access to memory that is dynamically allocated

//Reassignment of stack address to active dynamic address pointer
int *p_number {new int{67}}; //Points to some address, let;s call that address1

//should delete and reset here

int number{45}; //Lives at address2

p_number = &number; //Now p_number points to address2, but address1 is still in use by our program.
                    //But our program has lost access to that memory location.
                    //Memory has been leaked.
//double allocation
 int *p_number1 {new int{66}};

 //use the pointer
 //Should delete and reset here.

 p_number1 = new int{77}; //Memory with int{66} leaked.
*/
#include<iostream>

int main(){
// int *p_number {new int{67}}; //Points to some address, let;s call that address1

// //should delete and reset here

// int number{45}; //stack variable

// p_number = &number; //Now p_number points to address2, but address1 is still in use by our program.
//                     //But our program has lost access to that memory location.
//                     //Memory has been leaked.

//double allocation
//  int *p_number1 {new int{66}};

//  //use the pointer
//  //Should delete and reset here.

//  p_number1 = new int{77}; //Memory with int{66} leaked.
//  delete p_number1;
//  p_number1 = nullptr;

//Nested scopes with dynamically allocated memory
{
    int *p_number2 {new int{57}};
}
//Memory with int{57} leaked.
std::cout << "Program ending well!" << std::endl;
    return 0;
}