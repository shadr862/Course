#include <stdio.h>
#define NUM_PEOPLE 5
#define NUM_LEN 25

int main () {
char names [NUM_PEOPLE][NUM_LEN];
int age [NUM_PEOPLE];
int i;
printf ("\nEnter names and age: \n");
for (i=0;i<NUM_PEOPLE;++i){
    scanf("%s %d", names [i], &age[i]);
    }

for (i=0;i<NUM_PEOPLE;++i){
    printf("\n%s %d\n", names [i], age[i]);
    }
    return 0;
}
