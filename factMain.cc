#include <iostream>
#include "Chapter6.h"

int main(){
    std::cout<<"please input a number:"<<std::endl;
    int num;
    std::cin>>num;
    std::cout<<"fact is:"<<fact(num)<<std::endl;
    return 0;
}