class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n, 0); // Initialize with 0 as default
        stack<int> st;            // To store the indices of the days
        
        for (int i = 0; i < n; ++i) {
            // While stack is not empty and current temp is warmer than the temp at stack's top index
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prevIndex = st.top();
                st.pop();
                answer[prevIndex] = i - prevIndex; // Distance between the days
            }
            // Push the current day's index onto the stack
            st.push(i);
        }
        
        return answer;
    }
};