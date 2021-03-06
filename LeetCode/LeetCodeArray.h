#pragma once
#ifndef LeetCodeArray_H
#define LeetCodeArray_H
#include <stdint.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <algorithm> 
#include <functional> 
#include <bitset> 
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stdexcept>
#include <string>
#include <unordered_map> 
#include <unordered_set> 
#include <vector> 
#include <stack> 
#include "leetcode.h"
using namespace std;

/// <summary>
/// The class is to implement array related algorithm  
/// </summary>
class LeetCodeArray
{
public:
#pragma region Array

    /// <summary>
    /// Leet code #364. Nested List Weight Sum II   
    /// </summary>
    int countDepth(vector<NestedInteger>& nestedList);

    /// <summary>
    /// Leet code #364. Nested List Weight Sum II   
    /// </summary>
    int depthSumInverse(vector<NestedInteger>& nestedList, int depth);

    /// <summary>
    /// Leet code #364. Nested List Weight Sum II  
    /// 
    /// Given a nested list of integers, return the sum of all integers in the list weighted by their depth.
    /// Each element is either an integer, or a list -- whose elements may also be integers or other lists.
    /// Different from the previous question where weight is increasing from root to leaf, now the weight is 
    /// defined from bottom up. i.e., the leaf level integers have weight 1, and the root level integers have the largest weight.
    /// Example 1:
    /// Given the list [[1,1],2,[1,1]], return 10. (four 1's at depth 2, one 2 at depth 1)
    /// Example 2:
    /// Given the list [1,[4,[6]]], return 27. (one 1 at depth 1, one 4 at depth 2, and one 6 at depth 3; 1 + 4*2 + 6*3 = 27) 
    /// </summary>
    int depthSumInverse(vector<NestedInteger>& nestedList);

    /// <summary>
    /// Leet code #1198. Find Smallest Common Element in All Rows
    /// 
    /// Given a matrix mat where every row is sorted in increasing order, return 
    /// the smallest common element in all rows.
    ///
    /// If there is no common element, return -1.
    ///
    /// Example 1:
    ///
    /// Input: mat = [[1,2,3,4,5],[2,4,5,8,10],[3,5,7,9,11],[1,3,5,7,9]]
    /// Output: 5
    /// 
    ///
    /// Constraints:
    ///
    /// 1. 1 <= mat.length, mat[i].length <= 500
    /// 2. 1 <= mat[i][j] <= 10^4
    /// 3. mat[i] is sorted in increasing order.
    /// </summary>
    int smallestCommonElement(vector<vector<int>>& mat);

    /// <summary>
    /// Leet code #1208. Get Equal Substrings Within Budget
    ///
    /// You are given two strings s and t of the same length. You want to change
    /// s to t. Changing the i-th character of s to i-th character of t costs 
    /// |s[i] - t[i]| that is, the absolute difference between the ASCII values 
    /// of the characters.
    ///
    /// You are also given an integer maxCost.
    ///
    /// Return the maximum length of a substring of s that can be changed to be 
    /// the same as the corresponding substring of twith a cost less than or equal 
    /// to maxCost.
    ///
    /// If there is no substring from s that can be changed to its corresponding 
    /// substring from t, return 0.
    ///
    /// Example 1:
    ///
    /// Input: s = "abcd", t = "bcdf", maxCost = 3
    /// Output: 3
    /// Explanation: "abc" of s can change to "bcd". That costs 3, so the maximum 
    /// length is 3.
    ///
    /// Example 2:
    /// 
    /// Input: s = "abcd", t = "cdef", maxCost = 3
    /// Output: 1
    /// Explanation: Each character in s costs 2 to change to charactor in t, so 
    /// the maximum length is 1.
    ///
    /// Example 3:
    ///
    /// Input: s = "abcd", t = "acde", maxCost = 0
    /// Output: 1
    /// Explanation: You can't make any change, so the maximum length is 1.
    /// 
    /// Constraints:
    /// 1. 1 <= s.length, t.length <= 10^5
    /// 2. 0 <= maxCost <= 10^6
    /// 3. s and t only contain lower case English letters.
    /// </summary>
    int equalSubstring(string s, string t, int maxCost);

    /// <summary>
    /// Leet code #1221. Split a String in Balanced Strings
    /// 
    /// Balanced strings are those who have equal quantity of 'L' and 'R' 
    /// characters.
    ///
    /// Given a balanced string s split it in the maximum amount of balanced 
    /// strings.
    ///
    /// Return the maximum amount of splitted balanced strings.
    ///
    /// Example 1:
    ///
    /// Input: s = "RLRRLLRLRL"
    /// Output: 4
    /// Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring 
    /// contains same number of 'L' and 'R'.
    ///
    /// Example 2:
    ///
    /// Input: s = "RLLLLRRRLR"
    /// Output: 3
    /// Explanation: s can be split into "RL", "LLLRRR", "LR", each substring 
    /// contains same number of 'L' and 'R'.
    ///
    /// Example 3:
    ///
    /// Input: s = "LLLLRRRR"
    /// Output: 1
    /// Explanation: s can be split into "LLLLRRRR".
    ///  
    /// Constraints:
    /// 
    /// 1. 1 <= s.length <= 1000
    /// 2. s[i] = 'L' or 'R'
    /// </summary>
    int balancedStringSplit(string s);

