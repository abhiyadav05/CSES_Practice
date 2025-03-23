#include<bits/stdc++.h>
using namespace std;

int getAns(int price , multiset<int>& ticket_price){
    auto it=ticket_price.upper_bound(price);
    if(it==ticket_price.begin()){
        return -1;
    }else{
        --it;
        ticket_price.erase(it);
        return *it;
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    vector<int>t(n);
    vector<int>h(m);

    // we will use multiset to find the upper_bound 
    // why not vector because the erase funtion time complexity in vector 
    // is O(n+m) and in multiset O(log(n+m));

    multiset<int>ticket_price;
    for(int i=0;i<n;i++){
        cin >> t[i];
        ticket_price.insert(t[i]);
    }
    for(int i=0;i<m;i++){
        cin >> h[i];
    }
    for(int price : h){
        cout << getAns(price,ticket_price) << endl;
    }

}