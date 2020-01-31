using System;
using System.Collections.Generic;
using FluentAssertions;
using LeetCode.Easy;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace LeetCode.EasyTests
{
    [TestClass()]
    public class Q0448_FindAllNumbersDisappearedInAnArrayTests
    {
        [TestMethod()]
        public void FindDisappearedNumbers_輸入43278231_應回傳56()
        {
            // arrange
            var nums = new int[] { 4, 3, 2, 7, 8, 2, 3, 1 };

            var expect = new List<int> { 5, 6 };

            var sut = new Q0448_FindAllNumbersDisappearedInAnArray();

            // act
            var actual = sut.FindDisappearedNumbers(nums);

            // assert
            actual.Should().NotBeEmpty();
            actual.Should().Equal(expect);
        }

        [TestMethod()]
        public void FindDisappearedNumbers_輸入1_應回傳空序列()
        {
            // arrange
            var nums = new int[] { 1 };

            var sut = new Q0448_FindAllNumbersDisappearedInAnArray();

            // act
            var actual = sut.FindDisappearedNumbers(nums);

            // assert
            actual.Should().BeEmpty();
        }

        [TestMethod()]
        public void FindDisappearedNumbers_輸入空序列_應回傳空序列()
        {
            // arrange
            var nums = new int[] { };

            var sut = new Q0448_FindAllNumbersDisappearedInAnArray();

            // act
            var actual = sut.FindDisappearedNumbers(nums);

            // assert
            actual.Should().BeEmpty();
        }

        [TestMethod()]
        public void FindDisappearedNumbers_輸入null_應拋出ArgumentNullException()
        {
            // arrange
            int[] nums = null;

            var sut = new Q0448_FindAllNumbersDisappearedInAnArray();

            // act
            Action actual = () => sut.FindDisappearedNumbers(nums);

            // assert
            actual.Should().Throw<ArgumentNullException>()
                  .Which.Message.Should().Contain("不可為Null");
        }

        [TestMethod()]
        public void FindDisappearedNumbersNew01_輸入43278231_應回傳56()
        {
            // arrange
            var nums = new int[] { 4, 3, 2, 7, 8, 2, 3, 1 };

            var expect = new List<int> { 5, 6 };

            var sut = new Q0448_FindAllNumbersDisappearedInAnArray();

            // act
            var actual = sut.FindDisappearedNumbersNew01(nums);

            // assert
            actual.Should().NotBeEmpty();
            actual.Should().Equal(expect);
        }

        [TestMethod()]
        public void FindDisappearedNumbersNew01_輸入1_應回傳空序列()
        {
            // arrange
            var nums = new int[] { 1 };

            var sut = new Q0448_FindAllNumbersDisappearedInAnArray();

            // act
            var actual = sut.FindDisappearedNumbersNew01(nums);

            // assert
            actual.Should().BeEmpty();
        }

        [TestMethod()]
        public void FindDisappearedNumbersNew01_輸入空序列_應回傳空序列()
        {
            // arrange
            var nums = new int[] { };

            var sut = new Q0448_FindAllNumbersDisappearedInAnArray();

            // act
            var actual = sut.FindDisappearedNumbersNew01(nums);

            // assert
            actual.Should().BeEmpty();
        }

        [TestMethod()]
        public void FindDisappearedNumbersNew01_輸入null_應拋出ArgumentNullException()
        {
            // arrange
            int[] nums = null;

            var sut = new Q0448_FindAllNumbersDisappearedInAnArray();

            // act
            Action actual = () => sut.FindDisappearedNumbersNew01(nums);

            // assert
            actual.Should().Throw<ArgumentNullException>()
                  .Which.Message.Should().Contain("不可為Null");
        }
    }
}