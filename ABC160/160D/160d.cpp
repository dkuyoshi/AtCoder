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
    ll N, X, Y;
    cin >> N >> X >> Y;

    vvi glaph(N, vi(N));
    vl count(N);

    for(int i=0; i<N-1; i++){
        glaph.at(i).at(i+1) = 1;
    }

    glaph.at(X-1).at(Y-1) = 1;

    for(ll i=0; i<N; i++){
        for(ll j=i+1; j<N; j++){
            if(glaph.at(i).at(j) == 0){
                glaph.at(i).at(j) = min(min(abs(j-i), abs((X-1)-i)+1 + abs(j-(Y-1))), abs((Y-1)-i)+1+abs(j-(X-1)));
            }
            count.at(glaph.at(i).at(j)) += 1;
        }
    }

    for(int i=1; i<N; i++){
        cout << count.at(i) << endl;
    }

}