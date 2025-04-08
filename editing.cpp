#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<list>
#define ll long long
#define  MOD 1000000007
#define mapi map<int,int> 
#define mapll map<long long int,long long int >
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vlll vector<vll>
#define vs vector<string> 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fi first
#define se second
#define inf 1e18
#define all(v) v.begin(),v.end()
#define R(n) for(int i=0;i<n;i++)
#define R1(n) for(int i=1;i<=n;i++)
#define  gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
using namespace std;
 struct custom_hash{ size_t operator()(uint64_t x) const{ 
static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
x ^= FIXED_RANDOM; return x ^ (x >> 16);}};


         
void solve() {
string s;
string t;
cin>>s>>t;

int n=s.length();
int m=t.length();

unordered_map<char,int>sp;
unordered_map<char,int>tp;

for(auto c: s){
    sp[c]++;
}
for(auto c: t){
    tp[c]++;
}
int i=0;
int j=0;
while(i<n && j<m){
    if(s[i]==t[j]){
       
        if(sp[s[i]]<tp[t[j]]){
            break;
        }

        if(sp[s[i]]==tp[t[j]]){
            
            tp[t[j]]--;
            j++;
        }
    }
    sp[s[i]]--;
    i++;
}
if(j==m){
    cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
    
}

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}