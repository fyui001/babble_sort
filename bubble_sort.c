#include <stdio.h>

void swap(int *r, int *l)
{
    int tmp;
    tmp = *r;
    *r = *l;
    *l = tmp;
}

void bubble_sort(int num_arr[], int arr_size)
{
    int i;
    for (i = 0; i < arr_size - 1; i++) {
        for (int j = arr_size - 1; j >= i+1; j--) {
            if (num_arr[j] > num_arr[j - 1]) {
                swap(&num_arr[j], &num_arr[j - 1]);
            }
        }
    }
}

int main()
{
    int num_arr[10] = {7, 4, 8, 6, 2, 5, 0, 1, 3, 9,};
    int arr_size = sizeof(num_arr) / sizeof(int);
    fprintf(stdout, "Befor: ");
    for (int i = 0; i < arr_size; i++){
        fprintf(stdout, "%d ", num_arr[i]);
    }
    fprintf(stdout, "\n");

    bubble_sort(num_arr, arr_size);

    fprintf(stdout, "After: ");
    for (int i = 0; i < arr_size; i++){
        fprintf(stdout, "%d ", num_arr[i]);
    }
    fprintf(stdout, "\n");
}

