//
// Created by Daiki Kuyoshi on 2020/05/02.
//

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

using ll =long long;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vs = vector<string>;

ll f(ll x, ll A, ll B){
    return floor((A*x)/B) - floor(A*(x/B));
}

int main(){
    ll A, B, N;
    cin >> A >> B >> N;


    cout <<f(min(N, B-1), A, B) << endl;

}