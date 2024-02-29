#include<iostream>

int main(){
    int  data = new int[1000000000000000];
for(size_t i{0}; i < 10000000; ++i){
    int * data = new int[10000000];  //it does not compiled 
}
    return 0;
}