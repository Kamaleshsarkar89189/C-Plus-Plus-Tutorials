#include<iostream>
int addNumbers(int first_number, int second_number){
    int sum = first_number + second_number;    //using function 
    return sum;
}

int main(int argc, char **argv){

    int first_number = 23;  //using statements
    int second_number = 45;
    int sum = first_number + second_number;
    sum = addNumbers(first_number, second_number);

    sum = addNumbers(23, 45);

    std::cout << "The sum of the two number is : " << sum << std::endl;  //using statement
    std::cout << "The sum of the two number is : " << addNumbers(23, 45) << std::endl; //using function 
    return 0;
}