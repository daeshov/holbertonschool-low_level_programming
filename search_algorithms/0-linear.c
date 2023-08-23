#include <stdio.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value) {
    size_t i;
    
    if (array == NULL)
        return -1;

    for (i = 0; i < size; i++) {
        printf("Value checked array[%lu] = %d\n", i, array[i]);
        if (array[i] == value)
            return (int)i;
    }

    return -1; /* Value not found */
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 5;
    int index = linear_search(array, size, value);

    if (index != -1)
        printf("Value %d found at index %d\n", value, index);
    else
        printf("Value %d not found\n", value);

    return 0;
}
