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

    int n = 5;
    int a[] = {2, 3, 4, 5, 6};
    int ans = 0;

    int i, j, k;
    REP(i, n){
        REP(j, n){
            REP(k, n){
                if(a[i] + a[j] <= a[k]){
                    continue;
                }
                if(a[j] + a[k] <= a[i]){
                    continue;
                }
                if(a[k] + a[i] <= a[j]){
                    continue;
                }
//                dump(ans);
                ans = max(ans, a[i] + a[j] + a[k]);
            }
        }
    }
    printf("%d", ans);
}
