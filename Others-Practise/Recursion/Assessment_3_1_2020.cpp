#include <iostream>
void nz(unsigned int n, unsigned int m, unsigned int cntN, unsigned int cntM);
void cntr(unsigned int n, unsigned int& cnt);
void toBase(unsigned int n, unsigned int m, unsigned int& cnt);
bool isContained(unsigned int n, unsigned int m);

int main(){
    unsigned int n = 0 ;//, m = 0;//, cntN =0, cntM = 0;
    std::cin >> n; //>> m;
    //bool isIn = isContained(n, m);
    //nz(n, m);
    //cntr(n, cntN);
    //cntr(m, cntM);
    //toBase(n,  m, cntN);
    unsigned int k = n%10;
    if (isIn){
        std::cout << "Yep";
    }
    else std::cout << "Nope";
}

bool isRepetitionHere(unsigned int n, unsigned int& k){
    //unsigned int k = n%10;
    if(n == 0) {
        return false;
        k = n%10;
    }
    return (n/10 == k) || (isRepetitionHere(n/10, k));
}

bool isContained(unsigned int n, unsigned int m){//, bool& isIn){
    if(n == 0) return false;
    return (n%10 == m) || (isContained(n/10, m)); 
}

/*
    bool inIt = true;
    if (n == 0 && m == 0) inIt = true;
    else{
        if(n%10 == m) inIt = true;
        else {
            n/=10;
            isContained(n, m);
        }
    }
    if (n == 0) inIt = false;
    return inIt;*/

void nz(unsigned int n, unsigned int m, unsigned int cntN, unsigned int cntM){
    bool isIn = true;
    unsigned int current = 0, another = 0;
    if(cntN == cntM){       //123  234
        current = n%10;
        n/=10;
        another = m % 10;
        
    }
    if (n == 0) return;
    else {
        std::cout << n % 10 << " ";
        //nz(n/10);
    }

}

void toBase(unsigned int n, unsigned int m, unsigned int& cnt){
    if(n == 0) return;
    else {
        //n % m =
        n /= m;
        cnt++;
        toBase(n, m, cnt);
    }
}

void cntr(unsigned int n, unsigned int& cnt){
    if(n == 0) return;
    else {
        
        n /= 10;
        cnt++;
        cntr(n, cnt);
    }
}
