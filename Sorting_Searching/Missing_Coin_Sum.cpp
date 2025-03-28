#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    long long crnSum=0;
    for(int i=0;i<n;i++){
        if(a[i]>crnSum+1){
            cout << crnSum+1 << endl;
            return 0;
        }
        crnSum+=a[i];
    }
    cout << crnSum+1 << endl;
}