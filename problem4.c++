#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    long long int n,a, result=0;
    cin>>n;
    
    for(long long int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            while(v[i]>v[i+1]){
                v[i+1]++;
                result++;
            }
        }
        // else{
        //     result+=0;
        // }
        // cout<<v[i+1]<<endl;
    }
    
    cout<<result;
    
    
    return 0;
}
