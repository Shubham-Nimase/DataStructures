 Slip20_2: Write a function that reverses a string of characters. The function should use a stack library (cststack.h) of stack of characters using a static implementation of the stack.
same as Slip no : 24_2


#include<stdio.h>
#include"cststack.h"
main()
{
                char str[20],item;
                int i;
                printf("\nenter the string:");
                gets(str);
                init();
                for(i=0;str[i]!='\0';i++)
                {
                                push(str[i]);
                }
                printf("\nstring in reversed order is:");
                while(!isempty())
                {
                                item=pop();
                printf("%c",item);
                }             
                printf("\n");
}


Email This