class Solution {
public:
    std::vector<int> asteroidCollision(std::vector<int>& asteroids) {
        std::vector<int> res;
        for (int i = 0; i < asteroids.size(); ++i) {
            int cur = asteroids[i];
            while (!res.empty() && res.back() > 0 && cur < 0) {
                if (res.back() < -cur) {
                    res.pop_back();
                    continue;
                } else if (res.back() == -cur) {
                    res.pop_back();
                }
                cur = 0;
            }
            if (cur != 0) {
                res.push_back(cur);
            }
        }
        return res;
    }
};