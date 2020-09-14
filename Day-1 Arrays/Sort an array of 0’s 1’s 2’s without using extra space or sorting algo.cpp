#include<bits/stdc++.h>
using namespace std;

int sort_array(int a[], int n){
    int low = 0; 
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        
        switch(a[mid]){
            case 0:
            swap(a[low],a[mid]);
            low++;mid++;
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(a[mid],a[high]);
            high--;
            break;
        }
    }
}

void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Value of n: ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort_array(a,n);
    cout<<"array after sorting: ";
    
    printArray(a,n);
}
