#include <iostream>

int gcd(int a,int b){

    int tmp = std::min(a,b);
    int res = 1;
    for(int i = 1; i<tmp+1; i++){
        if(a%i==0 && b%i==0){
            res = i;
        }
    }
    return res;

}

int main(){
    int a,b;
    std::cin>>a;
    std::cin>>b;
    std::cout << "The gcd of above two numbers is: " << gcd(a,b) << std::endl;
}