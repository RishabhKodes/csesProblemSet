#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    cout<< n<<" ";
    while(n>=1){
        
        if(n%2==0 && n!=1){
            n = n/2;
        }else if(n%2!=0 && n!=1){
            n= (n*3) +1;
        }else{
            break;
        }
        
        cout<<n<<" ";
        // n--;
    }

    return 0;
}
