class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        tmp_stack = []
        for i in range(len(s)):
            print("=== %d ===" % (i))
            print("%d th in str : %s" % (i, s[i]))
            print("before action stack = ",tmp_stack)
            if self.isLeft(s[i]) == True:
                tmp_stack.append(s[i])
                print("after  action stack = ",tmp_stack)
            else:
                if len(tmp_stack) == 0:
                    return False
                ch = s[i]
                op = tmp_stack[-1]
                print("the last element in stack = ",op)
                print("compare %s and %s" %(op, ch))
                if not self.isSame(op, ch):
                    return False
                tmp_stack.pop(-1)
                print("after  action stack = ",tmp_stack)
   
        return len(tmp_stack)==0
                
        
    def isLeft(self, ch):
        if ch in ["(", "[" ,"{"]:
            return True
        else:
            return False
        
    def isSame(self, op, ch):
        if op == "(" and ch == ")":
            return True
        elif op == "[" and ch == "]":
            return True
        elif op == "{" and ch == "}":
            return True
        else:
            return False



s = Solution()
print(s.isValid('{[()]}'))
print(s.isValid('{[}]'))
print(s.isValid('}]'))
