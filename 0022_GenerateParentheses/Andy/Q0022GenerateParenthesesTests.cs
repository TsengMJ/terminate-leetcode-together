using System;
using System.Collections.Generic;
using System.Linq;
using FluentAssertions;
using LeetCode.Medium;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace LeetCode.MediumTests
{
    [TestClass()]
    public class Q0022GenerateParenthesesTests
    {
        [TestMethod()]
        public void GenerateParentheses_n輸入1_應有適當輸出()
        {
            // arrange
            var n = 1;
            var expected = new List<string>()
            {
                "()"
            };

            var sut = new Q0022GenerateParentheses();

            // act
            var actual = sut.GenerateParentheses(n).ToList();

            // assert
            actual.Should().NotBeNull();
            actual.Count.Should().Be(1);
            actual.Should().BeEquivalentTo(expected);
        }

        [TestMethod()]
        public void GenerateParentheses_n輸入2_應有適當輸出()
        {
            // arrange
            var n = 2;
            var expected = new List<string>()
            {
                "()()",
                "(())"
            };

            var sut = new Q0022GenerateParentheses();

            // act
            var actual = sut.GenerateParentheses(n).ToList();

            // assert
            actual.Should().NotBeNull();
            actual.Count.Should().Be(2);
            actual.Should().BeEquivalentTo(expected);
        }

        [TestMethod()]
        public void GenerateParentheses_n輸入3_應有適當輸出()
        {
            // arrange
            var n = 3;
            var expected = new List<string>()
            {
                "((()))",
                "(()())",
                "(())()",
                "()(())",
                "()()()"
            };

            var sut = new Q0022GenerateParentheses();

            // act
            var actual = sut.GenerateParentheses(n).ToList();

            // assert
            actual.Should().NotBeNull();
            actual.Count.Should().Be(5);
            actual.Should().BeEquivalentTo(expected);
        }

        [TestMethod()]
        public void GenerateParentheses_n輸入0_應為空集合()
        {
            // arrange
            var n = 0;
            var expected = new List<string>();

            var sut = new Q0022GenerateParentheses();

            // act
            var actual = sut.GenerateParentheses(n).ToList();

            // assert
            actual.Should().NotBeNull();
            actual.Should().BeEmpty();
        }

        [TestMethod()]
        public void GenerateParentheses_n輸入負數_應拋出ArgumentException()
        {
            // arrange
            var n = -2;

            var sut = new Q0022GenerateParentheses();

            // act
            Action actual = () => sut.GenerateParentheses(n).ToList();

            // assert
            actual.Should().NotBeNull();
            actual.Should().Throw<ArgumentException>()
                  .And.Message.Should().Contain("不可為負數");
        }
    }
}