#include <iostream>
#include <cmath>

int main(){
    int n=0,newN=0;
    std::cin>>n;
    newN=n;
    if(n>=10 && n<=30000){
        while(newN){
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
