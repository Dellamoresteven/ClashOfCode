#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <vector>
#include <sstream>

using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rl(x) getline(cin, x); stringstream ss(x);

typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<vector<ll> > matrix;
typedef pair<ll, ll> pll;

// remember you may need to reset state
void rsolve() {

}

void solve() {
    string sen;
    rl(sen);
    string newword = "";
    while(ss >> sen) {
        int i = 0;
        trav(c, sen) {
            i == 0 ? newword += toupper(sen.at(i)) : newword += tolower(sen.at(i));
            i++;
        }
        ss.peek() != -1 ? cout << newword << " " : cout << newword;
        newword = "";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
}