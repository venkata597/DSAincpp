#include <iostream>

template<typename t,int size> class queue{
private:    
    t queuearr[size];
    int front=-1,rear=-1;
public:
    void enqueue(t ele){
        if(isFull()){
            std::cout << "Queue Overflow" << std::endl;
        }
        else{
            queuearr[++rear] = ele;
        }
        if(front == -1){
            front = 0;
        }
    }

    t dequeue(){
        if(front == -1){
            std::cout << "Queue is empty" << std::endl;
        }
        else{
            t dqd = queuearr[front++];
            return dqd;
        }
    }

    void peek(){
        if(front == -1){
            std::cout << "Queue is empty" << std::endl;
        }
        else{
            std::cout << "The element at the front: "<<queuearr[front] << std::endl;
        }
    }

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(rear == size){
            return true;
        }
        else{
            return false;
        }
    }
};
