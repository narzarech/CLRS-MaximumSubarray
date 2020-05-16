#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, temp; cin >> n;
	vector<int>arr;
	for (int i = 0; i < n; ++i) {
		cin >> temp;
		arr.push_back(temp);
	}
	int leftmax = arr[0];
	int rightmax = arr[0];
	for (int i = 1; i < n; ++i) {
		if (rightmax > 0) {
			rightmax += arr[i];
		}
		else rightmax = arr[i];
		cout << rightmax << endl;
		if (leftmax < rightmax) {
			leftmax = rightmax;
		}
	}
	cout << leftmax;
}