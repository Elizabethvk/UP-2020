#include <iostream>
#include <cmath>

int main(){
    int n=0,newN=0, mostZeros=0,origNum=0, cnt=0, numOfZeros=0;
    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>origNum;
        newN=origNum;
        while(newN){
            if(newN%10==0){
                cnt++;
            }
            newN/=10;
        }
        if (cnt>numOfZeros){
            numOfZeros=cnt;
            mostZeros=origNum;
        }
        cnt=0;
    }
    std::cout << mostZeros << '\t' << numOfZeros << std::endl;
    return 0;
}
