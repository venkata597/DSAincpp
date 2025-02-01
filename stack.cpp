#include <iostream>

template<typename t,int size> class stack{
private:
    t stack[size];
    int stack_pointer = -1;
public:
    void push(int val){
        if(stack_pointer>=size){
            std::cerr << "Stack Overflow" << std::endl;
        }
        else{
            stack_pointer++;
            stack[stack_pointer] = val;
        }
    }
    void pop(){
        if(tos==-1){
            std::cout << "Stack Underflow" << std::endl;
        }
    }
};