#include <iostream>

using namespace std;

int main()
{
    int n,a[n];
    cout<<"Enter the size: ";
    cin>>n;
    
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int low=0;
    int high=n-1;
    while(low<high){
        swap(a[low],a[high]);
        low++;
        high++;
    }
    
    cout<<"Reverersed array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
