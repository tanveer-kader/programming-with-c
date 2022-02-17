#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr, i, n1, n2;
    printf("Enter size of array: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));
    if(ptr == NULL)
    {
        printf("Allocation Error!");
        exit(0);
    }

    printf("Addresses of previously allocate memory: ");
    for(i = 0; i < n1; ++i)
        printf("%u\n", ptr + i);

    printf("\nNew Size of array: ");
    scanf("%d", &n2);

    ptr = (int*) realloc(ptr, n2 * sizeof(int));

    printf("Addresses of newly allocated memory: ");
    for(i = 0; i < n2; ++i)
        printf("%u\n", ptr + i);

    return 0;
}
