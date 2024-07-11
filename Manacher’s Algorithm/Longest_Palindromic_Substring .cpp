#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestPalindromicSubstring(const string& s) {
    // Transform s into t with sentinel characters to avoid bounds checking
    string t = "^#";
    for (char c : s) {
        t += c;
        t += '#';
    }
    t += '$';

    int n = t.size();
    vector<int> p(n, 0);
    int c = 0, r = 0; // current center and right limit
    int maxLen = 0;
    int centerIndex = 0;

    for (int i = 1; i < n - 1; ++i) {
        p[i] = (r > i) ? min(r - i, p[2 * c - i]) : 0;

        // Expand around center i
        while (t[i + p[i] + 1] == t[i - p[i] - 1])
            ++p[i];

        // Update center and right limit
        if (i + p[i] > r) {
            c = i;
            r = i + p[i];
        }

        // Update max length and center index
        if (p[i] > maxLen) {
            maxLen = p[i];
            centerIndex = i;
        }
    }

    // Extract the longest palindromic substring
    int start = (centerIndex - maxLen) / 2;
    return s.substr(start, maxLen);
}

int main() {
    string s = "ababbababbaaad";
    cout << "Longest palindromic substring: " << longestPalindromicSubstring(s) << endl;
    return 0;
}
