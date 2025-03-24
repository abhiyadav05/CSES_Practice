#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>arrive;
    vector<int>all_time;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        arrive.insert(a);
        all_time.push_back(a);
        all_time.push_back(b);
    }
    int cn_cs=0;
    int mx_cs=0;
    sort(all_time.begin(),all_time.end());
    for(int ele : all_time){
        if(arrive.find(ele)!=arrive.end()){
            cn_cs++;
            mx_cs=max(mx_cs,cn_cs);
        }else{
            cn_cs--;
        }
    }
    cout << mx_cs << endl;
}