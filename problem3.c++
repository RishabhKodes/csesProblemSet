#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    long long int result=INT_MIN, answer;
    
    cin>>s;
    
    for(long long int i=0;i<s.size();i++){
        long long int check=0;
        for(long long int j=0;j<s.size();j++){
            if(s[i]==s[j]){
                check++;
            }
    }
    
    result = max(result, check);
    // cout<<result<<endl;
    }
    
    cout<<result;
    
    return 0;
}
