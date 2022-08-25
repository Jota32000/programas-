#include <stdio.h>

int main()
{
    int min, max;
    printf("ingrese min: ");
    scanf("%i",&min);
    printf("ingrese max: ");
    scanf("%i",&max);

    int l=(max-min)+1;
    int arr[l];

    for (int k = 0; k < l ; ++k)
    {
        arr[k]=k+min;
        printf("%i,",arr[k]);
    }
    return 0;
};




