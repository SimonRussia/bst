//  GENERAL_MAIN.CPP

#include "bubble.hpp"
#include "bucket.hpp"
#include "counting.hpp"
#include "heap.hpp"
#include "merge.hpp"
#include "radix.hpp"
#include "selection.hpp"

void sortBubble();
void sortBucket();
void sortCounting();
void sortHeap();
void sortMerge();
void sortRadix();
void sortSelection();

int main(int argc, char const *argv[]) {
	sortBubble();
	sortBucket();
	sortCounting();
	sortHeap();
	sortMerge();
	sortRadix();
	sortSelection();
	return 0;
}
