#include <iostream>
#include <vector>
#include <string>

template<int size> class stack{
private:
    int stack[size];
    int tos = -1;
public:
    void push(int ele){stack[++tos] = ele;}
    int pop(){return stack[tos--];}
    int get_tos(){return tos;}
};

bool isnum(std::string st){
    bool flag = true;
    for(int i = 0;i<st.length();i++){
        if(isdigit(st[i])){
            continue;
        }
        else{
            flag = false;
        }
    }
    return flag;
}

std::vector<std::string> split(std::string expr){
    expr.push_back(' ');
    std::vector<std::string> splt_arr;
    std::string buff;
    for(int i = 0;i<expr.length();i++){
        if(expr[i]!=' ' && i != (expr.length()-1)){
            buff.push_back(expr[i]);
        }
        else if(expr[i]!=' ' && i == expr.length()-1) splt_arr.push_back(buff);
        else{
            splt_arr.push_back(buff);
            buff.clear();
        }
    }
    return splt_arr;
}

int evaluate(std::string expr){
    std::vector<std::string> expr_arr = split(expr);
    int size = expr_arr.size();
    int a,b,c;
    stack<100> Stack;
    for(int i = 0;i<size;i++){
        if(isnum(expr_arr[i])){
            int num = std::stoi(expr_arr[i]);
            Stack.push(num);
        }
        else{
            if(expr_arr[i] == "+"){
                a = Stack.pop();
                b = Stack.pop();
                c = b + a;
                Stack.push(c);
            }
            else if(expr_arr[i] == "-"){
                a = Stack.pop();
                b = Stack.pop();
                c = b - a;
                Stack.push(c);
            }
            else if(expr_arr[i] == "*"){
                a = Stack.pop();
                b = Stack.pop();
                c = b * a;
                Stack.push(c);
            }
            else if(expr_arr[i] == "/"){
                a = Stack.pop();
                b = Stack.pop();
                c = b / a;
                Stack.push(c);
            }
            else if(expr_arr[i] == "%"){
                a = Stack.pop();
                b = Stack.pop();
                c = b % a;
                Stack.push(c);
            }
            else{
                std::cout << "Operation for this" << expr_arr[i] << "operator doesn't exist.Terminating execution!!" << std::endl;
            }
        }
    }

    if(Stack.get_tos()==0){
        return Stack.pop();
    }
    else{
        return 1;
    }
}

int main(){
    std::string expression;
    std::cout << "Enter the postfix expression:";
    std::getline(std::cin,expression);
    int result = evaluate(expression);
    std::cout << "Result is: " << result << std::endl;
}