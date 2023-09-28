#include<stdio.h>
int main()
{
    int top,i,n;
    int arr[5];
    for (top=0;top<=5;top++)
    {
        if(top==5)
        {
        printf("stack is full.%c",10);
        }
        else
        {
            printf("enter the element:");
            scanf("%d",&n);
            arr[top]=n;

        }
    }
     for(top=4;top>=-1;top--)
   {
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("element is %d %c",arr[top],10);
    }
    }
    return 0;
}
