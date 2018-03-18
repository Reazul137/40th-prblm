#include<stdio.h>
int main()
{
    int x, y,i, temp;

    printf("Input the first integer : ");
    scanf("%d",&x);

    printf("Input the second integer : ");
    scanf("%d",&y);

    if(x > y)
    {
        temp = y;
        x = y;
        x = temp;
    }

    for(i=x+1; i<y; i++)
    {
        if((i%7)==2 || (i%7)==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
