#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    int arr[] = {7,10,4,3,20,15};
    int n=6, k=3;
    priority_queue<int> maxhp;
    for (int i = 0; i < n; i++)
    {
        maxhp.push(arr[i]);
        if (maxhp.size()>k)
        {
            maxhp.pop();
        }        
    }
    cout<<maxhp.top()<<endl;
    
    return 0;
}