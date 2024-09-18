//Code by Nguyen Kim Linh
// MSSV: 20233495
// DAI HOC BACH KHOA HA NOI
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> findSubarrays(vector<int> const& nums) {
	int n = nums.size();
	vector<vector<int>> v;
	for (int i = 0; i < n; i++) {
		int num = 0;
		vector<int> p;
		for (int j = i; j < n; j++) {
			p.push_back(nums[j]);
			num += nums[j];
			if (num == 0) v.push_back(p);
		}
	}
	return v;
}

int main()
{
	vector<int> nums = { 4, -7, 1, -2, -1 };
	vector<vector<int>> result = findSubarrays(nums);
	if (result.empty()) {
		cout << "false";
		return 0;
	}
	for (auto x : result) {
		cout << "{ ";
		for (auto num : x)
			cout << num << " ";
		cout << "}\n";
	}
}
