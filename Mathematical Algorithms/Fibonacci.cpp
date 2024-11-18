#include <iostream>

int Fibonacci(int range){
    int first = 0;
    int second = 1;
    int third;
    std::cout << "Fibonacci Sequence: " << first << " " << second << " ";
    for(int i = 2; i<range+1; i++){
        third = first+second;
        std::cout << third << " ";
        first = second;
        second = third;
    }
}

int main(){
    int rng;
    std::cout << "Enter a limit: ";
    std::cin >> rng;
    Fibonacci(rng);
}