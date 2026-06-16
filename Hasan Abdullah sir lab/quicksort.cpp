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