class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;
      
        

        for(int i = 0; i< asteroids.size(); i++){
            int current = asteroids[i];
            bool alive = true;
            while( !st.empty() && st.top() > 0 && current < 0){
                if(abs(current) > abs(st.top())){
                    st.pop();
                }
                else if(abs(current) < abs(st.top())){
                    alive = false;
                    break;
                }
                
                  else{
                        st.pop();
                        alive = false;
                        break;
                        //remove both of them 
                    }
                
            }
            if(alive){
                st.push(current);
            }
           
        }
        vector<int> ans;

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};