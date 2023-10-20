#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_set>
using namespace std;
void solve(string& s)
{
   unordered_set<char> st;
    int l = s.length();
    for (int i = 0; i < s.length(); i++) {
        st.insert(s[i]);
    }
    cout << l / st.size();
    if (l / st.size() == 1)
        cout << s;
    else
    for (auto x : st)
    {
        cout << x;
    }
}
int main() {
    string s;
    cin >> s;
    solve(s);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}