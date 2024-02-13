#include <stdio.h>
void main(){
    int sum = 0;
    int n;
    printf("Please enter a number (0 to end)\n");
    scanf("%d",&n);
    while(n!=0){
        if(n<0){
            printf("you entered a negative number! Please enter another (0 to end)\n");
            scanf("%d",&n);
            continue;
        }
        sum = sum + n;
        printf("Please enter a number (0 to end)\n");
        scanf("%d",&n);

    }
    printf("your total sum of positive numbers is %d\n",sum);

}

