#include <stdio.h>
#include "stack6.1.h"

int stack [MAX_SIZE];     
int top = 0;     

int getTop()
{
	return top;
}

int isempty () {

   if (top == 0)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if (top == MAX_SIZE)
      return 1;
   else
      return 0;
}

char peek () {
  if (top != 0)
   return stack[top--];
  else 
  	printf ("Stack is empty\n");
}

int isNull()
{
	if(stack == NULL)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

char pop () {
   char data;

   if (isempty() != 1) {
      data = stack [top--];
      return data;
   } 
   else
      printf("Error: Stack is empty\n");
}

void push (char data) {

   if (isfull() == 0)
   	  stack[top++] = data;   
    else 
      printf("Error: Stack is full\n");
}

void clear () {
	top = 0;
}
