//Code by Nguyen Kim Linh
// MSSV: 20233495
// DAI HOC BACH KHOA HA NOI
#include <iostream>
#include <vector>
using namespace std;
vector<pair<int, int>> findpair(vector<int> const& nums, int target) {
	int n = nums.size();
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
		for (int j = i; j < n - 1; j++)
			if (nums[i] + nums[j + 1] == target)
				v.push_back({ nums[i], nums[j + 1] });
	if (v.size() == 0) v.push_back({ -1, -1 });
	return v;
}

int main()
{
	vector<int> nums = { 8, 7, 2, 5, 3, 1 };
	vector<pair<int, int>> result = findpair(nums, 16);
	for (auto x : result)
		cout << "(" << x.first << ", " << x.second << ")  ";
}
