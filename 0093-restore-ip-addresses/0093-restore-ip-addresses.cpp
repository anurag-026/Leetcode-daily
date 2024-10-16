class Solution {
private:
    int n;
    string s;
    vector<string> result;
    vector<string> segments;

    bool valid(const string& segment) {
        int m = segment.length();  
        if (m > 3) 
            return false;
         
        if (segment[0] == '0') {
            return m == 1;
        }
        return stoi(segment) <= 255;
    }

    void updateSegment(int currDot) {
        string segment = s.substr(currDot + 1, n - currDot - 1);
        if (valid(segment)) {            
            segments.push_back(segment);  
            
            string ip = segments[0];
            for (size_t i = 1; i < segments.size(); ++i) {
                ip += "." + segments[i];
            }
            result.push_back(ip);
            segments.pop_back();  
        }
    }

    void backtrack(int prevDot, int dots) {
        
        int maxPos = min(n - 1, prevDot + 4);
        for (int currDot = prevDot + 1; currDot < maxPos; ++currDot) {
            string segment = s.substr(prevDot + 1, currDot - prevDot);
            if (valid(segment)) {
                segments.push_back(segment);  
                 
                if (dots - 1 == 0)
                    updateSegment(currDot);
                else
                   
                    backtrack(currDot, dots - 1);
                segments.pop_back();  
            }
        }
    }

public:
    vector<string> restoreIpAddresses(string s) {
        n = s.length();
        this->s = s;
        result.clear();
        segments.clear();
        backtrack(-1, 3);
        return result;
    }
};