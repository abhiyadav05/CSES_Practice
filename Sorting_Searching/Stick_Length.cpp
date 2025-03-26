#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    sort(p.begin(),p.end());
    int midian=p[n/2];
    long long cost=0;
   for(int a : p){
    cost=cost+abs(a-midian);
   }
   cout << cost << endl;
}