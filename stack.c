#include<stdio.h>
#include <stdlib.h>
#define max 50
int stack[max],top=-1;

         void push()
 {
 int elem;
 if(top==max-1)
 {
 printf("Stack over flow!");
 return;
 }
 printf("Enter the elements to be pushed");
 scanf("%d",&elem);
 top++ ;  //move to top
 stack[top]=elem;    //push operation taken place
 printf("%d Pushed to the stack.\n",elem);
 }
 
         void pop()
         {
if (top==-1)
{
printf("The stack isunder flow! No elements in the stack.\n");
return;
}
      printf("Popped element:%d\n",stack[top]);
      top--;
      }   

 
         void display()
         {
int i;
if (top == -1) {
printf("Stack is empty.\n");
return;
}
printf("Stack elements are:\n");
for (i = top; i >= 0; i--) {
printf("%d\n", stack[i]);
}
}
 
 int main()
 {
 int ch;
 while(1)
 {
 printf("\n---Stack Menu---\n");
 printf("1.PUSH\n");
 printf("2.POP\n");
 printf("3.DISPLAY\n");
 printf("4.EXIT\n");
printf("Enter your choice: ");
scanf("%d", &ch);
switch (ch)
 {
 case 1:
 push();
 break;
 case 2:
 pop();
 break;
 case 3:
 display();
 break;
 case 4:
 exit (0);
 default:
 printf("Invalid entry please provide a valid input");
 }
 }
 return 0;
 }
