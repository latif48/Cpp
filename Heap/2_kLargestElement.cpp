#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    int arr[] = {7,10,4,3,20,15};
    int n=6, k=3;
    priority_queue<int, vector<int>, greater<int>> minhp;
    for (int i = 0; i < n; i++)
    {
        minhp.push(arr[i]);
        if (minhp.size()>k)
        {
            minhp.pop();
        }        
    }
    while(minhp.size()>0){
        cout<<minhp.top()<<" ";
        minhp.pop();
    }
    cout<<endl;
    return 0;
}