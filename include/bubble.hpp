//  BUBBLE_SORT.HPP
#ifndef _BUBBLE_HPP_
#define _BUBBLE_HPP_

#include <iostream>
#include <cstdlib> //  rand, srand
#include <ctime> //  time
#include <fstream>

void bubble_sort(int arr[], int arr_size){
    if(arr_size > 1){
        int size = arr_size;
        for(bool sorted = 0; sorted != size; --size)
            for(int i = 1; i < size; ++i)
                if(arr[i-1] > arr[i]){
                    std::swap(arr[i-1], arr[i]);
                }
    }
}

void message(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

#endif  // _BUBBLE_HPP_
