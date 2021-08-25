#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
typedef pair<int, pi> pii;

int main(){
    int arr[4][2] = {{1, 3}, {-2, 2}, {5, 8}, {0, 1}};
    int n=4, k=2;
    priority_queue<pii> maxhp;
    for(int i=0; i<n; i++){
        maxhp.push(make_pair((arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1]), make_pair(arr[i][0], arr[i][1])));
        if(maxhp.size()>k){
            maxhp.pop();
        }
    }
    while(maxhp.size()){
        pi p=maxhp.top().second;
        cout<<p.first<<" "<<p.second<<endl;
        maxhp.pop();
    }
    return 0;
}

