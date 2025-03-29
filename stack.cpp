#include <iostream>


template<typename t,int size> class stack{
private:
    t stack[size];
    int top=-1;
public:
    void push(t ele){
        if(isFull()){
            std::cout << "Stack overflow" << std::endl;
        }
        else{
            stack[++top] = ele;
        }
    }

    t pop(){
        if(isEmpty()){
            std::cout << "Stack Underflow" << std::endl;
        }
        else{
            t ppd = stack[top];
            top--;
            return ppd;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(top>=size-1){
            return true;
        }
        else{
            return false;
        }
    }
};


int main(){
    stack<int,10> stk;
}