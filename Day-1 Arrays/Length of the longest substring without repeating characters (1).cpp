#include <bits/stdc++.h>

using namespace std;


int longestSubstring(string str){
    int n = str.size();
    int res=0;
    
    
    vector<bool> vec(42);
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            
            if(vec[str[j]]==true){
                break;
            }else{
                res = max(res,j-i+1);
                vec[str[j]] = true;
            }
        }
        vec[str[i]] = false;
    }
    return res;
}

int main() 
{ 
    string str = "geeksforgeeks"; 
    cout << "The input string is " << str << endl; 
    int len = longestSubstring(str); 
    cout << "The length of the longest non-repeating "
            "character substring is "
         << len; 
    return 0; 
} 
