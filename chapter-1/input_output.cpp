#include<iostream>
#include<string>

int main(){
    // //Printing data
    // std::cout << "Hello world" << std::endl;

    // int age{23};
    // std::cout << "Age is : " << age << std::endl;

    // //
    // std::cerr << "Error message: somthing is wrong" << std::endl;
    // std::clog << "Log message : Something happened " << std::endl;

    //
   /* int age1;
    std::string name;
    std::cout << "Please type your name and age: " << std::endl;

    std::cin >> name;
    std::cin >> age1;
    // std::cin >> name >> age1;  //Run same way 

    std::cout << "Hello " << name << ". You are " << age1 << " years old! "<< std::endl; 
    */
    
    //Data with spaces

    std::string full_name;
    int age2;
    std::cout << "Please type your full mane and age: " <<std::endl;

    std::getline(std::cin,full_name);

    std::cin >> age2;

    std::cout <<"Hello " <<full_name <<" you are " << age2 << " years old!" <<std::endl;

    return 0;
}