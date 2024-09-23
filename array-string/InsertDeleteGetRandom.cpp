class RandomizedSet {
public:
    int ind=0;
    unordered_map<int,int> mp; 
    vector<int> arr;

    RandomizedSet() {
        ind=0;
        mp.clear();
        arr.clear();
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end()) return false;
        int n = arr.size();
        mp[val]=n;
        arr.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        int n = arr.size();
        if(mp.find(val)==mp.end()) return false;
        int i = mp[val];
        swap(arr[i],arr[n-1]);
        // ind--;
        mp[arr[i]] = i;
        mp.erase(val);
        arr.pop_back();
        return true;
    }
    
    int getRandom() {
        int n = arr.size();
        int i = rand()%n;
        return arr[i];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */