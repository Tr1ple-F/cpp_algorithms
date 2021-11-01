//
// Created by Tr1ple-F on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_BUBBLE_SORT_H
#define CPP_ALGORITHMS_BUBBLE_SORT_H

#endif //CPP_ALGORITHMS_BUBBLE_SORT_H

#include "sorting_algo.h"

namespace cpp_algorithms {

    template<typename T>
    class BubbleSort : public SortingAlgo<T> {
    public:
        BubbleSort() {}

        virtual ~BubbleSort() {}

        void Sort(std::vector<T> &vector) override {
            size_t n = vector.size();
            for (size_t j = 1; j < n; ++j) {
                for (size_t i = 0; i < n - 1; ++i) {
                    if (vector[i] > vector[i + 1]) {
                        T temp = vector[i];
                        vector[i] = vector[i + 1];
                        vector[i + 1] = temp;
                    }
                }
            }
        }
    };
}