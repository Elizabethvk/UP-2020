#include <iostream>
#include <cmath>
using namespace std;
int fact(int num);
int getNumber();
/*int main(){
    int n=0, factN=0,origNum=0, cnt=0, numOfZeros=0;
    double r=0,sum=1.0;
    std::cin>>r >> n;
    for(int i=1; i<=n; i++){
        //factN = fact(i);
        //std::cout << fact(i) << '\t';
        sum=sum+(pow(r,i)/fact(i));
        //std::cout << pow(r,i) << '\t' << (pow(r,i)/factN) << '\t' << sum << '\t' << std::endl;
    }
    std::cout << sum;
    return 0;
}*/
int main() {
		int num = getNumber();
		int x = getNumber();
		double res = 1.0;

		for (int i = 1; i <= num; i++) {
			res += (pow(x, i)/ fact(i));
		}

		cout << res << endl;

	return 0;
}


int fact(int num) {
	int factNum = 1;

	for (int i = 2; i <= num; i++) {
		factNum *= i;
	}

	return factNum;
}
int getNumber() {
	int num = 0;
	cout << "Number: ";
	cin >> num;
	return num;
}
