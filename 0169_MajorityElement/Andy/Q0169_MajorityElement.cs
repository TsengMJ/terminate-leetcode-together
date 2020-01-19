using System;
using System.Collections.Generic;

namespace LeetCode.Easy
{
    public class Q0169_MajorityElement
    {
        public int MajorityElement(int[] nums)
        {
            if (nums == null)
            {
                throw new ArgumentNullException(nameof(nums), "不可為null");
            }

            if (nums.Length == 0)
            {
                throw new ArgumentException("不可為empty", nameof(nums));
            }

            var dictionary = new Dictionary<int, int>();
            var targetCount = nums.Length / 2;

            foreach (var num in nums)
            {
                if (dictionary.ContainsKey(num))
                {
                    dictionary[num] += 1;
                }
                else
                {
                    dictionary.Add(num, 1);
                }

                if (dictionary[num] > targetCount)
                {
                    return num;
                }
            }

            throw new ArgumentException("沒有主要元素", nameof(nums));
        }
    }
}