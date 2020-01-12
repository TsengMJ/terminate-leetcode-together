namespace LeetCode.Easy
{
    public class Q0283_MoveZeroes
    {
        /*
            Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

            Example:
            Input: [0,1,0,3,12]
            Output: [1,3,12,0,0]

            Note:
            You must do this in-place without making a copy of the array.
            Minimize the total number of operations.
        */

        public void MoveZeroes(int[] nums)
        {
            for (int i = 0; i < nums.Length - 1; i++)
            {
                for (int j = i + 1; j < nums.Length; j++)
                {
                    if (nums[i] == 0 && nums[j] != 0)
                    {
                        Swap(ref nums[i], ref nums[j]);
                    }
                }
            }
        }

        public void MoveZeroesNew01(int[] nums)
        {
            var totalZero = 0;
            for (int i = 0; i < nums.Length; i++)
            {
                if (nums[i] == 0)
                {
                    totalZero++;
                }
                else
                {
                    nums[i - totalZero] = nums[i];
                }
            }
            for (int i = nums.Length - 1; i > (nums.Length - 1) - totalZero; i--)
            {
                nums[i] = 0;
            }
        }

        public void MoveZeroesNew02(int[] nums)
        {
            var notZeroCount = 0;
            for (int i = 0; i < nums.Length; i++)
            {
                if (nums[i] != 0)
                {
                    Swap(ref nums[notZeroCount], ref nums[i]);
                    notZeroCount++;
                }
            }
        }

        private void Swap(ref int a, ref int b)
        {
            var temp = a;
            a = b;
            b = temp;
        }
    }
}