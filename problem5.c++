#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, result=0;
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    cin>>n;
    
    for(int i=1; i<n+1; i++){
        v.push_back(i);
    }
    
    for(int i=0; i<n; i++){
        if(v[i]%2==0){
            v1.push_back(v[i]);
        }else{
            v2.push_back(v[i]);
        }
    }
    
    for(int i=0; i<v2.size(); i++){
        v1.push_back(v2[i]);
        
    }


    if(v1.size() == 2 || v1.size() == 3){
        cout<<"NO SOLUTION";
    }else{
            for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
        
    }        
    }

    return 0;
}
