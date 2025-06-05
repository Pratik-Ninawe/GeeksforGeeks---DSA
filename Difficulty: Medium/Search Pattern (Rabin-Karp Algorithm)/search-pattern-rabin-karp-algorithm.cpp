class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        vector<int> result;
        int d = 26;  // Since only lowercase letters a-z
        int q = 1000000007;  // A large prime
        int m = pat.size(), n = txt.size();

        if (m > n) return result;

        long long h = 1, p = 0, t = 0;

        // h = pow(d, m-1) % q
        for (int i = 0; i < m - 1; i++) {
            h = (h * d) % q;
        }

        // Initial hash values
        for (int i = 0; i < m; i++) {
            p = (d * p + (pat[i] - 'a')) % q;
            t = (d * t + (txt[i] - 'a')) % q;
        }

        // Slide the pattern over text
        for (int i = 0; i <= n - m; i++) {
            if (p == t) {
                // Verify by direct comparison to handle hash collisions
                bool match = true;
                for (int j = 0; j < m; j++) {
                    if (txt[i + j] != pat[j]) {
                        match = false;
                        break;
                    }
                }
                if (match) result.push_back(i + 1); // 1-based indexing
            }

            // Calculate hash for next window
            if (i < n - m) {
                t = (d * (t - (txt[i] - 'a') * h) + (txt[i + m] - 'a')) % q;

                if (t < 0)
                    t += q;
            }
        }

        return result;
    }
};
