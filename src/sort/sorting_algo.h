//
// Created by Finlay on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_SORTING_ALGO_H
#define CPP_ALGORITHMS_SORTING_ALGO_H
#endif //CPP_ALGORITHMS_SORTING_ALGO_H

#include "vector"

namespace cpp_algorithms {

    class SortingAlgo {
    public:
        virtual SortingAlgo() = 0;

        virtual ~SortingAlgo() = 0;

        virtual std::vector Sort(std::vector) = 0;
    };

}