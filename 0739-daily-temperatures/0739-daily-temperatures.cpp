class Solution {
public:
    stack<pair<int,int>> st;
   

    vector<int> dailyTemperatures(vector<int>& temperatures) {
            int n = temperatures.size();
            vector<int> answer(n,0);

        for(int i = n-1; i>=0; i--){

        
        while(!st.empty() && st.top().first <= temperatures[i] ){
            st.pop();
        }

        if(st.empty()){
            answer[i] = 0;

        }
        else{
            answer[i] = st.top().second - i;
        }

        st.push({temperatures[i],i});

       
        
    }
        return answer;
}

};