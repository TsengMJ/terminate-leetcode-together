using System;
using FluentAssertions;
using LeetCode.Easy;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace LeetCode.EasyTests
{
    [TestClass()]
    public class Q0169_MajorityElementTests
    {
        [TestMethod()]
        public void MajorityElementTest_nums輸入323_應回傳3()
        {
            // arrange
            var nums = new int[] { 3, 2, 3 };

            var expect = 3;

            var sut = new Q0169_MajorityElement();

            // act
            var actual = sut.MajorityElement(nums);

            // assert
            actual.Should().Be(expect);
        }

        [TestMethod()]
        public void MajorityElementTest_nums輸入2211122_應回傳2()
        {
            // arrange
            var nums = new int[] { 2, 2, 1, 1, 1, 2, 2 };

            var expect = 2;

            var sut = new Q0169_MajorityElement();

            // act
            var actual = sut.MajorityElement(nums);

            // assert
            actual.Should().Be(expect);
        }

        [TestMethod()]
        public void MajorityElementTest_nums輸入1_應回傳1()
        {
            // arrange
            var nums = new int[] { 1 };

            var expect = 1;

            var sut = new Q0169_MajorityElement();

            // act
            var actual = sut.MajorityElement(nums);

            // assert
            actual.Should().Be(expect);
        }

        [TestMethod()]
        public void MajorityElementTest_nums為empty_應拋出ArgumentException()
        {
            // arrange
            var nums = new int[] { };

            var sut = new Q0169_MajorityElement();

            // act
            Action actual = () => sut.MajorityElement(nums);

            // assert
            actual.Should().Throw<ArgumentException>()
                  .Which.Message.Should().Contain("不可為empty");
        }

        [TestMethod()]
        public void MajorityElementTest_nums為null_應拋出ArgumentNullException()
        {
            // arrange
            int[] nums = null;

            var sut = new Q0169_MajorityElement();

            // act
            Action actual = () => sut.MajorityElement(nums);

            // assert
            actual.Should().Throw<ArgumentNullException>()
                  .Which.Message.Should().Contain("不可為null");
        }

        [TestMethod()]
        public void MajorityElementTest_nums為沒有主要元素_應拋出ArgumentException()
        {
            // arrange
            var nums = new int[] { 1, 1, 1, 2, 2, 2 };

            var sut = new Q0169_MajorityElement();

            // act
            Action actual = () => sut.MajorityElement(nums);

            // assert
            actual.Should().Throw<ArgumentException>()
                  .Which.Message.Should().Contain("沒有主要元素");
        }
    }
}