class Solution {
public:
    vector<int> diffWaysToCompute(string exp) { 
        unordered_map<string, vector<int> > memo;
        return helper(exp, memo);
    }
    vector<int> helper(string exp, unordered_map<string, vector<int> > & memo) {
        
        if(memo.find(exp) != memo.end()) {
            return memo[exp];
        }
        vector<int> ans;
        const int size = exp.size();
        for(int i = 0; i < size; ++i) {
            if('+' == exp[i] || '-' == exp[i] || '*' == exp[i]) {
                vector<int> ansl = helper(exp.substr(0, i), memo );   
                vector<int> ansr = helper(exp.substr(i+1), memo ); 
                
                for(int l : ansl) {
                    for(int r : ansr) {
                        int curAns;
                        if('+' == exp[i]) {
                            curAns = l + r; 
                        } else if ('-' == exp[i]) { 
                            curAns = l - r;
                        } else { 
                            curAns = l * r;
                        }
                        ans.push_back(curAns);
                    }
                }
                
            }
         }
        
        if(0 == ans.size()) {
            ans.push_back(atoi(exp.c_str()));
        }

        memo[exp] = ans;
        return ans;
    }
};