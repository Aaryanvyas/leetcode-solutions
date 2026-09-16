class Solution {
public:
    string removeKdigits(string num, int k) {

        string st;

        for(int i = 0; i< num.size(); i++){
            char current = num[i];
             while(k > 0 && !st.empty() && st.back() > current){
                st.pop_back();
                k--;
            }

            st.push_back(current);
        }

    
           

      
        while(k > 0){
            st.pop_back();
            k--;
        }

       
        int start = 0;
        while(start < st.size() && st[start] == '0'){
            start++;
        }

        if(start == st.size()){
            return "0";
        }
        return st.substr(start);
    }
};