//
// Created by Tr1ple-F on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_LINEAR_SEARCH_H
#define CPP_ALGORITHMS_LINEAR_SEARCH_H

#endif //CPP_ALGORITHMS_LINEAR_SEARCH_H

#include "searching_algo.h"

namespace cpp_algorithms {

    template<typename T>
    class LinearSearch : public SearchingAlgo<T> {
    public:
        size_t Search(std::vector<T> &A, T x) {
            for (size_t i = 0; i < A.size(); ++i) {
                if (A[i] == x) {
                    return i;
                }
            }
            return A.end();
        }
    };

}