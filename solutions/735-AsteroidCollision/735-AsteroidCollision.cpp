// Last updated: 10/9/2026, 12:08:23 AM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int> st;

        for(int i=0; i<asteroids.size(); i++){
            
            if(st.empty()){
                st.push(asteroids[i]);
                continue;
            }

            if(asteroids[i] > 0 && st.top() > 0) {
                
                st.push(asteroids[i]);
                continue;

            } else if(asteroids[i] < 0 && st.top() < 0) {
                
                st.push(asteroids[i]);
                continue;

            } else if(asteroids[i] > 0 && st.top() < 0) {
                st.push(asteroids[i]);
                continue;
            }
            if(asteroids[i] < 0 && st.top() > 0) {
                if(abs(asteroids[i]) > abs(st.top())){
                    st.pop();
                    i--;
                } else if(abs(asteroids[i]) < abs(st.top())){
                    continue;
                } else {
                    st.pop();
                    continue;
                }
            }
        }

        vector<int> result;

        result.resize(st.size());
    
        auto it = result.rbegin(); 
        while (!st.empty()) {
            *it = st.top();
            st.pop();
            ++it;
        }

        return result;
    }
};