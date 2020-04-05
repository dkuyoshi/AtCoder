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
#include <queue>
using ll =long long;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vs = vector<string>;

int main(){
    ll K;
    cin >> K;
    queue<string> q;
    vs lunlun;

    if(K < 9){
        cout << K << endl;
        return 0;
    }

    for(int i=1; i<=9; i++){
        q.push(to_string(i));
        lunlun.push_back(to_string(i));
    }

    ll c = 9;
    string s;
    int num;
    while(c <= K){
        s = q.front();
        num = s.at(s.size()-1) - '0';
        q.pop();
        for(int i=0; i<10; i++){
            if(abs(num - i) <= 1){
                q.push(s + to_string(i));
                c++;
                lunlun.push_back(s + to_string(i));
            }
        }
    }

    cout  << lunlun.at(K-1) << endl;
}