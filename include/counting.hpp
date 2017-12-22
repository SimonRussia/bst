//  "Copyright [2017] <MGTU IU8-33>"
//  COUNTING.HPP

#ifndef _COUNTING_HPP_
#define _COUNTING_HPP_

#include <iostream>
#include <chrono>
#include "message.hpp"

template <typename T>
void counting_sort(T arr[], int size, int rad) {
    // Создаем временный пустой массив и заполняем его 0.
    T temp[size];
    memset(temp, 0, sizeof(temp));

    // Создаем массив для подсчета количества элементов
    // заполняем его 0.
    int count[rad], i;
    memset(count, 0, sizeof(count));

    // Подсчитываем количество повторений каждого
    // символа в сортируемом массиве
    // и вносим в массив count.
    for (i = 0; i < size; i++)
        ++count[arr[i]];

    // Проходим по массиву count и складываем значения
    // текущей ячейки со значением в предыдущей.
    // Для получения актуального положения элемента.
    for (i = 1; i < rad; i++)
        count[i] += count[i-1];

    // Заполняе временный массив temp сопоставляя
    // значения сортируемого массива с индексом
    // в массиве count.
    for (i = 0; i < size; i++) {
        temp[ count[ arr[i] ] - 1 ] = arr[i];
        --count[arr[i]];
    }

    // Копируем значения из массива temp
    // в сортируемый массив.
    for (i = 0; i < size; ++i)
        arr[i] = temp[i];
}

#endif  // _COUNTING_HPP_
