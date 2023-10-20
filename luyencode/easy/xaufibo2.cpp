#include <iostream>
#include <string>
#include <vector>
#define MAX 50

using namespace std;
string dequy(int n) {
    vector<string> s;
    s[0] = 'a';
    s[1] = 'b';
    for (int i = 2; i < n; i++)
        s[i] = s[i - 2] + s[i - 1];
    return s[n];
}
int output(int n,int k) {
    int count = 0;
    int l = dequy(n).length();
    string s = dequy(n);
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'a')
            count++;
        else continue;
    }
    return count;
}
int main()
{
    int t,n,k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << output(n, k) << endl;;
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}