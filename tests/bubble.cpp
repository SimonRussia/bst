#include "catch.hpp"
#include "bubble.hpp"

TEST_CASE("Testing BUBBLE sort") {
	std::cout << "\n********* START BUBBLE CHECK *********" << std::endl;

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

	messageBubble(array, ARRAY_LEN);

	bubble_sort(array, ARRAY_LEN);

	messageBubble(array, ARRAY_LEN);

	// Compare them
	for (int i = 0; i < ARRAY_LEN; i++) {
		REQUIRE(array[i] == v[i]);
	}

	std::cout << "\n********** END BUBBLE CHECK **********\n" << std::endl;
}