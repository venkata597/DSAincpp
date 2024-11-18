#include <iostream>

uint64_t factorial(int a){
    uint64_t fact = 1;
    for(int i = 1; i<(a+1);i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    uint64_t fact = factorial(num);
    std::cout << "The factorial of the above number is " << fact << std::endl;
}