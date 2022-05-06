#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int N = nums.size();
    vector<int> res(N, 0);
    int k = 0;
    for (int i = 0; i < N; i++)
    {
        if (nums[i] != 0)
        {
            res[k] = nums[i];
            k++;
        }
    }
    nums = res;
}
int main()
{
    vector<int> v = {0, 1, 0, 3, 12};

    moveZeroes(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}