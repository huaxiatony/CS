#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

int bSearch(const int arr[], int left, int right, int value){
    int mid = (left + right)/2;
    if(value < arr[left] || value >  arr[right])
        return -1;
    if(arr[mid] == value)
        return mid;
    if(arr[mid] < value)
        return bSearch(arr, mid + 1, right, value);
    else if(arr[mid] > value)
        return bSearch(arr, left, mid - 1, value);
    return 0;
}

int bSearch(const int arr[], int size, int value){
    return bSearch(arr, 0, size - 1, value);
}

#endif