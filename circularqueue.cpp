#include <iostream>

template<typename t,int size> class circular_queue{
private:
    t cqueue[size];
    int frnt = -1,rr = -1;
public:
    void enqueue(t ele){
        if(isFull()){
            std::cout << "Circular Queue overflow" << std::endl;
        }
        else{ 
            rr = (rr+1)%size;
            cqueue[rr] = ele;
        }
        if(frnt == -1){
            frnt = 0;
        }
    }

    t dequeue(){
        if(isEmpty()){
            std::cout << "Circular Queue Underflow" << std::endl;
        }
        else if(frnt == rr){
            t dqd = cqueue[frnt];
            frnt = -1;
            rr = -1;
            return dqd;
        }
        else{
            t dqd = cqueue[frnt];
            frnt = (frnt+1)%size;
            return dqd;
        }
    }

    bool isFull(){
        if(frnt == 0 && rr == size-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty(){
        if(frnt == -1 && rr == -1){
            return true;
        }
        else{
            return false;
        }
    }

    void front(){
        if(isEmpty()){
            std::cout << "Circular Queue Empty" << std::endl;
        }
        else{
            std::cout << "The element at the front is: "<< cqueue[frnt] << std::endl;
        }
    }

    void rear(){
        if(isEmpty()){
            std::cout << "Circular Queue Empty" << std::endl;
        }
        else{
            std::cout << "The element at the rear is: " << cqueue[rr] << std::endl;
        }
    }
};
