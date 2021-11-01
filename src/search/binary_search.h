//
// Created by Tr1ple-F on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_BINARY_SEARCH_H
#define CPP_ALGORITHMS_BINARY_SEARCH_H

#endif //CPP_ALGORITHMS_BINARY_SEARCH_H

#include "searching_algo.h"

namespace cpp_algorithms {

    template<typename T>
    class BinarySearch : public SearchingAlgo<T> {
    public:
        size_t Search(std::vector<T> &A, T x) {
            return _bSearch(A, x, 0, A.size() - 1);
        }

    private:
        size_t _bSearch(std::vector<T> &A, T k, size_t l, size_t r) {
            if (r < l) {
                return A.end();
            }
            size_t mid = (l + r) / 2;
            T v = A[mid];
            if (v == k) {
                size_t i = 0;
                while (mid - i - 1 >= 0 && A[mid - i - 1] == k) {
                    i++;
                }
                return mid - i;
            } else if (v < k) {
                return binary_search(A, k, mid + 1, r);
            } else {
                return binary_search(A, k, l, mid - 1);
            }
        }
    };

}