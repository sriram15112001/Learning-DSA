#include <iostream>
#include <set>

using namespace std;

void solve(string s) {
    string v = "";
    set<char> set = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    for(int i = 0; i < s.size(); i++) {
        char a = s[i];
        if(set.find(a) == set.end()) {
            int ascii = (int) a;
            if(ascii < 97) {
                ascii += 32;
            }
            v = v + "." + (char) ascii;
        }
    }
    cout << v << endl;
    
    
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    solve(s);
    return 0;
}

