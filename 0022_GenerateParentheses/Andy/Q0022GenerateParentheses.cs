using System;
using System.Collections.Generic;

namespace LeetCode.Medium
{
    /*
        Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

        For example, given n = 3, a solution set is:

        [
          "((()))",
          "(()())",
          "(())()",
          "()(())",
          "()()()"
        ]
    */

    public class Q0022GenerateParentheses
    {
        private List<string> _parenthesesList;

        public IEnumerable<string> GenerateParentheses(int n)
        {
            if (n < 0)
            {
                throw new ArgumentException("不可為負數", nameof(n));
            }

            _parenthesesList = new List<string>();

            Generate(n, n, string.Empty);

            return _parenthesesList;
        }

        private void Generate(int left, int right, string parentheses)
        {
            if (left > 0)
            {
                Generate(left - 1, right, parentheses + "(");
            }

            if (right > 0 && left < right)
            {
                Generate(left, right - 1, parentheses + ")");
            }

            if (left == 0 &&
                right == 0 &&
                !string.IsNullOrWhiteSpace(parentheses))
            {
                _parenthesesList.Add(parentheses);
            }
        }
    }
}