#include <iostream>
using namespace std;
int main() {
	int so = 6, S = 1;
	for (int i = 2; i <= so; i++)
		S *= i;
	cout << so << "!=" << S;
	return 0;
}
