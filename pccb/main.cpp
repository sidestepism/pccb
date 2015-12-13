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
    int n = 6;
    int target = 10;
    vector<int>k = {1, 5, 11, 2, 9, 12};
    int ans = false;

    vector<int> kk;
    REP(c, n){
        REP(d, n){
            kk.push_back(k[c] + k[d]);
        }
    }
    sort(kk.begin(), kk.end());
    
    REP(a, n){
        REP(b, n){
            int dt = n - k[a] - k[b];
            ans |= binary_search(k.begin(), k.end(), dt);
//            REP(c, n){
////                REP(d, n){
////                    if(k[a] + k[b] + k[c] + k[d] == target){
////                        ans = true;
////                    }
////                }
//                // find d s.t. k_d = m - k_a - k_b - k_c
//                int dt = n - k[a] - k[b] - k[c];
//                ans |= binary_search(k.begin(), k.end(), dt);
//            }
        }
    }
    dump(ans);
}
