#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

}

bool isValid(string s) {
	if (s.size() % 2 == 1)
            return false;

	stack<char> stack;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
			stack.push(s[i]);
			continue;
		}
			
		else if (stack.size() == 0)
			return false;

		else if (s[i] - stack.top() == 1 || s[i] - stack.top() == 2) {
			stack.pop();
			continue;
		}
		
		return false;
	}

	if (stack.size() != 0)
		return false;

	return true;
}
