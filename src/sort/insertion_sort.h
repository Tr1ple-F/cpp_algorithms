//
// Created by Finlay on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_INSERTION_SORT_H
#define CPP_ALGORITHMS_INSERTION_SORT_H

#endif //CPP_ALGORITHMS_INSERTION_SORT_H

#include "sorting_algo.h"

namespace cpp_algorithms {

    template<typename T>
    class InsertionSort : public SortingAlgo<T> {
    public:
        InsertionSort() {}

        virtual ~InsertionSort() {}

        std::vector<T> Sort(std::vector<T> &vector) override {
            size_t n = vector.size();
            for (int i = 1; i < n; ++i) {
                T key = vector[i];
                size_t j = i - 1;
                while (j >= 0 && vector[j] > key) {
                    vector[j + 1] = vector[j];
                    j = j - 1;
                }
                vector[j + 1] = key;
            }
            return vector;
        }
    };
}