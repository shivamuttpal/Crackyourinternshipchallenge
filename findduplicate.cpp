#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    map<int,int>m;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
    }
    int x;
    map<int,int>:: iterator it;
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second>1){
            x=it->first;
        }
    }
    return x;
}
int main()
{
    vector<int>v = {1,3,4,2,2};
    int answer = findDuplicate(v);
    cout << answer;

    return 0;
}