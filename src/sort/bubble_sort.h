//
// Created by Finlay on 01.11.2021.
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

        std::vector<T> Sort(std::vector<T> &vector) override {
            size_t n = vector.size();
            for (int j = 1; j < n; ++j) {
                for (int i = 0; i < n - 1; ++i) {
                    if (vector[i] > vector[i + 1]) {
                        T temp = vector[i];
                        vector[i] = vector[i + 1];
                        vector[i + 1] = temp;
                    }
                }
            }
            return vector;
        }
    };
}