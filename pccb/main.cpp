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

    int L = 10;
    int n = 3;
    int x[] = {2, 6, 7};
    
    int ans_min = 0;
    int ans_max = 0;
    REP(i, n){
        ans_min = max(ans_min, min(x[i], L-x[i]));
        ans_max = max(ans_max, max(x[i], L-x[i]));
    }
    dump(ans_min);
    dump(ans_max);
}
