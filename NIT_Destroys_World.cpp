#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        if (mp.size()==1 && mp.begin()->first==0){
            cout<<0<<endl;
            continue;
        }
      int left=-1,right=-1;
      for(int i=0;i<n;i++){
          if(arr[i]!=0){
              left=i;
              break;
          }
      }
      for(int i=n-1;i>=0;i--){
          if(arr[i]!=0){
              right=i;
              break;
          }
      }
     bool has_zero=false;
     for(int i=left;i<=right;i++){
        if(arr[i]==0){
            has_zero=true;
            break;
        }
     }
     if(!has_zero) cout<<"1"<<endl;
     else cout<<"2"<<endl;
     
    }
}
