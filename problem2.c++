#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    
    long long int n,a;
    cin>>n;
    
    for(long long int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    
    sort(v.begin(), v.end());
    
    

        if(v.size() == 1 && v[0] ==2){
            cout<<1;
        }else if(v.size() == 1 && v[0] ==1){
            cout<<2;
        }
        else{
            for(long long int i=0;i<n;i++){

                if(v[i+1]-v[i] == 2){
            cout<<v[i+1]-1;
        }
        }
    }
    
    return 0;
}
