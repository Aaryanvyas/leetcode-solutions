class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        set<int> s;

        for (int i = 0; i < digits.size(); i++) {
            
            // First digit cannot be 0
            if (digits[i] == 0)
                continue;

            for (int j = 0; j < digits.size(); j++) {
                
                // Cannot use the same digit copy
                if (j == i)
                    continue;

                for (int k = 0; k < digits.size(); k++) {
                    
                    // Cannot reuse the same digit copy
                    if (k == i || k == j)
                        continue;

                    // Last digit must be even
                    if (digits[k] % 2 != 0)
                        continue;

                    int num = digits[i] * 100
                            + digits[j] * 10
                            + digits[k];

                    s.insert(num);
                }
            }
        }

        return s.size();
    }
};