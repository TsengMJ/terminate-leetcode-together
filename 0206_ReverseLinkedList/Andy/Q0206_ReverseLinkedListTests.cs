using FluentAssertions;
using LeetCode.Common;
using LeetCode.Easy;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace LeetCode.EasyTests
{
    [TestClass()]
    public class Q0206_ReverseLinkedListTests
    {
        [TestMethod()]
        public void ReverseList_head輸入正常節點_應回傳反轉後節點()
        {
            // arrange
            var head = new ListNode
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
                                Data = 5
                            }
                        }
                    }
                }
            };

            var expect = new ListNode
            {
                Data = 5,
                Next = new ListNode
                {
                    Data = 4,
                    Next = new ListNode
                    {
                        Data = 3,
                        Next = new ListNode
                        {
                            Data = 2,
                            Next = new ListNode
                            {
                                Data = 1
                            }
                        }
                    }
                }
            };

            var sut = new Q0206_ReverseLinkedList();

            // act
            var actual = sut.ReverseList(head);

            // assert
            actual.Should().NotBeNull();
            actual.Should().BeEquivalentTo(expect);
        }

        [TestMethod()]
        public void ReverseList_head輸入null_應回傳null()
        {
            // arrange
            ListNode head = null;

            var sut = new Q0206_ReverseLinkedList();

            // act
            var actual = sut.ReverseList(head);

            // assert
            actual.Should().BeNull();
        }

        [TestMethod()]
        public void ReverseList_head輸入單一節點_應回傳原本節點()
        {
            // arrange
            var head = new ListNode
            {
                Data = 3
            };

            var expect = new ListNode
            {
                Data = 3
            };

            var sut = new Q0206_ReverseLinkedList();

            // act
            var actual = sut.ReverseList(head);

            // assert
            actual.Should().NotBeNull();
            actual.Should().BeEquivalentTo(expect);
        }
    }
}