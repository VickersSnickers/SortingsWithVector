#include <vector>

void Merge(std::vector<int>& A, int p, int q, int r){
    int n1 = q - p + 1;
    std::vector<int> L;
    for (int i = 0; i < n1; ++i){
        L.push_back(A[p + i]);
    }
    int n2 = r - q;
    std::vector<int> R;
    for (int i = 0; i < n2; ++i){
        R.push_back(A[q + i + 1]);
    }
    int i = 0, j = 0, k = p, pairs = 0;

    while (i < n1 && j < n2){
        if (L[i] < R[j]) {
            A[k] = L[i];
            ++i;
        } else {
            A[k] = R[j];
            ++j;
        }
        ++k;
    }
    while (i < n1){
        A[k] = L[i];
        ++i;
        ++k;
    }
    while (j < n2){
        A[k] = R[j];
        ++j;
        ++k;
    }
}

void merge_sort(std::vector<int>& A, int p, int r){
    if (p < r) {
        int q = (p + r)/2;
        merge_sort(A, p, q);
        merge_sort(A, q+1, r);
        Merge(A, p, q, r);
    }
}