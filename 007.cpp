#include <iostream>
#include <vector>
using namespace std;

class Solution_7 {
public:
    vector<vector<int>> findLargestSubarray(vector<int> const& nums) {
        vector<vector<int>> v = { };
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            vector<int> p;
            p.push_back(nums[i]);
            int check = nums[i];
            for (int j = i + 1; j < n; j++) {
                if (check != nums[j]) {
                    p.push_back(nums[j]);
                    check = nums[j];
                }
                else break;
            }
            if (p.size() % 2 != 0) p.pop_back();
            //if (p.size() > v[0].size()) v.clear();
            v.push_back(p);
            p.clear();
        }
        return v;
    }
};


int main()
{
    vector<int> v = { 0, 0, 1, 0, 1, 0, 0 };
    int target = 8;
    Solution_7 check;
    vector<vector<int>> result = check.findLargestSubarray(v);
    for (auto x : result) {
        for (auto v : x)
            cout << v << " ";
        cout << endl;
    }
    return 0;
}
