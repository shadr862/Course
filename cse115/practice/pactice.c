#include <stdio.h>
void main (){
int arr [5] = {5,10,15,20,25};
int a,*ptr;
ptr = arr;
a=*ptr++;
printf ("\na=%d",a);
a=*++ptr;
printf ("\na=%d",a);
a=++*ptr;
printf ("\na=%d",a);
a=*ptr--;
printf ("\na=%d",a);
a=*--ptr;
printf ("\na=%d",a);
a=--*ptr;
printf ("\na=%d",a);
}

