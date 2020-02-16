using System;
using FluentAssertions;
using LeetCode.Easy;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace LeetCode.EasyTests
{
    [TestClass()]
    public class Q0121_BestTimeToBuyAndSellStockTests
    {
        [TestMethod()]
        public void MaxProfit_prices輸入715364_應回傳5()
        {
            // arrange
            var prices = new int[] { 7, 1, 5, 3, 6, 4 };
            var expect = 5;

            var sut = new Q0121_BestTimeToBuyAndSellStock();

            // act
            var actual = sut.MaxProfit(prices);

            // assert
            actual.Should().Be(expect);
        }

        [TestMethod()]
        public void MaxProfit_prices輸入76431_應回傳5()
        {
            // arrange
            var prices = new int[] { 7, 6, 4, 3, 1 };
            var expect = 0;

            var sut = new Q0121_BestTimeToBuyAndSellStock();

            // act
            var actual = sut.MaxProfit(prices);

            // assert
            actual.Should().Be(expect);
        }

        [TestMethod()]
        public void MaxProfit_prices輸入null_應拋出ArgumentNullException()
        {
            // arrange
            int[] prices = null;

            var sut = new Q0121_BestTimeToBuyAndSellStock();

            // act
            Action actual = () => sut.MaxProfit(prices);

            // assert
            actual.Should().Throw<ArgumentNullException>()
                  .Which.Message.Should().Contain("不能為null");
        }

        [TestMethod()]
        public void MaxProfit_prices輸入empty_應回傳0()
        {
            // arrange
            var prices = new int[] { };
            var expect = 0;

            var sut = new Q0121_BestTimeToBuyAndSellStock();

            // act
            var actual = sut.MaxProfit(prices);

            // assert
            actual.Should().Be(expect);
        }
    }
}