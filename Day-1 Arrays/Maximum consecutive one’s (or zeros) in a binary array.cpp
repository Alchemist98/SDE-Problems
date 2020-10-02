/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int getMaxLength(int arr[],int n){
    int count=0;
    int result=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count=0;
        }else{
            count++;
            result = max(result,count);
        }
    }
    return result;
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
    
    cout<<getMaxLength(a,n);
    return 0;
}
