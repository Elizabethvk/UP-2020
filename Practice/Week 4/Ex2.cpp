// nz dali e za tuk ama na ei go tuka


  //  Въвеждаме число, повдигаме на квадрат, проверяваме новото число
    std::cout<<("Число: ");
    
    int num,counter=0, cubic=0, newNum;
    std::cin >> num;

    newNum = num;
    cubic = num * num;       

    while (newNum!=0) {
        counter *=10;
        newNum = newNum/10;
    }

    if (cubic % counter == num) {
        std::cout << "i is the last num of cubic: " << cubic << " " << num;
    }   

    return 0;

    /* int n, test, digits=10;
    cin>>n;
    for(int i=1;i<=n;i++){
        test=i;
        if(i==digits)
        {
            digits*=10;
        }
        if((i*i)%digits==i)
        {
            cout<<i<<endl;
        }
    }
