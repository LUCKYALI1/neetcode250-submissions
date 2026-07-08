class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int gre_right_ele = arr[n-1];
        arr[n-1] = -1;

        for(int i = n - 2 ; i >= 0 ; i--){
            int temp = arr[i];
            arr[i] = gre_right_ele;
            if(temp > gre_right_ele){
                gre_right_ele = temp;
            }
        }
        return arr ;
    }
};