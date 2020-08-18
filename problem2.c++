#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> v1;
    vector<int> result;
    
    long long int n,a;
    cin>>n;
    
    for(long long int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    
    for(long long int i=1;i<=n;i++){
        v1.push_back(i);
    }
    
    sort(v.begin(), v.end());
    v.push_back(0);
    
    std::set_difference( v1.begin(), v1.end(), v.begin(), v.end(),
        std::back_inserter( result ) );
    //     if(v.size() == 2 && v[0] ==2){
    //         cout<<1<<endl;
    //     }else if(v.size() == 2 && v[0] ==1){
    //         cout<<2<<endl;
    //     }
    //     else{
    //         for(long long int i=0;i<n+1;i++){

    //         if(v[i+1]-v[i] != 2){
    //         cout<<v[i+1]-1;
    //         }
    //     }
    // }
    
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
    return 0;
}
