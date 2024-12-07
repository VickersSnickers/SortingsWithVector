#include "insert_sort.hpp"

void insert_sort(std::vector<int>& A){
    for (int i = 0; i < A.size(); ++i){
        int j = i;
        int x = A[i];
        while (j > 0 && A[j - 1] > x){
            A[j] = A[j - 1];
            --j;
        }
        A[j] = x;
    }
}