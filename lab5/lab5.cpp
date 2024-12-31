#include <iostream>

using namespace std;

int main(){
    unsigned long long num;
    int i = 0;
    int c = 0;
    int base[30]={0};
    cout<<"Введіть число"<<endl;
    cin>>num;
    if(cin.fail()){cin.ignore();num=10;}
    cout<<endl<<num<<endl;

    while (num > 0)
    {
        int digit = num%7;
        base[i]=digit;
        cout<<digit<<"|";
        num /= 7;
        i++;
    }
    i--;
    cout<<endl;
    for(i;i>=0;i--)
    {
        if (base[i]==0)
        {
            c++;
        }
        cout<<base[i];
    }
    cout<<endl<<"Кількість нулів : "<<c;

    return 0;
};