#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        a[i]={temp,i+1};
    }
    sort(a.begin(),a.end());
   int i=0;
   int j=n-1;
   while(i<j){
    int temp=a[i].first + a[j].first;
    if(temp==x){
        cout << a[i].second << " " << a[j].second << endl;
        return 0;
    }
    if(temp>x){
        j--;
    }else{
        i++;
    }
   }
   cout <<"IMPOSSIBLE" << endl;
}