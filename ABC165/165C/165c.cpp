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

int N, M, Q;
int ans = 0;
vi a(100), b(100), c(100), d(100);

vi A;

void dfs(int nw, int l){
    if(nw >= N){
        int sum = 0;
        for(int i=0; i<Q; i++){
            if(A.at(b.at(i)-1) - A.at(a.at(i)-1)== c.at(i)){
                sum += d.at(i);
            }
        }
        ans = max(ans, sum);
        return ;
    }
    for(int i=l; i<=M; i++){
        A.push_back(i);
        dfs(nw+1, i);
        A.pop_back();
    }
}

int main(){
    cin >> N >> M >> Q;
    for(int i=0; i<Q; i++){
        cin >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);
    }

    dfs(0,1);
    cout << ans << endl;
}