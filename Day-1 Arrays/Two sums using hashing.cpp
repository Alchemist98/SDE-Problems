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
    
    unordered_map<int, int> mp;
    int diff,id,jd;
    for(int i=0;i<n;i++){
        diff = k - a[i];
        
        if(mp.find(diff)!=mp.end() && mp.find(diff)->second!=i){
            id = mp.find(diff)->second;
            jd = i;
            break;
        }
        mp[a[i]]=i;
    }
    cout<<"Indexes are: "<<id<<" "<<jd;
}

