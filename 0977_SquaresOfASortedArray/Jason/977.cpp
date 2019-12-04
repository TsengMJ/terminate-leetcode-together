#include <iostream>
#include <vector>
#include <algorithm>

vector<int> sortedSquares(vector<int>& A) {
    int i = 0;
	int j = A.size() - 1;
	vector<int> result;
	int left = A[i] * A[i];
	int right = A[j] * A[j];
	while (i < j) {
		if (left > right) {
			result.push_back(left);
			i++;
			left = A[i] * A[i];
			continue;
		}

		if (right > left) {
			result.push_back(right);
			j--;
			right = A[j] * A[j];
			continue;
		}

		result.push_back(right);
		result.push_back(left);
		i++;
		j--;
		left = A[i] * A[i];
		right = A[j] * A[j];
	}

	if (i == j) {
		result.push_back(A[i] * A[i]);
	}

	reverse(result.begin(), result.end());

	return result;       
}

int main() {

}