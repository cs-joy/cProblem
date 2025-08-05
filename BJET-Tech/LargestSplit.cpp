/*
	@Copyright - zahangir || BJetTech Second Step Selection - Contest
	
	/**********************************************
	Problem:::::2:::::
	<<<Split Array Largest Sum>>>
	
	Given an integer array nums and an integere k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized. Return the minimized largest sum ofd the split.
	**********************************************/

*/



#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& nums, int k, int m) {
	int count = 1;
	int sum = 0;
	for(int num : nums) {
		if(sum + num > m) {
			count++;
			sum = num;
			if(count >k) return false;
		} else {
			sum += num;
		}
	}

	return true;
}

int splitArray(vector<int>& nums, int k) {
	int low =*max_element(nums.begin(), nums.end());
	int high = accumulate(nums.begin(), nums.end(), 0);

	int result = high;

	while(low <= high) {
		int mid = low + (high - low) / 2;
		if(isPossible(nums, k, mid)) {
			result  = mid;
			high = mid -1 ;
		} else {
			low = mid + 1;
		}
	}

	return result;
}


int main() {
	vector<int> nums = {7,2,5,10,8};
	int k = 2;

	cout << "Minimum largest sum: " << splitArray(nums, k) << endl;

	return 0;
}
