#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,num,*arr, i,*alt;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    alt=  (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    i=num-1;
    j=0;
    while(i>=0 && j<num)
    {
        alt[j]=arr[i];
        i--;
        j++;
    }

    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", alt[i]);
    return 0;
}
