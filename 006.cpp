//Code by Nguyen Kim Linh
// MSSV: 20233495
// DAI HOC BACH KHOA HA NOI
#include <iostream>
#include <vector>
using namespace std;

void shiftMatrix(vector<vector<int>> &mat) {
	int n = mat.size();
	for (auto x : mat) {
		for (auto num : x) {
			if (num == 1) num = 25;
			else num--;
			cout << num << '\t';
		}
		cout << endl;
	}
}

int main() {
	vector<vector<int>> mat = {{ 1, 2, 3, 4, 5}, {16, 17, 18, 19, 6}, {15, 24, 25, 20, 7}, {14, 23, 22, 21, 8}, {13, 12, 11, 10, 9}};
	shiftMatrix(mat);
}
