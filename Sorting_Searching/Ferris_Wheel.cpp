#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    sort(p.begin(),p.end());
    int ans=0;
   int l=0;
   int r=n-1;
   while(l<=r){
    if((p[l]+p[r])<=x){
         // it only possible when gondola for two person
        l++;
        r--;
        ans++;
    }else{
        // it only possible when gondola for one person
        r--;
        ans++;
    }
   }
    cout << ans << endl;
}