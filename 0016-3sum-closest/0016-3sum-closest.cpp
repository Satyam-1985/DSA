class Solution {
public:
    int threeSumClosest(vector<int>& arr, int tar) {
        int maxdiff = INT_MAX;
        int refsum , diff , sum;

        int n = arr.size();

        sort(arr.begin() ,arr.end());

        for(int i =0  ; i<n ; i++){
            int j = i+1;
            int k = n-1;

            while(j<k){
                sum = arr[i] +arr[j] +arr[k];
                diff = abs(sum-tar);
                if(diff < maxdiff){
                    maxdiff = diff;
                    refsum = sum;
                }
                if(sum < tar){
                    j++;
                }
                else if(sum > tar ){
                    k--;

                }
                else{
                    j++;
                    k--;
                }
            }
        }
        return refsum;
    }
};