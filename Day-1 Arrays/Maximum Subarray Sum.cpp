#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the size of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int sum=0;
    int maximum = a[0];
    
    for(int i=0;i<n;i++){
        sum = max(0,sum+a[i]);
        maximum = max(sum,maximum);
    }
    
    cout<<"Maximum sum is: "<<maximum;
}