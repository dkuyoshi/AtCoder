#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>
#include <map>
#include <cmath>
#include <iomanip>
#include <queue>
#include <set>
using namespace std;
using ll =long long;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vs = vector<string>;

bool IsPrime(ll num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    double sqrtNum = sqrt(num);
    for (ll i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

map<ll, ll>  prime_factor_map(ll n){
    map<ll, ll> ans;
    ans[1] = 1;
    for(ll i=2; i*i <= n; i++){
        while(n%i == 0){
            ans[i]++;
            n /= i;
        }
    }
    if(n!= 1) ans[n] = 1;

    return ans;
}

int main(){
    ll N;
    cin >> N;
    if(IsPrime(N)){
        cout << 1 << endl;
        return 0;
    }
    map<ll, ll> ma = prime_factor_map(N);
    set<ll> sump;
    for(auto c : ma){
        if(c.first == 1){
            continue;
        }
        ll count = 1;
        ll i = 1;
        while(count <= c.second){
            sump.insert(pow(c.first, i));
            i++;
            count += i;
        }
    }

    cout << sump.size() << endl;
}