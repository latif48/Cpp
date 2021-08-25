#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    int arr[] = {6,5,3,2,8,10,9};
    int n=7, k=3;
    vector<int> arr1;
    priority_queue<int, vector<int>, greater<int>> minhp;
    for (int i = 0; i < n; i++)
    {
        minhp.push(arr[i]);
        if (minhp.size()>k)
        {
            arr1.push_back(minhp.top());
            minhp.pop();
        }        
    }
    while(!minhp.empty()){
        arr1.push_back(minhp.top());
        minhp.pop();
    }
    
    for(auto i:arr1){
        cout<< i << " "; 
    }cout<<endl;
    return 0;
}