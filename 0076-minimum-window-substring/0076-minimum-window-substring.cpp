class Solution {
public:
    string minWindow(string s, string t) {

        vector<int> hash(256, 0);
        int left = 0, right = 0;
        int minlen = INT_MAX, cnt = 0, Sindex = -1;
      int n = s.size(), m = t.size();

        for (int i = 0; i < m; i++){
            hash[t[i]]++;
        }

        while (right < n){
              if (hash[s[right]] > 0){
                cnt++;
            }
            hash[s[right]]--;

            while (cnt == m){

                if (right - left + 1 < minlen){
                    minlen = right - left + 1;
                    Sindex = left;
                }
                    hash[s[left]]++;

                if (hash[s[left]] > 0){
                    cnt--;
                }   left++;
            }

            right++;
        }

        if (Sindex == -1){
            return "";
        }

        return s.substr(Sindex, minlen);
    }
};