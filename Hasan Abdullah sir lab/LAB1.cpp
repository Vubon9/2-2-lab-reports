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

#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {75, 90, 60, 85, 100};
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted scores (Descending): ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={50,100,70,60,90};
    int n=5;
    for(int i=0;i<n-1;i++){
        int minInd=i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[minInd]) {
                minInd=j;
            }
        }
        swap(arr[i],arr[minInd]);
    }
    cout << "Sorted prices (Ascending): ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
