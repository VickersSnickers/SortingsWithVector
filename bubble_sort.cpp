#include "bubble_sort.hpp"

void bubble_sort(std::vector<int>& A){
    for (int i = 0; i < A.size() - 1; ++i){
        for (int j = 0; j < A.size() - 1 - i; ++j){
            if (A[j] > A[j + 1]){
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = A[j];
            }
        }
    }
}
