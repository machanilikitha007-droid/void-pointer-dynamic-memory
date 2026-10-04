#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *ptr;

    ptr = malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *(int *)ptr = 150;

    printf("Value stored using void pointer: %d\n", *(int *)ptr);

    free(ptr);

    return 0;
}
