//自动出错程序
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include<sstream>
#define s(y) s##y
using namespace std;
int toInt(char *s)
{
    int result;
    stringstream ss;
    ss<<s;
    ss>>result;
    return result;
}
void mem()
{
    for(;;)
    {
        int *x = new int[100000000];
        x[0] = 0;
        x[100000000 - 1] = 123;
    }
}
int foo()
{
    return foo();
}
int main(int argc, char *argv[])
{
    const char *STATUS[]={"Accepted", "Time Limit Exceed", "Output Limit Exceed",
                           "Stack Overflow", "Wrong Answer", "Div By Zero",
                           "Out Of Bounds", "Memory Limit Exceed", "Create Process",
                           "Throw a+b",                           "ETC"};
    const int STATUS_NUM=11;
    int status=0,a,b;
    cin>>a>>b;
    if(argc<2)
    {
        //status=a % STATUS_NUM;  
        srand(time(0)+a);
        //for(int i=0;i<b;++i)
            status=rand() % STATUS_NUM;   
    }
    else
        status=toInt(argv[1]) % STATUS_NUM;
    cerr<<"I'm going to "<<STATUS[status]<<"."<<endl; 
    switch(status)
    {
        case 0:
            cout<<a+b<<endl;
            break;
        case 1:
            cout<<a+b<<endl;
            for(;;);
            break;
        case 2:
            cout<<a+b<<endl;
            for(;;)cout<<" ";
            break;
        case 3:
            cout<<a+b<<endl;
            foo();
            break;
        case 4:
            cout<<a+b+1<<endl;
            break;
        case 5:
            cout<<(a+b)/0<<endl;
            break;
        case 6:
            cout<<a+b<<endl;
            cerr<<STATUS[STATUS_NUM + 123];
            break;
        case 7:
            cout<<a+b<<endl;
            mem();
            break;   
        case 8:
            cout<<a+b<<endl;
            s(ystem)("pause");
            break;
        case 9:
            cout<<a+b<<endl;
            throw a+b;
            break;
        case 10:
            cout<<a+b<<endl;
            return -1;
            break;  
        default:
            break;
    }
    return 0;
}