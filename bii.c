#include<stdio.h>
#include<conio.h>
int main()
{
    int top,x;
    int arr[5];
    for(top=0;top<=5;top++)
    {
        if(top==5)
        {
            printf("Stack is full");
        }
        else
        {
            printf("enter the element");
            scanf("%d",&x);
            arr[top]=x;
        }
    }
       return 0;
    }
        

        
