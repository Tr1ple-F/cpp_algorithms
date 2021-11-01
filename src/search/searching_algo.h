//
// Created by Tr1ple-F on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_SEARCHING_ALGO_H
#define CPP_ALGORITHMS_SEARCHING_ALGO_H

#endif //CPP_ALGORITHMS_SEARCHING_ALGO_H

#include <vector>

namespace cpp_algorithms {

    template<typename T>
    class SearchingAlgo {
    public:
        virtual size_t Search(std::vector<T> &, T) = 0;
    };

}