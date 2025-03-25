#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long>a(n);
    long long ans=INT_MIN;
    long long current=0;
    for(long long i=0;i<n;i++){
        cin >> a[i];
    }
    for(long long i=0;i<n;i++){
        current+=a[i];
        ans=max(ans,current);
        // this is Kadanes Algorithm Approach
        if(current<0){
            current=0;
        }
     
    }
    cout << ans << endl;
}