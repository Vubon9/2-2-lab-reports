#include <bits/stdc++.h>
using namespace std;
void mergeSort(int arr[], int left, int right) {
    if(left >= right){
        return;
    }
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    int temp[100];
    int i = left;
    int j = mid + 1;
    int k = 0;
    while(i <= mid && j <= right) {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while(i <= mid)
        temp[k++] = arr[i++];
    while(j <= right)
        temp[k++] = arr[j++];
    for(i = 0; i < k; i++)
        arr[left + i] = temp[i];
}
int main() {
    int arr[] = {3, 1, 4, 2};
    int n = 4;
    mergeSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}