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
    ll N, M;
    cin >> N >> M;
    vl H(N), a(M), b(M);
//vector<pair<ll, ll>> p;
    for(int i=0; i<N; i++){
        cin >> H.at(i);
    }
    for (int j = 0; j < M; ++j) {
        cin >> a.at(j) >> b.at(j);
    }

    vl ans(N, 1);

    for(int i=0; i<M; i++){
        if(H.at(a.at(i)-1) < H.at(b.at(i)-1)){
            ans.at(a.at(i)-1)--;
        }
        else if (H.at(a.at(i)-1) > H.at(b.at(i)-1)){
            ans.at(b.at(i)-1)--;
        }
        else{
            ans.at(a.at(i)-1)--;
            ans.at(b.at(i)-1)--;
        }
    }

    ll sum = 0;

    for(ll i=0; i<N; i++){
        if(ans.at(i)==1){
            sum++;
        }
    }
    cout << sum << endl;
}