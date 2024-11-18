#include <iostream>
#include <cmath>

void primeFact(int a){
    while(a%2==0){
        std::cout << 2 << " * ";
        a = a/2; 
    }

    for(int i = 3; i<sqrt(a)+1; i = i +2){
        while(a%i == 0){
            std::cout << i << " * ";
            a = a/i;
        }
    }
    if(a>2){
        std::cout << a;
    }
    
}

int main(){
    int num;

    std::cout << "Enter a number to get in form of prime factors: ";
    std::cin >> num;
    primeFact(num);
}