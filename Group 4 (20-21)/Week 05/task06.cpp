#include <iostream>
#include <cmath>

int main(){
    int n=0,newN=0,cnt=0;
    std::cin>>n;
    newN=n;
    while(newN>0){
        newN/=10;
        cnt++;
    }
    newN=n;
    if(n>=10 && n<=30000){
        for(int i=0; i<cnt; i++){
            int each=0;
            each=newN%10;
            std::cout << each << " ";
            for(int i=0; i<each; i++){
                std::cout<< "#";
            }
            std::cout<< std::endl;
            newN/=10;
        }
    }
    return 0;
}
