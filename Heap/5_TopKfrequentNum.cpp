#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;

int main(){
    int arr[] = {1,1,1,3,2,2,4};
    int n=7 , k=2;
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    priority_queue<pi, vector<pi>, greater<pi> > minhp;
    for(auto i=m.begin(); i!=m.end(); i++){
        minhp.push(make_pair(i->second, i->first));
        if(minhp.size()>k){
            minhp.pop();
        }
    }
    while(minhp.size()>0){
        cout<<minhp.top().second<<" ";
        minhp.pop();
    }
    cout<<endl;
    return 0;
}