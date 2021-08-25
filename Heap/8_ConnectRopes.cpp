#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n=5;
    int cost=0;
    priority_queue<int, vector<int>, greater<int>> minhp;
    for(int i=0; i<n; i++){
        minhp.push(arr[i]);
    }
    while(minhp.size()>=2){
        int first = minhp.top();
        minhp.pop();
        int second = minhp.top();
        minhp.pop();
        cost += first+second;
        minhp.push(first+second);
    }
    cout<<cost<<endl;
    return 0;
}