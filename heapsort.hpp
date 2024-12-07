#ifndef HEAPSORT_HPP
#define HEAPSORT_HPP

#include <vector>
void MAX_HEAPIFY(std::vector<int>& A, int i, int heapsize);
void BUILD_MAX_HEAP(std::vector<int>& A);
void heapsort(std::vector<int>& A);

#endif