#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    
    int index;
    unordered_map<int, int>:: iterator it;
    
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second>1){
            index = it->first;
        }
    }
    cout<<"Duplicate element is: "<<index;
}