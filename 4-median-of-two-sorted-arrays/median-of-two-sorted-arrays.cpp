class Solution {
public:
    vector<int> merge(vector<int>& A, vector<int>& B) {
    vector<int> result;

    int i = 0;
    int j = 0;

    while (i < A.size() && j < B.size()) {
        if (A[i] <= B[j]) {
            result.push_back(A[i]);
            i++;
        } else {
            result.push_back(B[j]);
            j++;
        }
    }

    while (i < A.size()) {
        result.push_back(A[i]);
        i++;
    }

    while (j < B.size()) {
        result.push_back(B[j]);
        j++;
    }

    return result;
}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result = merge(nums1, nums2);
        if (result.size()%2 != 0){
            return result[result.size()/2];
        }
        else{
            return double (result[result.size()/2] + result[result.size()/2 - 1])/2;
        }
    }
};