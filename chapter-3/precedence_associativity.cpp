#include<iostream>

int main(){
    int a {7};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {8};
    int g {5};

    int result = a+b*c-d/e-f+g;
    std::cout << "Result : " << result << std::endl;

    result = (a+b)*c-d/e-f+g; // a and b done first, this goinng to the compiler first to do this.
    // It is clear to make the intent in your code as clear as possible by clearly using () to indicate which operations you want done first
    std::cout << "Result : " << result << std::endl;
    return 0;
}