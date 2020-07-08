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
    int G,B,S;
    cin >> G >> S >> B;
    while(B >= 100){
        S++;
        B -= 100;
    }

    while(S >= 100){
        G++;
        S -= 100;
    }

    cout << G << "G " << S << "S " << B << "B";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  solve();
}