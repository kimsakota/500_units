//Code by Nguyen Kim Linh
// MSSV: 20233495
// DAI HOC BACH KHOA HA NOI
#include <iostream>
#include <vector>
using namespace std;

vector<int> findMaxSubarray(vector<int>& nums, int target) {
	int n = nums.size();
	vector<int> v = {};
	for (int i = 0; i < n; i++) {
		int num = 0;
		vector<int> p;
		for (int j = i; j < n; j++) {
			p.push_back(nums[j]);
			num += nums[j];
			if (num == target && p.size() > v.size())
				v = p;
		} 
	}
	return v;
}
int main() {
	vector<int> nums = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
	vector<int> result = findMaxSubarray(nums, 8);
	cout << "{ ";
	for (auto x : result)
		cout << x << " ";
	cout << "}";
}
