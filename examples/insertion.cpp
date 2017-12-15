#include "insertion.hpp"

void sortInsertion() {
    srand(time(NULL));
    const int ARRAY_LEN = 20;
    const int INT_RANGE = 100;
    int *array = new int[ARRAY_LEN];

    for (int i = 0; i < ARRAY_LEN; i ++) {
        array[i] = rand() % INT_RANGE;
    }

    messageInsertsort(array, ARRAY_LEN);

    insertsort(array, ARRAY_LEN);
    
    messageInsertsort(array, ARRAY_LEN);
}

int main(int argc, char const *argv[]) {
    sortInsertion();
    return 0;
}