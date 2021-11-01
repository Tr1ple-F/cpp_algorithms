//
// Created by Tr1ple-F on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_HEAP_SORT_H
#define CPP_ALGORITHMS_HEAP_SORT_H

#endif //CPP_ALGORITHMS_HEAP_SORT_H

/*
 * public void sort(int arr[])
    {
        int n = arr.length;

        // Build heap (rearrange array)
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(arr, n, i);

        // One by one extract an element from heap
        for (int i = n - 1; i > 0; i--) {
            // Move current root to end
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;

            // call max heapify on the reduced heap
            heapify(arr, i, 0);
        }
    }
 *
 *
 * */

namespace cpp_algorithms {

    template<typename T>
    class HeapSort : public SortingAlgo<T> {
    public:
        HeapSort() {}

        virtual ~HeapSort() {}

        void Sort(std::vector <T> &vector) override {
            size_t n = vector.size();

            for (size_t i = n / 2 - 1; i >= 0; i--) {
                heapify(arr, n, i);
            }

            for (size_t i = n - 1; i > 0; i--) {
                size_t temp = arr[0];
                arr[0] = arr[i];
                arr[i] = temp;
                heapify(arr, i, 0);
            }
        }

        void Heapify(std::vector <T> arr, size_t n, size_t i) {
            size_t largest = i;
            size_t l = 2 * i + 1;
            size_t r = 2 * i + 2;

            if (l < n && arr[l] > arr[largest]) {
                largest = l;
            }

            if (r < n && arr[r] > arr[largest]) {
                largest = r;
            }

            if (largest != i) {
                size_t temp = arr[i];
                arr[i] = arr[largest];
                arr[largest] = temp;

                heapify(arr, n, largest);
            }
        }
    };
}