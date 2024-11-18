#include <iostream>
#include <cmath>

int lcm(int a,int b){
    int min = std::min(a,b);
    int res = 1;
    for(int i = 1; i<min+1;i++){
        if(a%i==0 && b%i==0){
            res = i;
        }
    }
    int lcm = floor((a*b)/res);
    return lcm;
}

int main(){
    int a,b;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter a number: ";
    std::cin >> b;
    std::cout << "The LCM of " << a << " and " << b << " is " << lcm(a,b) << std::endl;
}