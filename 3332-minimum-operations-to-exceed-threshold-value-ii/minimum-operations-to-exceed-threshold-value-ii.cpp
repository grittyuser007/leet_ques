#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> minHeap(nums.begin(), nums.end());
        int count = 0;

        while (minHeap.size() > 1) {
            long long smallest = minHeap.top(); minHeap.pop();
            long long secondSmallest = minHeap.top(); minHeap.pop();
            
            if (smallest >= k && secondSmallest >= k) {
                return count;
            }

            count++;
            long long newNum = smallest * 2 + secondSmallest;
            minHeap.push(newNum);
        }

        return count;
    }
};
