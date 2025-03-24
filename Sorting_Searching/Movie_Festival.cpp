#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>>mov_time(n);
    for(int i=0;i<n;i++){
        cin >> mov_time[i].first >> mov_time[i].second;
    }
    sort(mov_time.begin(),mov_time.end());
    int end_time=0;
    int max_mov=0;
    for(auto ele : mov_time){
        if(ele.first>=end_time){
            max_mov++;
            end_time=ele.second;
        }else{
            end_time=min(end_time,ele.second);
        }
    }
    cout << max_mov << endl;
}