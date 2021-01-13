#include <iostream>
#include <math.h>

int main(){
    int n = 0, m = 0, cntN =0, cntM = 0;
    //unsigned int converted = 0;
    std::cin >> n >> m;
    county(n, cntN);
    county(m, cntM);
    bool inBruh = true;

    if(cntN==cntM && n==m){
        std::cout << "the same bruh" << std::endl;
    }
    else if(cntN>cntM){
        inBruh = isIn(n,m);
        if(inBruh) std::cout << "yay" << std::endl;
        else std::cout << "nay" << std::endl;
    }
    else if{
        inBruh = isIn(m,n);
        if(inBruh) std::cout << "yay" << std::endl;
        else std::cout << "nay" << std::endl;
    }
    else{
        std::cout << "different bruh" << std::endl;
    }
    

    return 0;
}

void county(int n, int& cnt){
    if(n==0) return;
    cnt++;
    county(n/10, cnt);
}

bool isIn(int n, int m){
    bool bruh=true;
    if (n==0) return bruh;
    else if (n%10 == m){
        isIn(n/10,m);
    }
    else bruh = false;
    return bruh;
}
