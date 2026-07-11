class Solution {
public:
    int trap(vector<int>& arr) {
        int n =  arr.size();
        int l = 0 , r =n-1 ,lmax = 0 , rmax =0;
        int water = 0;
        while(l<r)
        {
            lmax = max(lmax , arr[l]);
            rmax = max(rmax , arr[r]);

            if(lmax<rmax)
            {
                water += lmax-arr[l];
                l++;
            }
            else{
                water += rmax -arr[r];
                r--;
            }
        }
        return water ;
    }
};