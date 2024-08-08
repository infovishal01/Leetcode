// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false


class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto c : s){
            if(st.empty()){
                st.push(c);
            }
            else if( (st.top() == '(' && c == ')') || 
                     (st.top() == '[' && c == ']') || 
                     (st.top() == '{' && c == '}') ){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        
        if(st.size() == 0)
            return true;
        
        return false;
    }
};