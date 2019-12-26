using System;

namespace LeetCode.Easy
{
    /*
        Given a non-empty array of integers, every element appears twice except for one. Find that single one.

        Note:
        Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

        Example 1:
        Input: [2,2,1]
        Output: 1

        Example 2:
        Input: [4,1,2,1,2]
        Output: 4
    */

    public class Q0136SingleNumber
    {
        public int GetSingleNumber(int[] nums)
        {
            var result = 0;

            if (nums == null)
            {
                throw new ArgumentNullException(nameof(nums), "不可為 null");
            }

            if (nums.Length == 0)
            {
                throw new ArgumentException("不可為 empty array", nameof(nums));
            }

            foreach (var num in nums)
            {
                result ^= num;
            }

            return result;
        }
    }
}