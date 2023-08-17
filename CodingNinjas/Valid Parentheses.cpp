// link: https://www.codingninjas.com/studio/problems/valid-parenthesis_795104?leftPanelTab=0

bool isValidParenthesis(string s)
{
    
    stack<char> stk;
    for (int i=0; i<s.size(); i++){
        if (s[i]=='(' || s[i]=='{' || s[i]=='[') stk.push(s[i]);
        else if (stk.empty()) return false;
        else {
          if (s[i] == ')' && stk.top() == '(') stk.pop();
          else if (s[i] == '}' && stk.top() == '{') stk.pop();
          else if (s[i] == ']' && stk.top() == '[') stk.pop();
          else return false;
        }
    }
    return stk.empty();

}