#!/bin/bash
g++ -std=c++11 -g -Wall -Wextra ./*.cpp ../src/simpleStack.cpp -I../include -lgtest -lpthread -o simple_stack_ut
