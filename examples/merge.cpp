//  EXAMPLE_MERGE.CPP

#include "merge.hpp"

void sortMerge() {
    srand(time(NULL));
    const int ARRAY_LEN = 20;
    const int INT_RANGE = 100;
    int *array = new int[ARRAY_LEN];
    
    for (int i = 0; i < ARRAY_LEN; i ++) {
        array[i] = rand() % INT_RANGE;
    }

    message(array, ARRAY_LEN);
    merge_sort(array, 0, ARRAY_LEN - 1);
    message(array, ARRAY_LEN);
}

int main(int argc, char const *argv[]) {
    sortMerge();
    return 0;
}
