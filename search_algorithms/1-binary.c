#include <stdio.h>
#include <stddef.h>

int binary_search(int *array, size_t size, int value) {
    if (array == NULL)
        return -1;

    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        printf("Searching in array: ");
        for (size_t i = low; i <= (size_t)high; i++) {
            printf("%d", array[i]);
            if (i != (size_t)high)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; /* Value not found */
}

int main(void) {
    int array[] = {2, 4, 5, 7, 9, 10, 12, 15, 18, 20};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 10;
    int index = binary_search(array, size, value);

    if (index != -1)
        printf("Value %d found at index %d\n", value, index);
    else
        printf("Value %d not found\n", value);

    return 0;
}
