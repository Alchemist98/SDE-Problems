#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    
    int id,jd;
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                id=i;
                jd=j;
                break;
            }
        }
    }
    cout<<"Index are: "<<id<<" "<<jd;
}
