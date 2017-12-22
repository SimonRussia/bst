//  EXAMPLE_BUCKET.CPP

#include "bucket.hpp"

void sortBucket() {
    srand(time(NULL));

    const int ARRAY_LEN = 10;
    const int INT_RANGE = 100;
    // const int RADIX = 10;  // Добавляем десятичную часть для типа double.
    const int RAD = INT_RANGE / 10;  // Для определения индекса корзины.

    int *array = new int[ARRAY_LEN];
    for (int i = 0; i < ARRAY_LEN; i ++) {
        array[i] = rand() % INT_RANGE;
    }

    // double *arrayD = new double[ARRAY_LEN];
    // for (int i = 0; i < ARRAY_LEN; i++) {
    //     arrayD[i] = double(rand() % INT_RANGE) + double(rand() % RADIX) / RADIX;
    // }

    // Sort in standard way
    // std::vector<double> v(array, array + ARRAY_LEN);
    // std::sort(v.begin(), v.end());

    // Sort in our way
    message(array, ARRAY_LEN);
    bucket_sort(array, ARRAY_LEN, RAD);
    message(array, ARRAY_LEN);

    // std::cout << "\n";

    // message(arrayD, ARRAY_LEN);
    // bucket_sort(arrayD, ARRAY_LEN, RAD);
    // message(arrayD, ARRAY_LEN);
}

int main(int argc, char const *argv[]) {
    sortBucket();
    return 0;
}
