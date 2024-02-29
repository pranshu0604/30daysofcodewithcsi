#include <iostream>
#include <stack>
#include <string>

bool isValidParentheses(const std::string& s) {
    std::stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) {
                return false;
            }
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') || 
                (c == ']' && top != '[') || 
                (c == '}' && top != '{')) {
                return false;
            }
        }
    }

    return st.empty();
}

// Example usage:
int main() {
    std::string parentheses = "{[()]}";
    bool isValid = isValidParentheses(parentheses);
    if (isValid) {
        std::cout << "The given string of parentheses is valid." << std::endl;
    } else {
        std::cout << "The given string of parentheses is not valid." << std::endl;
    }
    return 0;
}
