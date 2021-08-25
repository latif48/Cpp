#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;

int main(){
    int arr[] = {1,1,1,3,2,2,4};
    int n=7;
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    priority_queue<pi> maxhp;
    for(auto i=m.begin(); i!=m.end(); i++){
        maxhp.push(make_pair(i->second, i->first));
    }
    while(maxhp.size()){
        int freq = maxhp.top().first;
        int ele = maxhp.top().second;
        for(int i=0; i<freq; i++){
            cout<< ele << " ";
        }
        maxhp.pop();
    }
    cout<<endl;
    return 0;
}