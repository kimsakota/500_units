//Code by Nguyen Kim Linh
// MSSV: 20233495
// DAI HOC BACH KHOA HA NOI
#include <iostream>
#include <vector>
using namespace std;

void sortArray(vector<int>& nums) {
	int n = nums.size();
	int num0 = 0, num1 = 0;
	for (int i = 0; i < n; i++)
		if (nums[i] == 0) num0++;
		else num1++;
	cout << "{ ";
	for (int i = 0; i < num0; i++)
		cout << 0 << " ";
	for (int i = 0; i < num1; i++)
		cout << 1 << " ";
	cout << "}";
}

int main()
{
	vector<int> nums = { 1, 0, 1, 0, 1, 0, 0, 1 };
	sortArray(nums);
}
