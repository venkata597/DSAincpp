#include <iostream>

uint64_t factorial(int n){
    uint64_t fct = 1; 
    for(uint64_t i = 1; i<n+1;i++){
        fct = fct * i;
    }
    return fct; 
}

int catalan(int num){
    uint64_t tmp1 = factorial(2*num);
    uint64_t tmp2 = factorial(num+1);
    uint64_t tmp3 = factorial(num);
    int catn = tmp1/(tmp2*tmp3);
    return catn;
}

int main(){
    int number;
    std::cout << "Enter a number to find the Catalan number of it: ";
    std::cin >> number;
    int catalannum = catalan(number);
    std::cout << "The catalan number for above number is: " << catalannum << std::endl;
}