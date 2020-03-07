using FluentAssertions;
using LeetCode.Common;
using LeetCode.Easy;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace LeetCode.EasyTests
{
    [TestClass()]
    public class Q0543_DiameterOfBinaryTreeTests
    {
        [TestMethod()]
        public void DiameterOfBinaryTree_root輸入12345的1_應回傳3()
        {
            // arrange
            var root = new TreeNode
            {
                Data = 1,
                Left = new TreeNode
                {
                    Data = 2,
                    Left = new TreeNode
                    {
                        Data = 4,
                    },
                    Right = new TreeNode
                    {
                        Data = 5
                    }
                },
                Right = new TreeNode
                {
                    Data = 3
                }
            };

            var expected = 3;

            var sut = new Q0543_DiameterOfBinaryTree();

            // act
            var actual = sut.DiameterOfBinaryTree(root);

            // assert
            actual.Should().Be(expected);
        }

        [TestMethod()]
        public void DiameterOfBinaryTree_root輸入Empty_應回傳0()
        {
            // arrange
            var root = new TreeNode();

            var expected = 0;

            var sut = new Q0543_DiameterOfBinaryTree();

            // act
            var actual = sut.DiameterOfBinaryTree(root);

            // assert
            actual.Should().Be(expected);
        }

        [TestMethod()]
        public void DiameterOfBinaryTree_root輸入null_應回傳0()
        {
            // arrange
            TreeNode root = null;

            var expected = 0;

            var sut = new Q0543_DiameterOfBinaryTree();

            // act
            var actual = sut.DiameterOfBinaryTree(root);

            // assert
            actual.Should().Be(expected);
        }
    }
}