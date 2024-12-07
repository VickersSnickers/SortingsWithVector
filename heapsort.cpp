#include "heapsort.hpp"

void MAX_HEAPIFY(std::vector<int>& A, int i, int heapsize){
    int l = 2*i + 1;
    int r = 2*i + 2;
    int largest;
    if (l < heapsize && A[l] > A[i]){
        largest = l;
    } else {
        largest = i;
    }
    if (r < heapsize && A[r] > A[largest]){
        largest = r;
    } 
    if (largest != i){
        std::swap(A[i], A[largest]);
        MAX_HEAPIFY(A, largest, heapsize);
    }
}

void BUILD_MAX_HEAP(std::vector<int>& A){
    for (int i = A.size()/2 - 1; i >= 0; --i){
        MAX_HEAPIFY(A, i, A.size());
    } 
}

void heapsort(std::vector<int>& A){
    BUILD_MAX_HEAP(A);
    int size = A.size();
    for (int i = size; i >= 2; --i){
        std::swap(A[0], A[i-1]);
        --size;
        MAX_HEAPIFY(A, 0, size);
    }
}