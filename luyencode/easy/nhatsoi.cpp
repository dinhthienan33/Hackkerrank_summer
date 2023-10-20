#include <iostream>
#include <string>
#include <map>
using namespace std;
void win(string name) {
    if (name == "Daisy")
        cout << name;
    else cout << "Louis";
}
void lose(string name) {
    if (name == "Daisy")
        cout << "Louis";
    else cout << name;
}
void solve(string name, int a ,int b)
{
    map<int, int> mp;
    mp[1] = 3;
    mp[2] = 4;
    mp[3] = 5;
    int k = mp[a] - b;
    if (k%2==1)
        win(name);
    else lose(name);
    
}

int main()
{
    string name;
    cin >> name;
    int a, b;
    cin >> a >> b;
    solve(name, a, b);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}