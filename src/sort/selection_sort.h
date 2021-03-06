//
// Created by Tr1ple-F on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_SELECTION_SORT_H
#define CPP_ALGORITHMS_SELECTION_SORT_H

#endif //CPP_ALGORITHMS_SELECTION_SORT_H

namespace cpp_algorithms {

    template<typename T>
    class SelectionSort : public SortingAlgo<T> {
    public:
        SelectionSort() {}

        virtual ~SelectionSort() {}

        void Sort(std::vector <T> &vector) override {
            size_t n = vector.size();
            for (size_t i = 0; i < n - 1; ++i) {
                size_t min = i;
                for (size_t j = i + 1; j < n; ++j) {
                    if (vector[j] < vector[min]) {
                        min = j;
                    }
                }
                if (min != i) {
                    T temp = list[i];
                    list[i] = list[min];
                    list[min] = temp;
                }
            }
        }
    };
}