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
	vector<int> nums = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
	vector<vector<int>> result = findSubarrays(nums);
	for (auto x : result) {
		cout << "{ ";
		for (auto num : x)
			cout << num << " ";
		cout << "}\n";
	}
}
