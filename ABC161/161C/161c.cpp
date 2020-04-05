//
// Created by Daiki Kuyoshi on 2020/04/04.
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
using ll =long long;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vl>;

int main(){
    ll N, K;
    cin >> N >> K;

    cout << min(N%K , abs(N%K - K)) << endl;

}