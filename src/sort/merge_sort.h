//
// Created by Tr1ple-F on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_MERGE_SORT_H
#define CPP_ALGORITHMS_MERGE_SORT_H

#endif //CPP_ALGORITHMS_MERGE_SORT_H

namespace cpp_algorithms {

    template<typename T>
    class MergeSort : public SortingAlgo<T> {
    public:
        MergeSort() {}

        virtual ~MergeSort() {}

        void Sort(std::vector <T> &vector) override {
            _Sort(vector, 0, vector.size() - 1);
        }

    private:
        void merge_sort(std::vector <T> &arr, size_t low, size_t high) {
            size_t mid;
            if (low < high) {
                mid = (low + high) / 2;
                merge_sort(arr, low, mid);
                merge_sort(arr, mid + 1, high);
                merge(arr, low, high, mid);
            }
        }

        void merge(std::vector <T> arr, size_t beg, size_t end, size_t mid) {
            size_t left = mid - beg + 1;
            size_t right = end - mid;

            std::vector <T> leftArr[] = std::vector<T>(left);
            std::vector <T> rightArr[] = std::vector<T>(right);

            for (int i = 0; i < left; ++i) {
                leftArr[i] = arr[beg + i];
            }

            for (int j = 0; j < right; ++j) {
                rightArr[j] = arr[mid + 1 + j];
            }

            size_t i = 0, j = 0;
            size_t k = beg;
            while (i < left && j < right) {
                if (!(leftArr[i] > rightArr[j])) {
                    arr[k] = leftArr[i];
                    i++;
                } else {
                    arr[k] = leftArr[j];
                    j++;
                }
                k++;
            }
            while (i < left) {
                arr[k] = leftArr[i];
                i++;
                k++;
            }
            while (j < right) {
                arr[k] = rightArr[j];
                j++;
                k++;
            }
        }
    }
}