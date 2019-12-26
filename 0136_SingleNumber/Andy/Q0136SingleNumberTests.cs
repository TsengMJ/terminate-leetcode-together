using System;
using FluentAssertions;
using LeetCode.Easy;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace LeetCode.EasyTests
{
    [TestClass()]
    public class Q0136SingleNumberTests
    {
        [TestMethod()]
        public void GetSingleNumberTest_nums輸入規定221_應回傳1()
        {
            // arrange
            var nums = new int[] { 2, 2, 1 };
            var expected = 1;

            var sut = new Q0136SingleNumber();

            // act
            var actual = sut.GetSingleNumber(nums);

            // assert
            actual.Should().Be(expected);
        }

        [TestMethod()]
        public void GetSingleNumberTest_nums輸入規定41212_應回傳4()
        {
            // arrange
            var nums = new int[] { 4, 1, 2, 1, 2 };
            var expected = 4;

            var sut = new Q0136SingleNumber();

            // act
            var actual = sut.GetSingleNumber(nums);

            // assert
            actual.Should().Be(expected);
        }

        [TestMethod()]
        public void GetSingleNumberTest_nums為null_應拋出ArgumentNullException()
        {
            // arrange
            int[] nums = null;

            var sut = new Q0136SingleNumber();

            // act
            Action actual = () => sut.GetSingleNumber(nums);

            // assert
            actual.Should().Throw<ArgumentNullException>()
                  .And.Message.Should().Contain("不可為 null");
        }

        [TestMethod()]
        public void GetSingleNumberTest_nums為empty_應拋出ArgumentException()
        {
            // arrange
            var nums = new int[] { };

            var sut = new Q0136SingleNumber();

            // act
            Action actual = () => sut.GetSingleNumber(nums);

            // assert
            actual.Should().Throw<ArgumentException>()
                  .And.Message.Should().Contain("不可為 empty array");
        }
    }
}