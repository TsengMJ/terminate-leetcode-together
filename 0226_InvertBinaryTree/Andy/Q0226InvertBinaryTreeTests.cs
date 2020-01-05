using FluentAssertions;
using LeetCode.Easy;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace LeetCode.EasyTests
{
    [TestClass()]
    public class Q0226InvertBinaryTreeTests
    {
        [TestMethod()]
        public void InvertTreeTest_root輸入有值node_應回傳對換後node()
        {
            // arrange
            var root = new Node
            {
                Data = 4,
                Left = new Node
                {
                    Data = 2,
                    Left = new Node
                    {
                        Data = 1
                    },
                    Right = new Node
                    {
                        Data = 3
                    }
                },
                Right = new Node
                {
                    Data = 7,
                    Left = new Node
                    {
                        Data = 6
                    },
                    Right = new Node
                    {
                        Data = 9
                    }
                }
            };

            var expect = new Node
            {
                Data = 4,
                Left = new Node
                {
                    Data = 7,
                    Left = new Node
                    {
                        Data = 9
                    },
                    Right = new Node
                    {
                        Data = 6
                    }
                },
                Right = new Node
                {
                    Data = 2,
                    Left = new Node
                    {
                        Data = 3
                    },
                    Right = new Node
                    {
                        Data = 1
                    }
                }
            };

            var sut = new Q0226InvertBinaryTree();

            // act
            var actual = sut.InvertTree(root);

            // assert
            actual.Should().NotBeNull();
            actual.Should().BeEquivalentTo(expect);
        }

        [TestMethod()]
        public void InvertTreeTest_root輸入null_應回傳null()
        {
            // arrange
            Node root = null;

            var sut = new Q0226InvertBinaryTree();

            // act
            var actual = sut.InvertTree(root);

            // assert
            actual.Should().BeNull();
        }
    }
}