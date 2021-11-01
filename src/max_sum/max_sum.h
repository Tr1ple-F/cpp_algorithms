//
// Created by Tr1ple-F on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_MAX_SUM_H
#define CPP_ALGORITHMS_MAX_SUM_H

#endif //CPP_ALGORITHMS_MAX_SUM_H

#include <vector>

namespace cpp_algorithms {

    template<typename T>
    class MaxSumAlgo {
    public:
        T MaxSum(std::vector<T> &A) {
            T max = T();
            T current = T();
            for (size_t i = 1; i < A.size(); ++i) {
                T temp = current + A[i];
                if (temp > T()) {
                    current = temp;
                }
                if (current > max) {
                    max = current;
                }
            }
            return max;
        }
    };

}