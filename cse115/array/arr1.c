#include<stdio.h>
int main()
{
    int arrA[3],arrB[3],i,flag=1;
    printf("for array A:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&arrA[i]);
    }
    printf("for array B:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&arrB[i]);
    }
    for(i=0;i<3;i++)
    {
        if(arrA[i]!=arrB[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("identical");
    else
        printf("not identical");

    return 0;

}

