#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <vector>
#include <numeric>
#include <map>
#include <cmath>
#include <iomanip>
#include <queue>
#include <set>
using ll =long long;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vs = vector<string>;
 
 
int main() {
    ll N;
    cin >> N;
    vl A(N);
    map<ll, ll> a;
    ll sum = 0;
    for(ll i=0; i<N; i++){
        cin >> A.at(i);
        sum += A.at(i);
        a[A.at(i)] += 1;
    }
 
    ll Q;
    cin >> Q;
    ll b, c;
    ll tmp;
    for(ll i=0; i<Q; i++){
        cin >> b >> c;
        if(a.find(b) != a.end()) {
            tmp = a.at(b);
            sum -= b*a.at(b);
            a.at(b) = 0;
            a[c] += tmp;
            sum += c*tmp;
        }
        cout << sum << endl;
    }
}