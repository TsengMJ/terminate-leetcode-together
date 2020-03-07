using System;
using FluentAssertions;
using LeetCode.Easy;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace LeetCode.EasyTests
{
    [TestClass()]
    public class Q0070_ClimbingStairsTests
    {
        [TestMethod()]
        public void ClimbStairs_n輸入2_應回傳2()
        {
            // arrange
            var n = 2;

            var expected = 2;

            var sut = new Q0070_ClimbingStairs();

            // act
            var actual = sut.ClimbStairs(n);

            // assert
            actual.Should().Be(expected);
        }

        [TestMethod()]
        public void ClimbStairs_n輸入3_應回傳3()
        {
            // arrange
            var n = 3;

            var expected = 3;

            var sut = new Q0070_ClimbingStairs();

            // act
            var actual = sut.ClimbStairs(n);

            // assert
            actual.Should().Be(expected);
        }

        [TestMethod()]
        public void ClimbStairs_n輸入1_應回傳1()
        {
            // arrange
            var n = 1;

            var expected = 1;

            var sut = new Q0070_ClimbingStairs();

            // act
            var actual = sut.ClimbStairs(n);

            // assert
            actual.Should().Be(expected);
        }

        [TestMethod()]
        public void ClimbStairs_n輸入0_應回傳0()
        {
            // arrange
            var n = 0;

            var expected = 0;

            var sut = new Q0070_ClimbingStairs();

            // act
            var actual = sut.ClimbStairs(n);

            // assert
            actual.Should().Be(expected);
        }

        [TestMethod()]
        public void ClimbStairs_n輸入4_應回傳5()
        {
            // arrange
            var n = 4;

            var expected = 5;

            var sut = new Q0070_ClimbingStairs();

            // act
            var actual = sut.ClimbStairs(n);

            // assert
            actual.Should().Be(expected);
        }

        [TestMethod()]
        public void ClimbStairs_n輸入5_應回傳8()
        {
            // arrange
            var n = 5;

            var expected = 8;

            var sut = new Q0070_ClimbingStairs();

            // act
            var actual = sut.ClimbStairs(n);

            // assert
            actual.Should().Be(expected);
        }

        [TestMethod()]
        public void ClimbStairs_n輸入6_應回傳13()
        {
            // arrange
            var n = 6;

            var expected = 13;

            var sut = new Q0070_ClimbingStairs();

            // act
            var actual = sut.ClimbStairs(n);

            // assert
            actual.Should().Be(expected);
        }

        [TestMethod()]
        public void ClimbStairs_n輸入負數_應拋出ArgumentException()
        {
            // arrange
            var n = -3;

            var sut = new Q0070_ClimbingStairs();

            // act
            Action actual = () => sut.ClimbStairs(n);

            // assert
            actual.Should().Throw<ArgumentException>()
                  .Which.Message.Should().Contain("不可為負數");
        }
    }
}