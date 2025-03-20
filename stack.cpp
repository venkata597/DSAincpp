#include <iostream>
#include <vector>
#include <string>

template<typename t> class stack{
private:
    std::vector<t> stk;
    int stack_pointer = -1;
public: 
    void push(t n){
        stk.push_back(n);
        stack_pointer++;
    }
    t pop(){
        if(stack_pointer==-1){
            std::cout << "Stack is Empty" << std::endl;
        }
        else{
            t popped = stk.pop_back();
            stack_pointer--;
            return popped;
        }
    }
    void peek() const {
        if(stack_pointer==-1){
            std::cout << "Stack is empty" << std::endl;
        }
        else{
            std::cout << "The top element of the stack is: " << stk[stack_pointer] << std::endl;
        }
    }
    void display() const {
        if(stack_pointer==-1){
            std::cout << "Stack is empty" << std::endl;
        }
        else{
            std::cout << "-------" << std::endl;
           for(int i = stack_pointer;i>=0;i--){
                std::cout << "|  "<< stk[i] <<"  |" << std::endl;
                std::cout << "-------" << std::endl;
           }
           
        }
    }
};

int main(){
    stack<int> stack;   
}