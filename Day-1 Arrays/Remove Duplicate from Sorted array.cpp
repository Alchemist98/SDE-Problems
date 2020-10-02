#include <iostream>

using namespace std;

int removeDuplicates(int a[], int n){
    int j = 0;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            a[j]=a[i];
            j++;
        }
    }
    a[j] = a[n-1];
    j++;
    return j;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    n = removeDuplicates(a,n);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
