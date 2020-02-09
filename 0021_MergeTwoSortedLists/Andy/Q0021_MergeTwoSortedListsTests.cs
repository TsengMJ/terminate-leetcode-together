using FluentAssertions;
using LeetCode.Common;
using LeetCode.Easy;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace LeetCode.EasyTests
{
    [TestClass()]
    public class Q0021_MergeTwoSortedListsTests
    {
        [TestMethod()]
        public void MergeTwoLists_l1輸入124_l2輸入134_應回傳112344()
        {
            // arrange
            var l1 = new ListNode
            {
                Data = 1,
                Next = new ListNode
                {
                    Data = 2,
                    Next = new ListNode
                    {
                        Data = 4
                    }
                }
            };
            var l2 = new ListNode
            {
                Data = 1,
                Next = new ListNode
                {
                    Data = 3,
                    Next = new ListNode
                    {
                        Data = 4
                    }
                }
            };

            var expect = new ListNode
            {
                Data = 1,
                Next = new ListNode
                {
                    Data = 1,
                    Next = new ListNode
                    {
                        Data = 2,
                        Next = new ListNode
                        {
                            Data = 3,
                            Next = new ListNode
                            {
                                Data = 4,
                                Next = new ListNode
                                {
                                    Data = 4
                                }
                            }
                        }
                    }
                }
            };

            var sut = new Q0021_MergeTwoSortedLists();

            // act
            var actual = sut.MergeTwoLists(l1, l2);

            // assert
            actual.Should().BeEquivalentTo(expect);
        }

        [TestMethod()]
        public void MergeTwoLists_l1輸入null_l2輸入null_應回傳null()
        {
            // arrange
            ListNode l1 = null;
            ListNode l2 = null;

            var sut = new Q0021_MergeTwoSortedLists();

            // act
            var actual = sut.MergeTwoLists(l1, l2);

            // assert
            actual.Should().BeNull();
        }

        [TestMethod()]
        public void MergeTwoLists_l1輸入0_l2輸入null_應回傳0()
        {
            // arrange
            var l1 = new ListNode
            {
                Data = 0
            };
            ListNode l2 = null;

            var expect = new ListNode
            {
                Data = 0
            };

            var sut = new Q0021_MergeTwoSortedLists();

            // act
            var actual = sut.MergeTwoLists(l1, l2);

            // assert
            actual.Should().BeEquivalentTo(expect);
        }

        [TestMethod()]
        public void MergeTwoLists_l1輸入null_l2輸入0_應回傳0()
        {
            // arrange
            ListNode l1 = null;
            var l2 = new ListNode
            {
                Data = 0
            };

            var expect = new ListNode
            {
                Data = 0
            };

            var sut = new Q0021_MergeTwoSortedLists();

            // act
            var actual = sut.MergeTwoLists(l1, l2);

            // assert
            actual.Should().BeEquivalentTo(expect);
        }

        [TestMethod()]
        public void MergeTwoLists_l1輸入2_l2輸入1_應回傳12()
        {
            // arrange
            var l1 = new ListNode
            {
                Data = 2
            };
            var l2 = new ListNode
            {
                Data = 1
            };

            var expect = new ListNode
            {
                Data = 1,
                Next = new ListNode
                {
                    Data = 2
                }
            };

            var sut = new Q0021_MergeTwoSortedLists();

            // act
            var actual = sut.MergeTwoLists(l1, l2);

            // assert
            actual.Should().BeEquivalentTo(expect);
        }

        [TestMethod()]
        public void MergeTwoLists_l1輸入5_l2輸入124_應回傳1245()
        {
            // arrange
            var l1 = new ListNode
            {
                Data = 5
            };
            var l2 = new ListNode
            {
                Data = 1,
                Next = new ListNode
                {
                    Data = 2,
                    Next = new ListNode
                    {
                        Data = 4
                    }
                }
            };

            var expect = new ListNode
            {
                Data = 1,
                Next = new ListNode
                {
                    Data = 2,
                    Next = new ListNode
                    {
                        Data = 4,
                        Next = new ListNode
                        {
                            Data = 5
                        }
                    }
                }
            };

            var sut = new Q0021_MergeTwoSortedLists();

            // act
            var actual = sut.MergeTwoLists(l1, l2);

            // assert
            actual.Should().BeEquivalentTo(expect);
        }
    }
}