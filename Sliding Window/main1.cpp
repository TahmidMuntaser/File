#include<bits/stdc++.h>
using namespace std;


int longestSubarrayWith2Distinct(vector<int>& nums){
    unordered_map<int, int> mp;
    int i = 0, len = 0;

    for (int j = 0; j < nums.size(); j++)
    {
        mp[nums[j]]++;
        while (mp.size() > 2)
        {
            mp[nums[i]]--;
            if (mp[nums[i]] == 0) {
                mp.erase(nums[i]);
            }
            i++;
        }

        if(mp.size() == 2) {
            len = max(len, j - i + 1);
        }
        
    }
    
    
    
    return len; 
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 1, 2, 2};
    cout << longestSubarrayWith2Distinct(nums);
    return 0;
}

