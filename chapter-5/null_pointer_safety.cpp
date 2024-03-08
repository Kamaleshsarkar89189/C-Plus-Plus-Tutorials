/*
Making sure you are working with pointers containing valid memory addresses

Verbose nullptr check

int * p_number{}; //Initialized to nullptr

if(!(p_number==nullptr)){
    std::cout << "p_number points to a VARLID address : " << p_number << std::endl;
}else{
    std::cout << "p_number points to an INVALID address." << std::endl;
}


//Compact nullptr check
if(p_number){
    std::cout << "p_number points to a VALID address : " << p_number << std::endl;
}else{
    std::cout << "p_number points to an INVALID address." << std::endl;
}


//Calling delete on a nulptr is OK
int *p_number1 {};

delete p_number1; //This won't cause any problem if p_number1 contains nullptr

//So no need to over do something like
if(p_number1){
    delete p_number1;
    p_number1 = nullptr;
}



*/
#include<iostream>

int main(){
    int * p_number{}; //Initialized to nullptr
    // p_number = new int(8);

// if(!(p_number==nullptr)){
//     std::cout << "p_number points to a VARLID address : " << p_number << std::endl;
//     std::cout << "*p_number address : " << *p_number << std::endl;
// }else{
//     std::cout << "p_number points to an INVALID address." << std::endl;
// }
// if(p_number){
//     std::cout << "p_number points to a VALID address : " << p_number << std::endl;
//     std::cout << "*p_number : " << *p_number << std::endl;
// }else{
//     std::cout << "p_number points to an INVALID address." << std::endl;
// }
// delete p_number;
// p_number = nullptr;

//Calling delete on a nulptr is OK
int *p_number1 {};

delete p_number1; //This won't cause any problem if p_number1 contains nullptr

//So no need to over do something like
if(p_number1){
    delete p_number1;
    p_number1 = nullptr;
}
    return 0;
}