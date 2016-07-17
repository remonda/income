#include "../include/simpleStack.h"

int main() {
    SimpleStack simple_stack;
    simple_stack.displayAll();
    simple_stack.push(10);
    simple_stack.push(12);
    simple_stack.push(14);
    simple_stack.getTop();
    simple_stack.pop();
    simple_stack.getTop();

    simple_stack.display();
    simple_stack.displayAll();

    return 0;
}

