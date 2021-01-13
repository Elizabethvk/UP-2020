#include <iostream>
#include <math.h>

void nz(unsigned int n, unsigned int m, unsigned int cntN, unsigned int cntM);
void cntr(unsigned int n, unsigned int& cnt);
void toBase(unsigned int n, unsigned int m, unsigned int& cnt, unsigned int& converted);
bool isContained(unsigned int n, unsigned int m);
void repetition(unsigned int n, unsigned int m, unsigned int& cnt);
bool isPowerOf2( unsigned int n);

int main(){
    unsigned int n = 0;//, m = 0, cntN =0, cntM = 0;
    //unsigned int converted = 0;
    std::cin >> n; // >> m;
    //bool isIn = isContained(n, m);
    //nz(n, m);
    //cntr(n, cntN);
    //cntr(m, cntM);
    //toBase(n,  m, cntN);
    //unsigned int k = n%10;


    /*
    if (isPowerOf2){
        std::cout << "Nope";
    }
    else std::cout << "Yep";
    */

    //toBase(n,m,cntN,converted);
    //repetition(n, m, cntN);
    //std::cout << converted;

    return 0;
}
/*
bool isPowerOf2( unsigned int n){
    if(n == 0) return true;
    //if(n%2 != 0) return false;
    
    return (n%2 != 0) || (isPowerOf2(n/2));
}

void toBase(unsigned int n, unsigned int m, unsigned int& cnt, unsigned int& converted){
    if(n == 0) return;
    else {
        converted = (10*converted)+(n % m);
        //converted += pow(10, cnt) * (n % m);
        n /= m;
        cnt++;
        toBase(n, m, cnt, converted);
    }
}

void repetition(unsigned int n, unsigned int m, unsigned int& cnt){
    //unsigned int k = n%10;
    if(n==0) return;
    else {
        if(n%10 == m) {
            cnt++;

        }
        repetition(n/10, m, cnt);
    }
    /*if(n == 0) {
        return false;
        k = n%10;
    }
    return (n/10 == k) || (isRepetitionHere(n/10, k)); //skoba 8/
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
    return inIt; //skoba 8/

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



void cntr(unsigned int n, unsigned int& cnt){
    if(n == 0) return;
    else {
        
        n /= 10;
        cnt++;
        cntr(n, cnt);
    }
}
*/


/* Domashno
    int taken[3];
    for(int i = 0; i< (1<<n); i++){
        for(int item=0; item < n; item++){
            taken[item] = (i&(1<<item));
            std::cout << taken[item] << " ";
        }
        std::cout << std::endl;
    }
    */
