//
// Created by Tr1ple-F on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_QUICK_SORT_H
#define CPP_ALGORITHMS_QUICK_SORT_H

#endif //CPP_ALGORITHMS_QUICK_SORT_H

namespace cpp_algorithms {

    template<typename T>
    class QuickSort : public SortingAlgo<T> {
    public:
        QuickSort() {}

        virtual ~QuickSort() {}

        void Sort(std::vector <T> &vector) override {
            _qSort(vector, 0, vector.size() - 1);
        }

    private:
        void _qSort(std::vector <T> &A, size_t p, size_t q) {
            int r;
            if (p < q) {
                r = _qPartition(A, p, q);
                _qSort(A, p, r);
                _qSort(A, r + 1, q);
            }
        }

        size_t _qPartition(std::vector <T> &A, size_t p, size_t q) {
            T x = A[p];
            size_t i = p - 1;
            size_t j = r + 1;
            for (j = p + 1; j < q; j++) {
                if (A[j] < x) {
                    i = i + 1;
                    T temp = A[i];
                    A[i] = A[j];
                    A[j] = A[i];
                }
            }
            T temp = A[i];
            A[i] = A[j];
            A[j] = A[i];
            return i;
        }
    }
}