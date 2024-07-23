/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

*/

#include<bits/stdc++.h>

class Solution {
    public:
    int majorityElement(std::vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for (int& num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -01;
        }

        return candidate;
    }
}