#include<bits/stdc++.h>
#include<queue>
#include <utility>

using namespace std;

int main(){
    int arr[] = {5,6,7,8,9};
    int n=5, k=3, x=7;
    priority_queue<pair<int,int>> maxhp;
    for (int i = 0; i < n; i++)
    {
        maxhp.push(make_pair(abs(arr[i]-x), arr[i]));
        if (maxhp.size()>k)
        {
            maxhp.pop();
        }        
    }
    while(maxhp.size()>0){
        cout<<maxhp.top().second<<" ";
        maxhp.pop();
    }cout<<endl;
    
    return 0;
}