#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    
    long long m=n/2;
    long long a=0;
    long long b=0;
    long long remainder=m%3;
    if(remainder!=0) a=m/3+1;
    else a=m/3;
    b=m/2;
    // cout<<a<<" "<<b<<endl;
    if( n%2!=0 || n<4){
        cout<<"-1"<<endl;
    }

    else {
        cout<<min(a,b)<<" "<<max(a,b)<<endl;
    }
    
}
return 0;
}