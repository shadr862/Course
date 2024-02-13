#include <stdio.h>
int main()
{
  int A[3][3]={1,2,3,4,5,6,7,8,9},i,j;
  int *ptr;
  ptr=&A;
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          printf("%d ",*(ptr+(i*3)+j*2));
      }
      printf("\n");
  }
}




