#include <cstdlib>
#include <iostream>
#include "../include/simpleStack.h"

bool SimpleStack::isEmpty(){
    return top_idx < 0; 
}

bool SimpleStack::isFull(){
    return ((STACK_SIZE-1) <= top_idx);
}

int SimpleStack::pop(){
    if (!isEmpty()) {
        top_idx--;
        empty = isEmpty();
        std::cout<<"[POP] "<<data[top_idx]<<std::endl;
        return data[top_idx];
    } else {
        std::cerr<<"[POP_ERR]no element in stack"<<std::endl;
        std::exit(-1);
    }
}

void SimpleStack::push(int e) {
    if (!isFull()) {
        top_idx++;
        data[top_idx] = e;
    } else {
        std::cerr<<"[PUSH_ERR]no space in stack"<<std::endl;
        std::exit(-1);
    }
}

int SimpleStack::getTop(){
    if (!isEmpty()){
        std::cout<<"[TOP] "<<data[top_idx]<<std::endl;
        return data[top_idx];
    } else {
        std::cerr<<"[GETTOP_ERR]top frame is empty"<<std::endl;
        std::exit(-1);
    }
}

void SimpleStack::displayAll() {
    std::cout<<"dispaly all frame:"<<std::endl;
    for(int i=0; i<STACK_SIZE; ++i) {
        std::cout<<data[i]<<" ";
    }
    std::cout<<std::endl;
}

void SimpleStack::display() {
    if (isEmpty()) {
        std::cout<<"stack is empty";
    } else {
    std::cout<<"dispaly stack frame"<<std::endl;
    for(int i=0; i<=top_idx; ++i) {
        std::cout<<data[i]<<" ";
    }
    }
    std::cout<<std::endl;
}
