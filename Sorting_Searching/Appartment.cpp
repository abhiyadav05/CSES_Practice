#include<bits/stdc++.h>
using namespace std;

void solve(){

    // Appartment

    int n,m,k;
    cin >> n >> m >> k;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0;
    int j=0;
    int ans=0;
    while (i<n && j<m)
    {
       if((a[i]-k)<=b[j] && (a[i]+k)>=b[j]){
        ans++;
        i++;
        j++;
       }
       if((a[i]-k)>b[j]){
        j++;
       }
       if((a[i]+k)<b[j]){
        i++;
       }
    }
    cout << ans << endl;
    
}

int main(){
    solve();
}