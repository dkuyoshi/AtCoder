//
// Created by Daiki Kuyoshi on 2020/03/28.
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

int main(){
    ll K, N;
    cin >> K >> N;

    vl A(N);
    for(int i=0; i<N; i++) cin >> A.at(i);

    ll da = 0;
    ll db = 0;
    vl dist(N+1);
    dist.at(0) = A.at(0);
    ll max = dist.at(0);
    ll point = N-1;
    for(ll i=1; i<N; i++){
        dist.at(i) = A.at(i) - A.at(i-1);
        if(max <= dist.at(i)){
            max = dist.at(i);
            point = i;
        }
    }
    dist.at(N) = K - A.at(N-1);

    for(ll i=0; i<=N; i++){
        if(i != 0 and i != N){
            da += dist.at(i);
        }
        if(i != point){
            db += dist.at(i);
        }
    }
    cout << min(da, db) << endl;

}