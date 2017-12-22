//  EXAMPLE_HEAP.CPP

#include "heap.hpp"

void sortHeap() {
    srand(time(NULL));
    const long int ARRAY_LEN = 100000;
    const int INT_RANGE = 100;
    int *array = new int[ARRAY_LEN];

    for (int i = 0; i < ARRAY_LEN; i ++) {
        array[i] = rand() % INT_RANGE;
    }

    message(array, ARRAY_LEN);
    heap_sort(array, ARRAY_LEN);
    message(array, ARRAY_LEN);
}

int main(int argc, char const *argv[]) {
    sortHeap();
    return 0;
}
