using FluentAssertions;
using LeetCode.Easy;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace LeetCode.EasyTests
{
    [TestClass()]
    public class Q0104MaximumDepthOfBinaryTreeTests
    {
        [TestMethod()]
        public void MaxDepthTest_root輸入有值node_應回傳適當值()
        {
            // arrange
            var root = new Node
            {
                Data = 3,
                Left = new Node
                {
                    Data = 9
                },
                Right = new Node
                {
                    Data = 20,
                    Left = new Node
                    {
                        Data = 15
                    },
                    Right = new Node
                    {
                        Data = 7
                    }
                }
            };

            var expect = 3;

            var sut = new Q0104MaximumDepthOfBinaryTree();

            // act
            var actual = sut.MaxDepth(root);

            // assert
            actual.Should().Be(expect);
        }

        [TestMethod()]
        public void MaxDepthTest_root輸入為null_應回傳0()
        {
            // arrange
            Node root = null;

            var expect = 0;

            var sut = new Q0104MaximumDepthOfBinaryTree();

            // act
            var actual = sut.MaxDepth(root);

            // assert
            actual.Should().Be(expect);
        }
    }
}