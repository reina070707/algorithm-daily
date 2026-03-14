#include <stack>
#include <string>
#include <string_view>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string_view s) {
        static const unordered_map<char, char> bracket_map = {
            {')', '('},
            {'}', '{'},
            {']', '['},
        };

        stack<char> open_brackets;

        for (char c : s) {
            // closed bracket judge
            if (auto it = bracket_map.find(c); it != bracket_map.end()) {
                // when closed bracket
                const char expected_open = it->second;

                if (open_brackets.empty() || open_brackets.top() != expected_open) {
                    return false;
                }
                open_brackets.pop();
            } else {
                // when open brackets
                open_brackets.push(c);
            }
        }

        return open_brackets.empty();
    }
};
