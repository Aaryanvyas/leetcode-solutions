class Solution {
public:


        void solve(int open , int close , int n , string s , vector<string>& ans){

            //base case , just return the answer directly
            if(open == n && close == n){
                ans.push_back(s);
                return;
            }
            

            //1st case backtracking 
            if(open < n){
                solve(open + 1 , close , n , s + "(" , ans);
            }

            //2nd case
            if(close < open){
                solve(open , close + 1 , n , s +")" , ans);
            }
        }

        
        vector<string> generateParenthesis(int n) {
        vector<string> ans;

        solve(0 , 0, n , "" , ans);

        return ans;
    }

};