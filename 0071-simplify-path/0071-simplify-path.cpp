class Solution {
public:
    string simplifyPath(string path) {

        stack<string> st;
        string str;

        for (int i = 0; i <= path.size(); i++) {

            if (i == path.size() || path[i] == '/') {

                if (str == "" || str == ".") {
                }
                else if (str == "..") {

                    if (!st.empty())
                        st.pop();
                }
                else {
                    st.push(str);
                }

                str = "";
            }
            else {
                str += path[i];
            }
        }

        vector<string> v;

        while (!st.empty()) {
            v.push_back(st.top());
            st.pop();
        }

        reverse(v.begin(), v.end());

        string ans = "";

        for (string s : v) {
            ans += "/";
            ans += s;
        }

        if (ans == "")
            return "/";

        return ans;
    }
};