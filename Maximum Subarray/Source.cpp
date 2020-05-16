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
	for (int i = 1; i < n; ++i) {
		int rightmax = numeric_limits<int>::min(), sum = 0;
		for (int j = i; j >= 0; --j) {
			sum += arr[j];
			if (rightmax < sum) rightmax = sum;
		}
		if (leftmax < rightmax) {
			leftmax = rightmax;
		}
	}
	cout << leftmax;
}