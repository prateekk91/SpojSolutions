    #include<iostream>
    using namespace std;
    char array[9];
    int check_win(char );
    int count(char);
    int main()
    {
        int a,b,m,n;
        while(1)
        {
            cin >> array;
            if(array[0]=='e')break;
            a = check_win('X'); // 0 => not a winner
            b = check_win('O'); // 1 => winner
            m = count('X'); n = count('O');
            if(m < n || m > n+1){cout<< "invalid" <<endl; continue; }
            if(a==1 && b==0) { if(m==n+1) cout<< "valid"<<endl; else cout<< "invalid"<<endl; continue; }
            if(a==0 && b==1) { if(m==n) cout<< "valid"<<endl; else cout<< "invalid"<<endl; continue; }
	    if( a && b) { cout<<"invalid\n";continue;}	
            if(m+n ==9){  cout<< "valid"<<endl; continue; }
            cout<< "invalid" <<endl;
        }
    }
    int check_win(char ch)
    {
        for(int i=0;i<9;i+=3)
        if(array[i+0]==ch &&array[i+1]==ch &&array[i+2]==ch )return 1;
        for(int i=0;i<3;i++)
        if(array[i]==ch &&array[i+3]==ch &&array[i+6]==ch )return 1;
        if(array[0]==ch &&array[4]==ch &&array[8]==ch )return 1;
        if(array[2]==ch &&array[4]==ch &&array[6]==ch )return 1;
        return 0;
    }
    int count(char ch)
    {
        int ctr=0;
        for(int i=0; i<9; i++)
                if(array[i]==ch)ctr++;
        return ctr;
    }
