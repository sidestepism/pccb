//
//  main.cpp
//  pccb
//
//  Created by Ryohei Fushimi on 2015/12/13.
//  Copyright © 2015 fushimir. All rights reserved.
//
#include "pccb.hpp"

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n = 3;
    int target = 10;
    int k[] = {1, 3, 5};
    int ans = false;
    REP(a, n){
        REP(b, n){
            REP(c, n){
                REP(d, n){
                    if(k[a] + k[b] + k[c] + k[d] == target){
                        ans = true;
                    }
                }
            }
        }
    }
    dump(ans);
}