    /// <summary>
    /// Leet code #1222. Queens That Can Attack the King
    /// 
    /// On an 8x8 chessboard, there can be multiple Black Queens and one 
    /// White King.
    ///
    /// Given an array of integer coordinates queens that represents the 
    /// positions of the Black Queens, and a pair of coordinates king that 
    /// represent the position of the White King, return the coordinates 
    /// of all the queens (in any order) that can attack the King.
    ///
    /// 
    /// Example 1:
    /// 
    /// Input: queens = [[0,1],[1,0],[4,0],[0,4],[3,3],[2,4]], king = [0,0]
    /// Output: [[0,1],[1,0],[3,3]]
    /// Explanation:  
    /// The queen at [0,1] can attack the king cause they're in the same row. 
    /// The queen at [1,0] can attack the king cause they're in the same column. 
    /// The queen at [3,3] can attack the king cause they're in the same diagnal.
    /// The queen at [0,4] can't attack the king cause it's blocked by the 
    /// queen at [0,1]. 
    /// The queen at [4,0] can't attack the king cause it's blocked by the 
    /// queen at [1,0]. 
    /// The queen at [2,4] can't attack the king cause it's not in the same 
    /// row/column/diagnal as the king.
    ///
    /// Example 2:
    /// Input: queens = [[0,0],[1,1],[2,2],[3,4],[3,5],[4,4],[4,5]], king = [3,3]
    /// Output: [[2,2],[3,4],[4,4]]
    ///
    /// Example 3:
    /// Input: queens = 
    /// [[5,6],[7,7],[2,1],[0,7],[1,6],[5,1],[3,7],[0,3],[4,0],[1,2],[6,3],[5,0],
    /// [0,4],[2,2],[1,1],[6,4],[5,4],[0,0],[2,6],[4,5],[5,2],[1,4],[7,5],[2,3],
    /// [0,5],[4,2],[1,0],[2,7],[0,1],[4,6],[6,1],[0,6],[4,3],[1,7]], king = [3,4]
    /// Output: [[2,3],[1,4],[1,6],[3,7],[4,3],[5,4],[4,5]]
    /// 
    /// Constraints:
    /// 1. 1 <= queens.length <= 63
    /// 2. queens[0].length == 2
    /// 3. 0 <= queens[i][j] < 8
    /// 4. king.length == 2
    /// 5. 0 <= king[0], king[1] < 8
    /// 6. At most one piece is allowed in a cell.
    /// </summary>
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king);

    /// <summary>
    /// Leet code #1228. Missing Number In Arithmetic Progression
    /// 
    /// In some array arr, the values were in arithmetic progression: the 
    /// values arr[i+1] - arr[i] are all equal for every 
    /// 0 <= i < arr.length - 1.
    ///
    /// Then, a value from arr was removed that was not the first or last 
    /// value in the array.
    ///
    /// Return the removed value.
    ///
    /// Example 1:
    ///
    /// Input: arr = [5,7,11,13]
    /// Output: 9
    /// Explanation: The previous array was [5,7,9,11,13].
    ///
    /// Example 2:
    /// Input: arr = [15,13,12]
    /// Output: 14
    /// Explanation: The previous array was [15,14,13,12].
    ///
    /// Constraints:
    /// 1. 3 <= arr.length <= 1000
    /// 2. 0 <= arr[i] <= 10^5
    /// </summary>
    int missingNumber(vector<int>& arr);

    /// <summary>
    /// Leet code #53. Maximum Subarray
    /// 
    /// Given an integer array nums, find the contiguous subarray (containing 
    /// at least one number) which has the largest sum and return its sum.
    ///
    /// Example:
    ///
    /// Input: [-2,1,-3,4,-1,2,1,-5,4],
    /// Output: 6
    /// Explanation: [4,-1,2,1] has the largest sum = 6.
    ///
    /// Follow up:
    /// If you have figured out the O(n) solution, try coding another solution 
    /// using the divide and conquer approach, which is more subtle.
    /// </summary>
    int maxSubArray(vector<int>& nums);

    /// <summary>
    /// Leet code #134. Gas Station
    /// 
    /// There are N gas stations along a circular route, where the amount of gas 
    /// at station i is gas[i].
    ///
    /// You have a car with an unlimited gas tank and it costs cost[i] of gas to 
    /// travel from station i to its next station (i+1). You begin the journey 
    /// with an empty tank at one of the gas stations.
    ///
    /// Return the starting gas station's index if you can travel around the 
    /// circuit once in the clockwise direction, otherwise return -1.
    ///
    /// Note:
    ///
    /// If there exists a solution, it is guaranteed to be unique.
    /// Both input arrays are non-empty and have the same length.
    /// Each element in the input arrays is a non-negative integer.
    ///
    /// Example 1:
    /// Input: 
    /// gas  = [1,2,3,4,5]
    /// cost = [3,4,5,1,2]
    /// Output: 3
    ///
    /// Explanation:
    /// 1. Start at station 3 (index 3) and fill up with 4 unit of gas. 
    ///    Your tank = 0 + 4 = 4
    /// 2. Travel to station 4. Your tank = 4 - 1 + 5 = 8
    /// 3. Travel to station 0. Your tank = 8 - 2 + 1 = 7
    /// 4. Travel to station 1. Your tank = 7 - 3 + 2 = 6
    /// 5. Travel to station 2. Your tank = 6 - 4 + 3 = 5
    /// 6. Travel to station 3. The cost is 5. Your gas is just enough to travel 
    ///    back to station 3.
    /// 7. Therefore, return 3 as the starting index.
    ///
    /// Example 2:
    /// Input: 
    /// gas  = [2,3,4]
    /// cost = [3,4,3]
    /// Output: -1
    /// 
    /// Explanation:
    /// 1. You can't start at station 0 or 1, as there is not enough gas to travel 
    ///    to the next station.
    /// 2. Let's start at station 2 and fill up with 4 unit of gas. Your 
    ///    tank = 0 + 4 = 4
    /// 3. Travel to station 0. Your tank = 4 - 3 + 2 = 3
    /// 4. Travel to station 1. Your tank = 3 - 3 + 3 = 3
    /// 5. You cannot travel back to station 2, as it requires 4 unit of gas but 
    ///    you only have 3.
    /// 6. Therefore, you can't travel around the circuit once no matter where 
    ///    you start.
    /// </summary>
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost);

    /// <summary>
    /// Leet code #152. Maximum Product Subarray
    /// 
    /// Given an integer array nums, find the contiguous subarray within an array 
    /// (containing at least one number) which has the largest product.
    ///
    /// Example 1:
    ///
    /// Input: [2,3,-2,4]
    /// Output: 6
    /// Explanation: [2,3] has the largest product 6.
    ///
    /// Example 2:
    ///
    /// Input: [-2,0,-1]
    /// Output: 0
    /// Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
    /// </summary>
    int maxProduct(vector<int>& nums);

    /// <summary>
    /// Leet code #325. Maximum Size Subarray Sum Equals k
    /// 
    /// Given an array nums and a target value k, find the maximum length of a subarray that sums to k. 
    /// If there isn't one, return 0 instead. 
    /// Note:
    /// The sum of the entire nums array is guaranteed to fit within the 32-bit signed integer range. 
    ///
    /// Example 1:
    /// Given nums = [1, -1, 5, -2, 3], k = 3,
    /// return 4. (because the subarray [1, -1, 5, -2] sums to 3 and is the longest) 
    ///
    /// Example 2:
    /// Given nums = [-2, -1, 2, 1], k = 1,
    /// return 2. (because the subarray [-1, 2] sums to 1 and is the longest) 
    ///
    /// Follow Up:
    /// Can you do it in O(n) time? 
    /// </summary>
    int maxSubArrayLen(vector<int>& nums, int k);

    /// <summary>
    /// Leet code #523. Continuous Subarray Sum   
    /// 
    /// Given a list of non-negative numbers and a target integer k, write a 
    /// function to check if the array has a continuous subarray of size at 
    /// least 2 that sums up to the multiple of k, that is, sums up to n*k 
    /// where n is also an integer.
    ///
    /// Example 1:
    /// Input: [23, 2, 4, 6, 7],  k=6
    /// Output: True
    /// Explanation: Because [2, 4] is a continuous subarray of size 2 and 
    /// sums up to 6.
    /// Example 2:
    /// Input: [23, 2, 6, 4, 7],  k=42
    /// Output: True
    /// Explanation: Because [23, 2, 6, 4, 7] is an continuous subarray of 
    /// size 5 and sums up to 42.
    /// Note:
    /// The length of the array won't exceed 10,000.
    /// You may assume the sum of all the numbers is in the range of a 
    /// signed 32-bit integer.
    /// </summary>
    bool checkSubarraySum(vector<int>& nums, int k);

    /// <summary>
    /// Leet code #525. Contiguous Array    
    /// 
    /// Given a binary array, find the maximum length of a contiguous subarray 
    /// with equal number of 0 and 1. 
    /// Example 1:
    /// Input: [0,1]
    /// Output: 2
    /// Explanation: [0, 1] is the longest contiguous subarray with equal 
    /// number of 0 and 1.
    ///
    /// Example 2:
    /// Input: [0,1,0]
    /// Output: 2
    /// Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with 
    /// equal number of 0 and 1.
    /// Note: The length of the given binary array will not exceed 50,000. 
    /// </summary>
    int findMaxLength(vector<int>& nums);

    /// <summary>
    /// Leet code #560. Subarray Sum Equals K
    /// Given an array of integers and an integer k, you need to find the 
    /// total number of continuous subarrays whose sum equals to k.
    /// Example 1:
    /// Input:nums = [1,1,1], k = 2 
    /// Output: 2
    ///
    /// Note:
    /// The length of the array is in range [1, 20,000].
    /// The range of numbers in the array is [-1000, 1000] and the range of 
    /// the integer k is [-1e7, 1e7].
    /// </summary>
    int subarraySum(vector<int>& nums, int k);

    /// <summary>
    /// Leet code #930. Binary Subarrays With Sum
    /// 
    /// In an array A of 0s and 1s, how many non-empty subarrays have sum S?
    /// 
    /// Example 1:
    /// Input: A = [1,0,1,0,1], S = 2
    /// Output: 4
    /// Explanation: 
    /// The 4 subarrays are bolded below:
    /// [1,0,1,0,1]
    /// [1,0,1,0,1]
    /// [1,0,1,0,1]
    /// [1,0,1,0,1]
    /// 
    /// Note:
    /// 
    /// 1. A.length <= 30000
    /// 2. 0 <= S <= A.length
    /// 3. A[i] is either 0 or 1.
    /// </summary>
    int numSubarraysWithSum(vector<int>& A, int S);

    /// <summary>
    /// Leet code #974. Subarray Sums Divisible by K
    /// 
    /// Given an array A of integers, return the number of (contiguous, non-empty) 
    /// subarrays that have a sum divisible by K.
    ///
    /// Example 1:
    ///
    /// Input: A = [4,5,0,-2,-3,1], K = 5
    /// Output: 7
    /// Explanation: There are 7 subarrays with a sum divisible by K = 5:
    /// [4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], 
    /// [-2, -3]
    /// 
    /// Note:
    ///
    /// 1. 1 <= A.length <= 30000
    /// 2. -10000 <= A[i] <= 10000
    /// 3. 2 <= K <= 10000
    /// </summary>
    int subarraysDivByK(vector<int>& A, int K);

    /// <summary>
    /// Leet code #1243. Array Transformation
    ///  
    /// Given an initial array arr, every day you produce a new array using the 
    /// array of the previous day.
    ///
    /// On the i-th day, you do the following operations on the array of day 
    /// i-1 to produce the array of day i:
    ///
    /// If an element is smaller than both its left neighbor and its right 
    /// neighbor, then this element is incremented.
    /// If an element is bigger than both its left neighbor and its right 
    /// neighbor, then this element is decremented.
    /// The first and last elements never change.
    /// After some days, the array does not change. Return that final array.
    /// 
    /// Example 1:
    /// Input: arr = [6,2,3,4]
    /// Output: [6,3,3,4]
    /// Explanation: 
    /// On the first day, the array is changed from [6,2,3,4] to [6,3,3,4].
    /// No more operations can be done to this array.
    ///
    /// Example 2:
    /// Input: arr = [1,6,3,4,3,5]
    /// Output: [1,4,4,4,4,5]
    /// Explanation: 
    /// On the first day, the array is changed from [1,6,3,4,3,5] 
    /// to [1,5,4,3,4,5].
    /// On the second day, the array is changed from [1,5,4,3,4,5] 
    /// to [1,4,4,4,4,5].
    /// No more operations can be done to this array.
    /// 
    /// Constraints:
    /// 1. 1 <= arr.length <= 100
    /// 2. 1 <= arr[i] <= 100
    /// </summary>
    vector<int> transformArray(vector<int>& arr);

    /// <summary>
    /// Leet code #1248. Count Number of Nice Subarrays
    ///  
    /// Given an array of integers nums and an integer k. A subarray is called 
    /// nice if there are k odd numbers on it.
    ///
    /// Return the number of nice sub-arrays.
    ///
    /// Example 1:
    ///
    /// Input: nums = [1,1,2,1,1], k = 3
    /// Output: 2
    /// Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] 
    /// and [1,2,1,1].
    ///
    /// Example 2:
    ///
    /// Input: nums = [2,4,6], k = 1
    /// Output: 0
    /// Explanation: There is no odd numbers in the array.
    ///
    /// Example 3:
    ///
    /// Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
    /// Output: 16
    /// 
    /// Constraints:
    /// 1. 1 <= nums.length <= 50000
    /// 2. 1 <= nums[i] <= 10^5
    /// 3. 1 <= k <= nums.length
    /// </summary>
    int numberOfSubarrays(vector<int>& nums, int k);

    /// <summary>
    /// Leet code #41. First Missing Positive
    /// 
    /// Given an unsorted integer array, find the smallest missing positive 
    /// integer.
    ///
    /// Example 1:
    ///
    /// Input: [1,2,0]
    /// Output: 3
    ///
    /// Example 2:
    ///
    /// Input: [3,4,-1,1]
    /// Output: 2
    ///
    /// Example 3:
    ///
    /// Input: [7,8,9,11,12]
    /// Output: 1
    ///
    /// Note:
    /// 
    /// Your algorithm should run in O(n) time and uses constant extra space.
    /// </summary>
    int firstMissingPositive(vector<int>& nums);

    /// <summary>
    /// Leet code #48. Rotate Image
    /// 
    /// You are given an n x n 2D matrix representing an image.
    ///
    /// Rotate the image by 90 degrees (clockwise).
    ///
    /// Note:
    ///
    /// You have to rotate the image in-place, which means you have to 
    /// modify the input 2D matrix directly. DO NOT allocate another 2D 
    /// matrix and do the rotation.
    ///
    /// Example 1:
    ///
    /// Given input matrix = 
    /// [
    ///   [1,2,3],
    ///  [4,5,6],
    ///  [7,8,9]
    /// ],
    ///
    /// rotate the input matrix in-place such that it becomes:
    /// [
    ///  [7,4,1],
    ///  [8,5,2],
    ///  [9,6,3]
    /// ]
    ///
    /// Example 2:
    ///
    /// Given input matrix =
    /// [
    ///   [ 5, 1, 9,11],
    ///   [ 2, 4, 8,10],
    ///   [13, 3, 6, 7],
    ///   [15,14,12,16]
    /// ], 
    ///
    /// rotate the input matrix in-place such that it becomes:
    /// [
    ///   [15,13, 2, 5],
    ///   [14, 3, 4, 1],
    //    [12, 6, 8, 9],
    ///   [16, 7,10,11]
    /// ]
    /// </summary>
    void rotate(vector<vector<int>>& matrix);

    /// <summary>
    /// Leet code #54. Spiral Matrix
    /// 
    /// Given a matrix of m x n elements (m rows, n columns), return all elements 
    /// of the matrix in spiral order.
    ///
    /// Example 1:
    ///
    /// Input:
    /// [
    ///  [ 1, 2, 3 ],
    ///  [ 4, 5, 6 ],
    ///  [ 7, 8, 9 ]
    /// ]
    /// Output: [1,2,3,6,9,8,7,4,5]
    ///
    /// Example 2:
    ///
    /// Input:
    /// [
    ///  [1, 2, 3, 4],
    ///   [5, 6, 7, 8],
    ///  [9,10,11,12]
    /// ]
    /// Output: [1,2,3,4,8,12,11,10,9,5,6,7]
    /// You are given an n x n 2D matrix representing an image.
    /// </summary>
    vector<int> spiralOrder(vector<vector<int>>& matrix);

    /// <summary>
    /// Leet code #59. Spiral Matrix II
    /// 
    /// Given a positive integer n, generate a square matrix filled with elements
    /// from 1 to n2 in spiral order.
    ///
    /// Example:
    ///
    /// Input: 3
    /// Output:
    /// [
    ///  [ 1, 2, 3 ],
    ///  [ 8, 9, 4 ],
    ///  [ 7, 6, 5 ]
    /// ]
    /// </summary>
    vector<vector<int>> generateMatrix(int n);

    /// <summary>
    /// Leet code #287. Find the Duplicate Number
    /// 
    /// Given an array nums containing n + 1 integers where each integer is 
    /// between 1 and n (inclusive), prove that at least one duplicate number 
    /// must exist. Assume that there is only one duplicate number, find the 
    /// duplicate one.
    ///
    /// Example 1:
    ///
    /// Input: [1,3,4,2,2]
    /// Output: 2
    ///
    /// Example 2:
    ///
    /// Input: [3,1,3,4,2]
    /// Output: 3
    /// Note:
    ///
    /// You must not modify the array (assume the array is read only).
    /// You must use only constant, O(1) extra space.
    /// Your runtime complexity should be less than O(n2).
    /// There is only one duplicate number in the array, but it could be 
    /// repeated more than once.
    /// </summary>
    int findDuplicate(vector<int>& nums);

    /// <summary>
    /// Leet code #229. Majority Element II
    /// 
    /// Given an integer array of size n, find all elements that appear more than
    /// n/3 times.
    ///
    /// Note: The algorithm should run in linear time and in O(1) space.
    ///
    /// Example 1:
    /// 
    /// Input: [3,2,3]
    /// Output: [3]
    ///
    /// Example 2:
    /// 
    /// Input: [1,1,1,3,3,2,2,2]
    /// Output: [1,2]
    /// </summary>
    vector<int> majorityElementII(vector<int>& nums);

    /// <summary>
    /// Leet code #169. Majority Element
    /// 
    /// Given an array of size n, find the majority element. The majority element
    /// is the element that appears more than n/2 times.
    ///
    /// You may assume that the array is non-empty and the majority element 
    /// always exist in the array.
    ///
    /// Example 1:
    ///
    /// Input: [3,2,3]
    /// Output: 3
    ///
    /// Example 2:
    ///
    /// Input: [2,2,1,1,1,2,2]
    /// Output: 2
    /// </summary>
    int majorityElement(vector<int>& nums);

    /// <summary>
    /// Leet code #1252. Cells with Odd Values in a Matrix
    /// 
    /// Given n and m which are the dimensions of a matrix initialized by zeros 
    /// and given an array indices where indices[i] = [ri, ci]. For each pair 
    /// of [ri, ci] you have to increment all cells in row ri and column ci by 1.
    ///
    /// Return the number of cells with odd values in the matrix after applying 
    /// the increment to all indices.
    /// 
    /// Example 1:
    /// 
    /// Input: n = 2, m = 3, indices = [[0,1],[1,1]]
    /// Output: 6
    /// Explanation: Initial matrix = [[0,0,0],[0,0,0]].
    /// After applying first increment it becomes [[1,2,1],[0,1,0]].
    /// The final matrix will be [[1,3,1],[1,3,1]] which contains 6 odd numbers.
    ///
    /// Example 2:
    /// 
    /// Input: n = 2, m = 2, indices = [[1,1],[0,0]]
    /// Output: 0
    /// Explanation: Final matrix = [[2,2],[2,2]]. There is no odd number in the 
    /// final matrix.
    /// 
    /// Constraints:
    ///
    /// 1. 1 <= n <= 50
    /// 2. 1 <= m <= 50
    /// 3. 1 <= indices.length <= 100
    /// 4. 0 <= indices[i][0] < n
    /// 5. 0 <= indices[i][1] < m
    /// </summary>
    int oddCells(int n, int m, vector<vector<int>>& indices);

    /// <summary>
    /// Leet code #1253. Reconstruct a 2-Row Binary Matrix
    /// 
    /// Given the following details of a matrix with n columns and 2 rows :
    ///
    /// The matrix is a binary matrix, which means each element in the matrix 
    /// can be 0 or 1.
    /// The sum of elements of the 0-th(upper) row is given as upper.
    /// The sum of elements of the 1-st(lower) row is given as lower.
    /// The sum of elements in the i-th column(0-indexed) is colsum[i], where 
    /// colsum is given as an integer array with length n.
    /// Your task is to reconstruct the matrix with upper, lower and colsum.
    ///
    /// Return it as a 2-D integer array.
    /// 
    /// If there are more than one valid solution, any of them will be accepted.
    ///
    /// If no valid solution exists, return an empty 2-D array.
    ///
    /// 
    /// Example 1:
    ///
    /// Input: upper = 2, lower = 1, colsum = [1,1,1]
    /// Output: [[1,1,0],[0,0,1]]
    /// Explanation: [[1,0,1],[0,1,0]], and [[0,1,1],[1,0,0]] are also correct 
    /// answers.
    ///
    /// Example 2:
    ///
    /// Input: upper = 2, lower = 3, colsum = [2,2,1,1]
    /// Output: []
    ///
    /// Example 3:
    ///
    /// Input: upper = 5, lower = 5, colsum = [2,1,2,0,1,0,1,2,0,1]
    /// Output: [[1,1,1,0,1,0,0,1,0,0],[1,0,1,0,0,0,1,1,0,1]]
    ///
    /// Constraints:
    /// 1. 1 <= colsum.length <= 10^5
    /// 2. 0 <= upper, lower <= colsum.length
    /// 3. 0 <= colsum[i] <= 2
    /// </summary>
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum);

    /// <summary>
    /// Leet code #1260. Shift 2D Grid
    /// 
    /// Given a 2D grid of size n * m and an integer k. You need to shift 
    /// the grid k times.
    ///
    /// In one shift operation:
    ///
    /// Element at grid[i][j] becomes at grid[i][j + 1].
    /// Element at grid[i][m - 1] becomes at grid[i + 1][0].
    /// Element at grid[n - 1][m - 1] becomes at grid[0][0].
    /// Return the 2D grid after applying shift operation k times.
    /// 
    /// Example 1:
    ///
    /// Input: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 1
    /// Output: [[9,1,2],[3,4,5],[6,7,8]]
    ///
    /// Example 2:
    ///
    /// Input: grid = [[3,8,1,9],[19,7,2,5],[4,6,11,10],[12,0,21,13]], k = 4
    /// Output: [[12,0,21,13],[3,8,1,9],[19,7,2,5],[4,6,11,10]]
    ///
    /// Example 3:
    ///
    /// Input: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 9
    /// Output: [[1,2,3],[4,5,6],[7,8,9]]
    /// 
    /// Constraints:
    ///
    /// 1. 1 <= grid.length <= 50
    /// 2. 1 <= grid[i].length <= 50
    /// 3. -1000 <= grid[i][j] <= 1000
    /// 4. 0 <= k <= 100
    /// </summary>
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k);

    /// <summary>
    /// Leet code #1267. Count Servers that Communicate
    /// 
    /// You are given a map of a server center, represented as a m * n integer 
    /// matrix grid, where 1 means that on that cell there is a server and 0 
    /// means that it is no server. Two servers are said to communicate if 
    /// they are on the same row or on the same column.
    ///
    /// Return the number of servers that communicate with any other server.
    ///
    /// Example 1:
    ///
    /// Input: grid = [[1,0],[0,1]]
    /// Output: 0
    /// Explanation: No servers can communicate with others.
    ///
    /// Example 2:
    ///
    /// Input: grid = [[1,0],[1,1]]
    /// Output: 3
    /// Explanation: All three servers can communicate with at least one other 
    /// server.
    ///
    /// Example 3:
    ///
    /// Input: grid = [[1,1,0,0],[0,0,1,0],[0,0,1,0],[0,0,0,1]]
    /// Output: 4
    /// Explanation: The two servers in the first row can communicate with each 
    /// other. The two servers in the third column can communicate with each 
    /// other. The server at right bottom corner can't communicate with any 
    /// other server.
    /// 
    /// Constraints:
    /// 1. m == grid.length
    /// 2. n == grid[i].length
    /// 3. 1 <= m <= 250
    /// 4. 1 <= n <= 250
    /// 5. grid[i][j] == 0 or 1
    /// </summary>
    int countServers(vector<vector<int>>& grid);

    /// <summary>
    /// Leetcode #1275. Find Winner on a Tic Tac Toe Game
    /// 
    /// Tic-tac-toe is played by two players A and B on a 3 x 3 grid.
    ///
    /// Here are the rules of Tic-Tac-Toe:
    ///
    /// Players take turns placing characters into empty squares (" ").
    /// The first player A always places "X" characters, while the second 
    /// player B always places "O" characters.
    /// "X" and "O" characters are always placed into empty squares, never 
    /// on filled ones.
    /// The game ends when there are 3 of the same (non-empty) character 
    /// filling any row, column, or diagonal.
    /// The game also ends if all squares are non-empty.
    /// No more moves can be played if the game is over.
    /// Given an array moves where each element is another array of size 2 
    /// corresponding to the row and column of the grid where they mark 
    /// their respective character in the order in which A and B play.
    ///
    /// Return the winner of the game if it exists (A or B), in case the 
    /// game ends in a draw return "Draw", if there are still movements 
    /// to play return "Pending".
    ///
    /// You can assume that moves is valid (It follows the rules of 
    /// Tic-Tac-Toe), the grid is initially empty and A will play first.
    ///
    /// Example 1:
    ///
    /// Input: moves = [[0,0],[2,0],[1,1],[2,1],[2,2]]
    /// Output: "A"
    /// Explanation: "A" wins, he always plays first.
    /// "X  "    "X  "    "X  "    "X  "    "X  "
    /// "   " -> "   " -> " X " -> " X " -> " X "
    /// "   "    "O  "    "O  "    "OO "    "OOX"
    ///
    /// Example 2:
    ///
    /// Input: moves = [[0,0],[1,1],[0,1],[0,2],[1,0],[2,0]]
    /// Output: "B"
    /// Explanation: "B" wins.
    /// "X  "    "X  "    "XX "    "XXO"    "XXO"    "XXO"
    /// "   " -> " O " -> " O " -> " O " -> "XO " -> "XO " 
    /// "   "    "   "    "   "    "   "    "   "    "O  "
    ///
    /// Example 3:
    ///
    /// Input: moves = [[0,0],[1,1],[2,0],[1,0],[1,2],[2,1],[0,1],[0,2],[2,2]]
    /// Output: "Draw"
    /// Explanation: The game ends in a draw since there are no moves to make.
    /// "XXO"
    /// "OOX"
    /// "XOX"
    ///
    /// Example 4:
    ///
    /// Input: moves = [[0,0],[1,1]]
    /// Output: "Pending"
    /// Explanation: The game has not finished yet.
    /// "X  "
    /// " O "
    /// "   "
    /// 
    /// Constraints:
    /// 1. 1 <= moves.length <= 9
    /// 2. moves[i].length == 2
    /// 3. 0 <= moves[i][j] <= 2
    /// 4. There are no repeated elements on moves.
    /// 5. moves follow the rules of tic tac toe.
    /// </summary>
    string tictactoe(vector<vector<int>>& moves);

    /// <summary>
    /// Leet code #1282. Group the People Given the Group Size They Belong To
    ///
    /// Medium
    ///
    /// There are n people whose IDs go from 0 to n - 1 and each person 
    /// belongs exactly to one group. Given the array groupSizes of 
    /// length n telling the group size each person belongs to, return the 
    /// groups there are and the people's IDs each group includes.
    ///
    /// You can return any solution in any order and the same applies for 
    /// IDs. Also, it is guaranteed that there exists at least one solution. 
    ///
    /// Example 1:
    ///
    /// Input: groupSizes = [3,3,3,3,3,1,3]
    /// Output: [[5],[0,1,2],[3,4,6]]
    /// Explanation: 
    /// Other possible solutions are [[2,1,6],[5],[0,4,3]] 
    /// and [[5],[0,6,2],[4,3,1]].
    ///
    /// Example 2:
    ///
    /// Input: groupSizes = [2,1,3,3,3,2]
    /// Output: [[1],[0,5],[2,3,4]]
    /// 
    /// Constraints:
    /// 1. groupSizes.length == n
    /// 2. 1 <= n <= 500
    /// 3. 1 <= groupSizes[i] <= n
    /// </summary>
    vector<vector<int>> groupThePeople(vector<int>& groupSizes);

    /// <summary>
    /// Leet code #1287. Element Appearing More Than 25% In Sorted Array
    /// 
    /// Easy
    ///
    /// Given an integer array sorted in non-decreasing order, there is 
    /// exactly one integer in the array that occurs more than 25% of the time.
    ///
    /// Return that integer.
    ///
    /// Example 1:
    ///
    /// Input: arr = [1,2,2,6,6,6,6,7,10]
    ///
    /// Output: 6
    ///
    /// Constraints:
    /// 1. 1 <= arr.length <= 10^4
    /// 2. 0 <= arr[i] <= 10^5
    /// </summary>
    int findSpecialInteger(vector<int>& arr);

    /// <summary>
    /// Leet code #1292. Maximum Side Length of a Square with Sum Less than 
    /// or Equal to Threshold
    ///
    /// Medium
    ///
    /// Given a m x n matrix mat and an integer threshold. Return the maximum 
    /// side-length of a square with a sum less than or equal to threshold or 
    /// return 0 if there is no such square.
    /// 
    /// Example 1: 
    /// Input: mat = [[1,1,3,2,4,3,2],[1,1,3,2,4,3,2],[1,1,3,2,4,3,2]], 
    /// threshold = 4
    /// Output: 2
    /// Explanation: The maximum side length of square with sum less than 4 
    /// is 2 as shown.
    ///
    /// Example 2:
    /// Input: mat = [[2,2,2,2,2],[2,2,2,2,2],[2,2,2,2,2],[2,2,2,2,2],
    /// [2,2,2,2,2]], threshold = 1
    /// Output: 0
    ///
    /// Example 3:
    /// Input: mat = [[1,1,1,1],[1,0,0,0],[1,0,0,0],[1,0,0,0]], threshold = 6
    /// Output: 3
    ///
    /// Example 4:
    /// Input: mat = [[18,70],[61,1],[25,85],[14,40],[11,96],[97,96],[63,45]], 
    /// threshold = 40184
    /// Output: 2
    /// </summary>
    int maxSideLength(vector<vector<int>>& mat, int threshold);

    /// <summary>
    /// Leetcode #1296. Divide Array in Sets of K Consecutive Numbers
    /// 
    /// Given an array of integers nums and a positive integer k, find 
    /// whether it's possible to divide this array into sets of k 
    /// consecutive numbers
    /// Return True if its possible otherwise return False.
    ///
    /// Example 1:
    ///
    /// Input: nums = [1,2,3,3,4,4,5,6], k = 4
    /// Output: true
    /// Explanation: Array can be divided into [1,2,3,4] and [3,4,5,6].
    ///
    /// Example 2:
    ///
    /// Input: nums = [3,2,1,2,3,4,3,4,5,9,10,11], k = 3
    /// Output: true
    /// Explanation: Array can be divided into [1,2,3] , [2,3,4] , [3,4,5] 
    /// and [9,10,11].
    ///
    /// Example 3:
    ///
    /// Input: nums = [3,3,2,2,1,1], k = 3
    /// Output: true
    ///
    /// Example 4:
    ///
    /// Input: nums = [1,2,3,4], k = 3
    /// Output: false
    /// Explanation: Each array should be divided in subarrays of size 3.
    ///
    /// Constraints:
    /// 1. 1 <= nums.length <= 10^5
    /// 2. 1 <= nums[i] <= 10^9
    /// 3. 1 <= k <= nums.length
    /// </summary>
    bool isPossibleDivide(vector<int>& nums, int k);

    /// <summary>
    /// Leetcode #1299. Replace Elements with Greatest Element on Right Side
    ///
    /// Easy	
    ///
    /// Given an array arr, replace every element in that array with the 
    /// greatest element among the elements to its right, and replace the 
    /// last element with -1.
    ///
    /// After doing so, return the array.
    /// 
    /// Example 1:
    /// Input: arr = [17,18,5,4,6,1]
    /// Output: [18,6,6,6,1,-1]
    ///
    /// Constraints:
    /// 1. 1 <= arr.length <= 10^4
    /// 2. 1 <= arr[i] <= 10^5
    /// </summary>
    vector<int> replaceElements(vector<int>& arr);

    /// <summary>
    /// Leetcode #1306. Jump Game III
    ///
    /// Medium
    ///
    /// Given an array of non-negative integers arr, you are initially 
    /// positioned at start index of the array. When you are at index i, 
    /// you can jump to i + arr[i] or i - arr[i], check if you can reach 
    /// to any index with value 0.
    ///
    /// Notice that you can not jump outside of the array at any time.
    /// 
    /// Example 1:
    /// Input: arr = [4,2,3,0,3,1,2], start = 5
    /// Output: true
    /// Explanation: 
    /// All possible ways to reach at index 3 with value 0 are: 
    /// index 5 -> index 4 -> index 1 -> index 3 
    /// index 5 -> index 6 -> index 4 -> index 1 -> index 3 
    ///
    /// Example 2:
    /// Input: arr = [4,2,3,0,3,1,2], start = 0
    /// Output: true 
    /// Explanation: 
    /// One possible way to reach at index 3 with value 0 is: 
    /// index 0 -> index 4 -> index 1 -> index 3
    ///
    /// Example 3:
    /// Input: arr = [3,0,2,1,2], start = 2
    /// Output: false
    /// Explanation: There is no way to reach at index 1 with value 0.
    ///
    /// Constraints:
    /// 1. 1 <= arr.length <= 5 * 10^4
    /// 2. 0 <= arr[i] < arr.length
    /// 3. 0 <= start < arr.length
    /// </summary>
    bool canReach(vector<int>& arr, int start);

    /// <summary>
    /// Leet code #448. Find All Numbers Disappeared in an Array
    ///
    /// Given an array of integers where 1 �� a[i] �� n (n = size of array), 
    /// some elements appear twice and others appear once.
    /// Find all the elements of [1, n] inclusive that do not appear in this 
    /// array.
    /// Could you do it without extra space and in O(n) runtime? You may 
    /// assume the returned list does not count as extra space.
    ///
    /// Example:
    ///
    /// Input:
    /// [4,3,2,7,8,2,3,1]
    /// Output:
    /// [5,6]
    /// </summary>
    vector<int> findDisappearedNumbers(vector<int>& nums);

    /// <summary>
    /// Leet code #36. Valid Sudoku
    ///
    /// Medium
    ///
    /// Determine if a 9x9 Sudoku board is valid. Only the filled cells need 
    /// to be validated according to the following rules:
    ///
    /// Each row must contain the digits 1-9 without repetition.
    /// Each column must contain the digits 1-9 without repetition.
    /// Each of the 9 3x3 sub-boxes of the grid must contain the digits 1-9 
    /// without repetition.
    /// 
    /// A partially filled sudoku which is valid.
    ///  
    /// The Sudoku board could be partially filled, where empty cells are 
    /// filled with the character '.'.
    ///
    /// Example 1:
    ///
    /// Input:
    /// [
    ///  ["5","3",".",".","7",".",".",".","."],
    ///  ["6",".",".","1","9","5",".",".","."],
    ///  [".","9","8",".",".",".",".","6","."],
    ///  ["8",".",".",".","6",".",".",".","3"],
    ///  ["4",".",".","8",".","3",".",".","1"],
    ///  ["7",".",".",".","2",".",".",".","6"],
    ///  [".","6",".",".",".",".","2","8","."],
    ///  [".",".",".","4","1","9",".",".","5"],
    ///  [".",".",".",".","8",".",".","7","9"]
    /// ]
    /// Output: true
    /// Example 2:
    ///
    /// Input:
    /// [
    ///  ["8","3",".",".","7",".",".",".","."],
    ///  ["6",".",".","1","9","5",".",".","."],
    ///  [".","9","8",".",".",".",".","6","."],
    ///  ["8",".",".",".","6",".",".",".","3"],
    ///  ["4",".",".","8",".","3",".",".","1"],
    ///  ["7",".",".",".","2",".",".",".","6"],
    ///  [".","6",".",".",".",".","2","8","."],
    ///  [".",".",".","4","1","9",".",".","5"],
    ///  [".",".",".",".","8",".",".","7","9"]
    /// ]
    /// Output: false
    /// Explanation: Same as Example 1, except with the 5 in the top left 
    /// corner being modified to 8. Since there are two 8's in the top 
    /// left 3x3 sub-box, it is invalid.
    /// Note:
    ///
    /// A Sudoku board (partially filled) could be valid but is not 
    /// necessarily solvable.
    /// Only the filled cells need to be validated according to the mentioned 
    /// rules.
    /// The given board contain only digits 1-9 and the character '.'.
    /// The given board size is always 9x9.
    /// </summary>
    bool isValidSudoku(vector<vector<char>>& board);
#pragma endregion
};
#endif  // LeetCodeArray_H
