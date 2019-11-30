#include <vector>
#include <algorithm>
#include <iostream>


using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		double median = 0;
		for (int i = 0; i < nums2.size(); i++)
		{
			nums1.push_back(nums2[i]);
		}
		sort(nums1.begin(), nums1.end());
		if (nums1.size() % 2 != 0)
		{
			double medium = nums1[nums1.size() / 2];
			return medium;
		}
		else
		{
			double medium = (nums1[nums1.size() / 2 - 1] + nums1[nums1.size() / 2]) / 2.0;
			return medium;
		}

	}
};

int main()
{

	Solution test;
	vector<int> nums1 = {1, 3};
	vector<int> nums2 = {2, 4};
	double medium = test.findMedianSortedArrays(nums1, nums2);
	cout << medium << endl;
	
	system("pause");
	return 0;
}