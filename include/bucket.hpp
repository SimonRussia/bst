//  "Copyright [2017] <MGTU IU8-33>"
//  BUCKET.HPP

/*!
    \file
    \brief Заголовочный файл bucket.hpp
    \author Овчаров Анисим
    \date 20 декабря 2017 года

    В данном файле реализован шаблонный алгоритм устойчивой сортировки BUCKET.
*/

#ifndef _BUCKET_HPP_
#define _BUCKET_HPP_

#include <iostream>
#include <algorithm>
#include <chrono>
#include <vector>
#include "message.hpp"


/*!
Функция bucket_sort.
Реализует сортировку массива используя алгоритм сортировки BUCKET.

\param[in] arr[] Массив, который необходимо отсортировать.
\param[in] size Размер передаваемого массива.
\param[in] rad Параметр для получения n-го порядка числа.
*/

template <typename T>
void bucket_sort(T arr[], int size, int rad) {

    // 1) Создаем корзину
    std::vector<T> bucket[size]; /*!< Создаем массив корзин. */

    // 2) Распределяем массив в различные корзины
    // (по n разряду) 256 -> [2]56
    for (int i = 0; i < size; i++) {
        int bi = arr[i] / rad;  /*!< Получаем индекс корзины. */
        bucket[bi].push_back(arr[i]);
    }

    // 3) Отдельно сортируем каждую корзину
    for (int i = 0; i < size; i++)
        std::sort(bucket[i].begin(), bucket[i].end()); /*!< Стардартным способом сортируем каждую корзину. */

    // 4) Сливаем отсортированные части в исходный массив
    int index = 0;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < bucket[i].size(); j++)
            arr[index++] = bucket[i][j]; /*!< Сливаем отсортированные корзины в исходный массив. */
}

#endif  // _BUCKET_HPP_
