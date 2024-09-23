class Solution {
private:
    bool check(int x, vector<int>& cit) {
        // We want to check if there are at least (x + 1) papers with at least x citations
        return (cit[x] >= x + 1);
    }

public:
    int hIndex(vector<int>& cit) {
        int n = cit.size();
        
        sort(cit.begin(), cit.end(), greater<int>());
        
        int lo = 0, hi = n - 1;
        int ans = 0;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (check(mid, cit)) {
                ans = mid + 1; // Update ans to mid + 1
                lo = mid + 1;  // Search for a larger h-index
            } else {
                hi = mid - 1;  // Search for a smaller h-index
            }
        }
        return ans;
    }
};
