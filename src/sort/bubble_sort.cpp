//
// Created by Finlay on 01.11.2021.
//

#include "sorting_algo.h"
#include "../utils/comparable.h"

namespace cpp_algorithms {

    template<typename T>
    class BubbleSort : public SortingAlgo {
    public:
        BubbleSort() = default;

        ~BubbleSort() override = default;

        std::vector<Comparable<T>> Sort(std::vector<Comparable<T>> vector) override {
            return 0;
        }
    };

}