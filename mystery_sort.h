#ifndef MYSTERY_SORT_H
#define MYSTERY_SORT_H

#include <ctime>
#include <algorithm>
#include <iostream>
using namespace std;
int partition(int arr[], int low, int high, clock_t &start, long double &time_limit) {
    int pivot = arr[low];  // Choose the first element as the pivot
    int i = low + 1;
    if (time_limit < ((long double)(clock() - start)) / CLOCKS_PER_SEC) {
        return i - 1;
    }
    for (int j = low + 1; j <= high; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[low], arr[i - 1]);  // Place the pivot in its correct position
    return i - 1;
}

void quickSort(int arr[], int low, int high, clock_t &start, long double &time_limit) {
    if (low < high) {
        int pi = partition(arr, low, high, start, time_limit);
        if (time_limit < ((long double)(clock() - start)) / CLOCKS_PER_SEC) {
            return;
        }
        quickSort(arr, low, pi - 1, start, time_limit);
        quickSort(arr, pi + 1, high, start, time_limit);
    }
}

void merge(int arr[], int left, int mid, int right, clock_t &start, long double &time_limit) {
    if (time_limit < ((long double)(clock() - start)) / CLOCKS_PER_SEC) {
        return;
    }
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = left; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right, clock_t &start_time, long double &time_limit) {
    if (time_limit < ((long double)(clock() - start_time)) / CLOCKS_PER_SEC) {
        return;
    }
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid, start_time, time_limit);
        mergeSort(arr, mid + 1, right, start_time, time_limit);
        if (time_limit < ((long double)(clock() - start_time)) / CLOCKS_PER_SEC) {
        return;
        }
        merge(arr, left, mid, right, start_time, time_limit);
    }
}

long double sort1(int arr[], int size, long double time_limit) {
    clock_t start = clock(); // Record the start time
    for (int i = 0; i < size - 1; i++) {
        if (time_limit < ((long double)(clock() - start)) / CLOCKS_PER_SEC) {
            return time_limit;
        }
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    clock_t end = clock();
    return ((long double)(end - start)) / CLOCKS_PER_SEC;
}


long double sort2(int arr[], int size, long double time_limit) {
    clock_t start = clock();  // Record the start time
    quickSort(arr, 0, size - 1, start, time_limit);
    clock_t end = clock();
    return ((long double)(end - start)) / CLOCKS_PER_SEC;
}
long double sort3(int arr[], int size, long double time_limit) {
    clock_t start = clock();  // Record the start time
    mergeSort(arr, 0, size - 1, start, time_limit);
    clock_t end = clock();
    return ((long double)(end - start)) / CLOCKS_PER_SEC;
}


long double sort4(int arr[], int size, long double time_limit) {
    clock_t start = clock();  // Record the start time

    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        if (time_limit < ((long double)(clock() - start)) / CLOCKS_PER_SEC) {
            return time_limit;
        }
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    clock_t end = clock();
    return ((long double)(end - start)) / CLOCKS_PER_SEC;
}

long double sort5(int arr[], int size, long double time_limit) {
    clock_t start = clock();  // Record the start time

    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        if (time_limit < ((long double)(clock() - start)) / CLOCKS_PER_SEC) {
            return time_limit;
        }
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    clock_t end = clock();
    return ((long double)(end - start)) / CLOCKS_PER_SEC;
}

#endif // MYSTERY_SORT_H
