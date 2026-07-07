class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        unordered_map<int,int>m;
        vector<int>ans;
        int n = arr.size();
        for(int i = 0 ; i<n ; i++){
            int first = arr[i];
            int sec = tar - arr[i];

        if(m.find(sec) !=m.end()){
            ans.push_back(m[sec]);
            ans.push_back(i);
        }
        m[first] = i;
        }
        return ans ;
    }
};