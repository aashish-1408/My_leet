class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        int n = path.size(), i = 0;

        while (i < n) {
            while (i < n && path[i] == '/') i++;
            if (i >= n) break;

            string temp = "";
            while (i < n && path[i] != '/') {
                temp += path[i++];
            }

            if (temp == ".") {
                continue;
            } else if (temp == "..") {
                if (!st.empty()) st.pop();
            } else {
                st.push(temp);
            }
        }

        string res = "";
        while (!st.empty()) {
            res = "/" + st.top() + res;
            st.pop();
        }

        return res.empty() ? "/" : res;
    }
};