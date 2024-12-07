#include <vector>

void Shell_Sort(std::vector<int>& arr, std::vector<int>& gaps){
    int size = arr.size(), ptr = gaps.size() - 1;
    for (int gap = gaps[ptr]; gap > 0;) {
        for (int i = gap; i < size; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
        gap = gaps[--ptr];
    }
};
