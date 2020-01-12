using FluentAssertions;
using LeetCode.Easy;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace LeetCode.EasyTests
{
    [TestClass()]
    public class Q0283_MoveZeroesTests
    {
        [TestMethod()]
        public void MoveZeroes_nums輸入正常數字陣列_應為處理後數字陣列()
        {
            // arrange
            var nums = new int[] { 0, 1, 0, 3, 12 };

            var expect = new int[] { 1, 3, 12, 0, 0 };

            var sut = new Q0283_MoveZeroes();

            // act
            sut.MoveZeroes(nums);

            // assert
            nums.Should().NotBeEmpty();
            nums.Should().Equal(expect);
        }

        [TestMethod()]
        public void MoveZeroes_nums輸入空陣列_應為空陣列()
        {
            // arrange
            var nums = new int[] { };

            var sut = new Q0283_MoveZeroes();

            // act
            sut.MoveZeroes(nums);

            // assert
            nums.Should().BeEmpty();
        }

        [TestMethod()]
        public void MoveZeroes_nums輸入零陣列_應為零陣列()
        {
            // arrange
            var nums = new int[] { 0, 0, 0, 0, 0 };

            var expect = new int[] { 0, 0, 0, 0, 0 };

            var sut = new Q0283_MoveZeroes();

            // act
            sut.MoveZeroes(nums);

            // assert
            nums.Should().NotBeEmpty();
            nums.Should().Equal(expect);
        }

        [TestMethod()]
        public void MoveZeroes_nums輸入不含零陣列_應為原數字陣列()
        {
            // arrange
            var nums = new int[] { 1, 11, 3, 15, 4 };

            var expect = new int[] { 1, 11, 3, 15, 4 };

            var sut = new Q0283_MoveZeroes();

            // act
            sut.MoveZeroes(nums);

            // assert
            nums.Should().NotBeEmpty();
            nums.Should().Equal(expect);
        }

        [TestMethod()]
        public void MoveZeroesNew01輸入正常數字陣列_應為處理後數字陣列()
        {
            // arrange
            var nums = new int[] { 0, 1, 0, 3, 12 };

            var expect = new int[] { 1, 3, 12, 0, 0 };

            var sut = new Q0283_MoveZeroes();

            // act
            sut.MoveZeroesNew01(nums);

            // assert
            nums.Should().NotBeEmpty();
            nums.Should().Equal(expect);
        }

        [TestMethod()]
        public void MoveZeroesNew01輸入空陣列_應為空陣列()
        {
            // arrange
            var nums = new int[] { };

            var sut = new Q0283_MoveZeroes();

            // act
            sut.MoveZeroesNew01(nums);

            // assert
            nums.Should().BeEmpty();
        }

        [TestMethod()]
        public void MoveZeroesNew01輸入零陣列_應為零陣列()
        {
            // arrange
            var nums = new int[] { 0, 0, 0, 0, 0 };

            var expect = new int[] { 0, 0, 0, 0, 0 };

            var sut = new Q0283_MoveZeroes();

            // act
            sut.MoveZeroesNew01(nums);

            // assert
            nums.Should().NotBeEmpty();
            nums.Should().Equal(expect);
        }

        [TestMethod()]
        public void MoveZeroesNew01輸入不含零陣列_應為原數字陣列()
        {
            // arrange
            var nums = new int[] { 1, 11, 3, 15, 4 };

            var expect = new int[] { 1, 11, 3, 15, 4 };

            var sut = new Q0283_MoveZeroes();

            // act
            sut.MoveZeroesNew01(nums);

            // assert
            nums.Should().NotBeEmpty();
            nums.Should().Equal(expect);
        }
    }
}