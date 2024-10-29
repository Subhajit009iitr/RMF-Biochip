#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define setbits(x) __builtin_popcountll(x)
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll random_num(ll l = 0, ll r = (1LL << 40) - 1) {
    uniform_int_distribution<ll> uid(l, r);
    return uid(rng);
}
using ll = long long;
#define binstr(n, x) bitset<n>(x).to_string()
const ll horiz = (1LL << 20) - 1;
const ll vert = ((1LL << 40) - 1) ^ ((1LL << 20) - 1);
const int N = 20;

int main() {
    ofstream outfile("test_cases.txt");

    if (!outfile) {  
        cerr << "Error opening file!" << endl;
        return 1;
    }

    set<ll> s;
    while (s.size() < N) {
        ll num = random_num();
        if (s.count(num)) continue;
        ll hz = num & horiz, vt = num & vert;
        if (setbits(hz) < 10 || setbits(vert) < 10) continue;
        string ss = binstr(40, num);
        bool valid = 1;
        for (int i = 0; i < 40; i += 5) {
            if (ss.substr(i, 5) == "00000") valid = 0;
        }
        if (!valid) continue;
        s.insert(num);
        outfile << binstr(40, num) << '\n'; 
    }

    outfile.close(); 
    return 0;
}
