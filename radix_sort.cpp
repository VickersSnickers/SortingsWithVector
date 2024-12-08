#include "radix_sort.hpp"

int getMax(std::vector<int> v) {
    int maximum = v[0];
    for (int i = 1; i < v.size(); i++)
        if (v[i] > maximum) maximum = v[i];
    return maximum;
}

void countingSort(std::vector<int>& v, int place) {
    const int max = 10;
    int output[v.size()] = {0};
    int count[max] = {0};

    for (int i = 0; i < v.size(); i++){
        count[(v[i] / place) % 10]++;
    }
    
    for (int i = 1; i < max; i++){
        count[i] += count[i - 1];
    }
    
    for (int i = v.size() - 1; i >= 0; i--) {
        output[count[(v[i] / place) % 10] - 1] = v[i];
        count[(v[i] / place) % 10]--;
    }

    for (int i = 0; i < v.size(); i++){
        v[i] = output[i];
    }
}

void RadixSort(std::vector<int>& v) {
    int max = getMax(v);
    for (int place = 1; max / place > 0; place *= 10){
        countingSort(v, place);
    }
}