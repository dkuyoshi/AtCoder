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
    ll a = N;
    ll b, tmp;
    vs alphabet = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r",
                   "s", "t", "u", "v", "w", "x", "y", "z"};
    vs ans;
 
    while(1){
        tmp = a;
        a = a/26;
        b = tmp%26;
        if(b == 0){
            a = a-1;
            b = 26;
        }
        ans.push_back(alphabet.at(b-1));
        if(a == 0){
            break;
        }
    }
    string out;
    for(ll i = ans.size()-1; i>=0; i--){
        out += ans.at(i);
    }
    cout << out << endl;
}