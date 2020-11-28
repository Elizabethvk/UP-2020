//нещо не бачка като хората
#include <iostream>
#include <cmath>

int main(){
    int n=0,sum=0, newN=0, cnt=0;
    std::cin>>n;
    newN=n;
    while(newN>0){
        newN /=10;
        cnt++;
        std::cout << newN << '\t' << cnt << std::endl;
    }
    newN=n;
    while(n){
        sum=sum + pow(n%10,cnt);
        n=n/10;
        std::cout << n << '\t' << pow(n%10,cnt)  << '\t' << sum << std::endl;
    }
    if(sum==newN){
        std::cout<< "It's narcisistic!" << std::endl;
    }
    else {
        std::cout<< "Nah" << std::endl;
    }
    return 0;
}
