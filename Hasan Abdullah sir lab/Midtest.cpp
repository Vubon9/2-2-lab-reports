///Insertion Sort 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[5]={9,8,7,6,5};
    for(int i=0;i<5;i++){
        int temp=ar[i];
        int j=i-1;
        while(j>=0 && ar[j]>temp){
            ar[j+1]=ar[j];
            j--;    

}
        ar[j+1]=temp;
    }
    cout<<"Sorted array is: ";
    for(int i=0;i<5;i++){
        cout<<ar[i]<<" ";
    }
}



///Bubbble Sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[5]={9,8,7,6,5};
    int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
                swap(ar[j],ar[j+1]);
            }
        }
    }
    cout<<"Bubble sorted array is: ";
    for(int i=0;i<5;i++){
        cout<<ar[i]<<endl;
    }
    return 0;
}



///Selection Sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={9,8,7,6,5};
    int n=5;
    for(int i=0;i<n-1;i++){
        int min_inex=i;
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[min_inex]){
                min_inex=j;
            }
            swap(ar[i],ar[min_inex]);
        }
    }

    cout<<" Selection sorted array is: ";
    for(int i=0;i<5;i++){
        cout<<ar[i]<<endl;  
    }
    return 0;
}



///Magic Square
#include<bits/stdc++.h>
using namespace std;
int main() {

    int n, k, l;

    cout << "Enter the Odd Number: ";
    cin >> n;
    if(n % 2 == 0) {
        cout << "Please enter an odd number!" << endl;
        return 0;
    }
    int square[50][50];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            square[i][j] = 0;
        }
    }
    int i = 0;
    int j = n / 2;

    square[i][j] = 1;
    for(int key = 2; key <= n * n; key++) {
        if(i > 0) {
            k = i - 1;
        }
        else {
            k = n - 1;
        }
        if(j > 0) {
            l = j - 1;
        }
        else {
            l = n - 1;
        }
        if(square[k][l] >= 1) {
            i = (i + 1) % n;   // Move Down
        }
        else {
            i = k;
            j = l;
        }
        square[i][j] = key;
    }
    cout << "\nMagic Square:\n\n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << setw(4) << square[i][j];
        }
        cout << endl;
    }
    return 0;
}


///Quick Sort 
#include <bits/stdc++.h>
using namespace std;
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    while(true)
    {
        while(i <= high && a[i] <= pivot)
            i++;

        while(a[j] > pivot)
            j--;

        if(i < j)
            swap(a[i], a[j]);
        else
            break;
    }

    swap(a[low], a[j]);
    return j;
}
void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}
int main()
{
    int a[] = {5, 2, 9, 1, 5, 6};
    int n = 6;
    quickSort(a, 0, n - 1);

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << endl;

    return 0;
}
///merge sort
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