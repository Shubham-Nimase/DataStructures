 19. Slip19_2 : Write a function that checks whether a string of characters is palindrome or not. The function should use a stack library (cststack.h) of stack of characters using a static implementation of the stack.


#include<stdio.h>
#include"cststack.h"
#include<string.h>
main()
{
                char str[20],s1[20],item;
                int i,j=0;
                printf("\nenter the string:");
                gets(str);
                strcpy(s1,str);
                init();

                for(i=0;str[i]!='\0';i++)
                {
                                push(str[i]);
                }
                while(!isempty())
                {
                                item=pop();
                                str[j]=item;
                                j++;
                }
                str[j]='\0';

                if(strcmp(s1,str)==0)
                                printf("\ngiven string is palindron");
                else
                                printf("\ngiven string is not palindrom");
}
