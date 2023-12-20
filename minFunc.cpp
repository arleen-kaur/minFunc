#include "minFunc.h"
const int * min(const int arr[], int arrSize) {
    if (arrSize == 0 || arrSize == 0) {
        return nullptr;
    } else if (arrSize == 1) {
        return arr;
    } else {
        const int *t = min(arr, arrSize - 1);
        if (arr[arrSize - 1] < *t) {
            return &arr[arrSize - 1];
        } else {
            return t;
        }
    }
}