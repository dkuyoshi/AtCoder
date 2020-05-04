//
// Created by Daiki Kuyoshi on 2020/05/03.
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

int main(){
    ll X;
    cin >> X;

    for (ll i = -1000; i < 1000; ++i) {
        for (ll j = -1000; j < 1000; ++j) {
            if(i*i*i*i*i - j*j*j*j*j == X){
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
}