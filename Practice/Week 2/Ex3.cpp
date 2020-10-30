/* Зад. 3 
Символен низ наобратно извеждане*/
#include <iostream>

int main(){
    int n;
    char w[100];
    std::cin >> n;
    std::cin >> w;

    for (int i=n-1; i>=0; i--) {
        /*strlen(w)*/
        std::cout << w[i]; 
    }
    
    return 0;
}

/*
#include <iostream>

int main(){
    char a[1000];
    int n;
    std::cin>>n >> a;
    for (int i=n-1;i>=0; i++)
    std::cout<<a[i];
    return 0;
}
