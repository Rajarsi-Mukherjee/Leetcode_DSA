class Solution {
public:
    void parenthesis(int n, int left, int right, vector<string>& ans, string &temp) {
        if (left + right == 2 * n) {  // Corrected conditional statement
            ans.push_back(temp);
            return;
        }
        if (left < n) {
            temp.push_back('(');
            parenthesis(n, left + 1, right, ans, temp);
            temp.pop_back();
        }
        if (right < left) {  // Corrected logic for adding closing parenthesis
            temp.push_back(')');
            parenthesis(n, left, right + 1, ans, temp);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        parenthesis(n, 0, 0, ans, temp);
        return ans;
    }
};
