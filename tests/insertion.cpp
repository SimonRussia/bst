#include "catch.hpp"
#include "insertion.hpp"

TEST_CASE("Testing INSERTION sort") {
	std::cout << "********* START INSERTION CHECK *********\n" << std::endl;

	srand(time(NULL));
    const int ARRAY_LEN = 20;
    const int INT_RANGE = 100;
    int *array = new int[ARRAY_LEN];

    for (int i = 0; i < ARRAY_LEN; i ++) {
        array[i] = rand() % INT_RANGE;
    }

	// Standart sort
	std::vector<int> v(array, array + ARRAY_LEN);
	std::sort(v.begin(), v.end());

	messageInsertsort(array, ARRAY_LEN);

    insertsort(array, ARRAY_LEN);
    
    messageInsertsort(array, ARRAY_LEN);

	// Compare them
	for (int i = 0; i < ARRAY_LEN; i++) {
		REQUIRE(array[i] == v[i]);
	}

	std::cout << "\n********** END INSERTION CHECK **********\n" << std::endl;
}