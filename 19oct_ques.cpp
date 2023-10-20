class NestedIterator {
public:
 vector<int> ans;
    int k=0;

    void solve(vector<NestedInteger> &n){
        for(int i=0;i<n.size();i++){
            if(n[i].isInteger()){
                ans.push_back(n[i].getInteger());
            } else {
               solve(n[i].getList()); 
            }
        }
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
 solve(nestedList);
    }
    
    int next() {
       return ans[k++]; 
    }
    
    bool hasNext() {
       if(k<ans.size()) return true;
        return false; 
    }
};

/**
