using System;

namespace LeetCode.Easy
{
    /*
    You are climbing a stair case. It takes n steps to reach to the top.

    Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

    Note: Given n will be a positive integer.

    Example 1:
    Input: 2
    Output: 2

    Explanation: There are two ways to climb to the top.
    1. 1 step + 1 step
    2. 2 steps

    Example 2:
    Input: 3
    Output: 3

    Explanation: There are three ways to climb to the top.
    1. 1 step + 1 step + 1 step
    2. 1 step + 2 steps
    3. 2 steps + 1 step
    */

    public class Q0070_ClimbingStairs
    {
        public int ClimbStairs(int n)
        {
            // 費氏數列 F(0) = 0, F(1) = 1, F(2) = F(0) + F(1), F(n) = F(n - 2) + F(n - 1)

            if (n < 0)
            {
                throw new ArgumentException("不可為負數", nameof(n));
            }

            if (n < 2)
            {
                return n;
            }

            var previous = 0;
            var result = 1;

            for (var i = 0; i < n; i++)
            {
                var temp = result;
                result = previous + result;
                previous = temp;
            }

            return result;
        }
    }
}