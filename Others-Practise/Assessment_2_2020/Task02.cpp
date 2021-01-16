#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//using std::nothrow;
bool areTheySimilar(int n, int m);
int length(int number);

int main(){
    int n=0,m=0;
    cin >> n >> m;
    areTheySimilar(n,m);
    if(areTheySimilar(n,m)==1) 
      cout<<"Yeet";
    else 
      cout << "Nah fam";

    return 0;
}

bool areTheySimilar(int n, int m){
  cout << n << " " << m << endl;
  if(n==m) return 1;
  if(n==0) return 0;
  if(n%10 == m%10) return areTheySimilar(n/10,m/10);
  else return areTheySimilar(n/10,m);
}


/* testing     
int len = length(n);
cout << len;

int length(int number){
    if(number>=0 && number<=9){
        return 1;
    }
    //cout << 1+length(number/10) << " " << endl;
    return 1+length(number/10);
}
*/
