class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n = cardPoints.size();

        int sum = 0;

        for(int i = 0; i < k; i++){

            sum += cardPoints[i];
        }

        int maxsum = sum;
        int right = n - 1;

       
        for(int i = k - 1; i >= 0; i--){

            sum -= cardPoints[i];

            sum += cardPoints[right];

            maxsum = max(maxsum, sum);

            right--;
        }

        return maxsum;
    }
};