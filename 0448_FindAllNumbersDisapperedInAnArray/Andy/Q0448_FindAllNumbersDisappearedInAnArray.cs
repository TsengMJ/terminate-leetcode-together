using System;
using System.Collections.Generic;

namespace LeetCode.Easy
{
    /*
        Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

        Find all the elements of [1, n] inclusive that do not appear in this array.

        Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

        Example:
        Input:
        [4,3,2,7,8,2,3,1]
        Output:
        [5,6]
    */

    public class Q0448_FindAllNumbersDisappearedInAnArray
    {
        public IList<int> FindDisappearedNumbers(int[] nums)
        {
            if (nums == null)
            {
                throw new ArgumentNullException(nameof(nums), "不可為Null");
            }

            var result = new List<int>() { };

            for (int i = 0; i < nums.Length; i++)
            {
                SwapToCorrectPlace(nums, i);
            }

            for (int i = 0; i < nums.Length; i++)
            {
                if (nums[i] != i + 1)
                {
                    result.Add(i + 1);
                }
            }

            return result;
        }

        public IList<int> FindDisappearedNumbersNew01(int[] nums)
        {
            if (nums == null)
            {
                throw new ArgumentNullException(nameof(nums), "不可為Null");
            }

            var result = new List<int>() { };

            // 把 nums 裡面對應 index 內的值的位置給加上負號，加過的不加
            for (int i = 0; i < nums.Length; i++)
            {
                if (nums[Math.Abs(nums[i]) - 1] > 0)
                {
                    nums[Math.Abs(nums[i]) - 1] = -nums[Math.Abs(nums[i]) - 1];
                }
            }

            for (int i = 0; i < nums.Length; i++)
            {
                if (nums[i] > 0)
                {
                    result.Add(i + 1);
                }
            }

            return result;
        }

        /// <summary>
        /// 把 index 內的值換到對應的 nums[index] 位置上
        /// </summary>
        /// <param name="nums">The nums.</param>
        /// <param name="index">The index.</param>
        private void SwapToCorrectPlace(int[] nums, int index)
        {
            // 如果 index 內的值已在對應的 nums[index] 位置 或等於對應的 nums[index] 位置內的值則跳掉
            var value = nums[index];
            if (value == index + 1 || value == nums[value - 1])
            {
                return;
            }

            nums[index] = nums[value - 1];
            nums[value - 1] = value;

            SwapToCorrectPlace(nums, index);
        }
    }
}