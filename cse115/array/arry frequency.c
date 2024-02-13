#include <stdio.h>
int main()
{
    int arr[100], freq[100];
    int size, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {

            if(arr[i]==arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }

            freq[i] = count;
    }

    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(arr[i] != -1)
        {
            printf("%d :%d\n", arr[i], freq[i]);
        }
    }
    return 0;
}
