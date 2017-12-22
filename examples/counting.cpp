//  EXAMPLE_COUNTING.CPP

#include "counting.hpp"

void sortCounting() {
    srand(time(NULL));
    const int ARRAY_LEN = 10;
    const int INT_RANGE = 100;
    int *array = new int[ARRAY_LEN];

    for (int i = 0; i < ARRAY_LEN; i ++) {
        array[i] = rand() % INT_RANGE;
    }

    message(array, ARRAY_LEN);
    counting_sort(array, ARRAY_LEN, INT_RANGE);
    message(array, ARRAY_LEN);
}

int main(int argc, char const *argv[]) {
    sortCounting();
    return 0;
}
