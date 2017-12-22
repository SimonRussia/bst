//  TEST_HEAP.CPP

#include <catch.hpp>
#include "heap.hpp"

TEST_CASE("Testing HEAP sort") {
    std::cout << "\n********* START HEAP CHECK *********\n" << std::endl;

    srand(time(NULL));
    const int ARRAY_LEN = 20;
    const int INT_RANGE = 100;
    int *array = new int[ARRAY_LEN];

    for (int i = 0; i < ARRAY_LEN; i ++) {
        array[i] = rand() % INT_RANGE;
    }

    // Стандартная сортировка для проверки.
    std::vector<int> v(array, array + ARRAY_LEN);
    std::sort(v.begin(), v.end());

    // Сортировка алгоритмом bubble.
    heap_sort(array, ARRAY_LEN);


    // Сравнение отсортированных массивов.
    // std::cout << "|---> CHECK INT ARRAY --->|" << std::endl;
    for (int i = 0; i < ARRAY_LEN; i++) {
        REQUIRE(array[i] == v[i]);
    }

    std::cout << "\n********** END HEAP CHECK **********\n" << std::endl;
}
