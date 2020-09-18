#include <iostream>
#include<algorithm>
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
    
    sort(a,a+n);
    
    int ans=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(i>0 && a[i]==a[i-1]+1){
            count++;
        }else{
            count=1;
        }
        ans = max(ans,count);
    }
    cout<<"Longest Consecutive subsequence: "<<ans;
}
