/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */

#include <stdio.h>
#include "include/my_stack.h"

#define Capa 5
int myStack[Capa];
int top = 0;

void stack_push(int x){
	myStack[top] = x;
	top++;
}


int stack_pop(){
	int x;
	x = myStack[--top];
	return x;
}

// The capacity of the stack
int stack_capacity(){
	return Capa;
}

// Current available size of the stack
int stack_size(){
	return top;
}


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty(){
	if(top == 0)
		return 1;
	else
		return 0;
}

int stack_is_full(){
	if(top == Capa)
		return 1;
	else
		return 0;
}


