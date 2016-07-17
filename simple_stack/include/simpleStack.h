#ifndef SIMPLESTACK_H
#define SIMPLESTACK_H

#define STACK_SIZE 10

class SimpleStack {
    private:
        int data[STACK_SIZE];
        int top_idx;
        bool empty;
    public:
        SimpleStack() {
            for (int i = 0; i<STACK_SIZE; ++i) {
                data[i] = 0;
            }
            top_idx = -1;
            empty = true;
        }
        virtual ~SimpleStack() {
        }

        bool isEmpty();
        bool isFull();
        void push(int);
        int pop();
        int getTop();
        void display();
        void displayAll();
};

#endif