class Solution {
public:
    bool isValid(string s) {
             stack<char>st;
        unordered_map<char,char>mp = {
            {']','['},
            {')','('},
            {'}','{'}
        }; 
      for(char ch:s){
          if(ch == '(' || ch== '[' || ch =='{')
              st.push(ch);
          else
          {
              if(st.empty() || st.top() != mp[ch])
              return false;
              st.pop();
          }
      }
      return st.empty();
    }
};