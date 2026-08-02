class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end()) ;
        int n  = arr.size() ;
        vector<vector<int>>res ;
        int st1 = arr[0][0];
        int end1 = arr[0][1];

        for(int i =1 ; i<n ; i++){
            int st2 = arr[i][0];
            int end2 = arr[i][1];
            if(end1 >=st2){
                st1 = st1 ;
                end1 = max(end1,end2);
                continue ;
            }
            res.push_back({st1,end1});
            st1 = st2 ;
            end1 = end2 ;
        }
        res.push_back({st1,end1});
        return res;
    }
};