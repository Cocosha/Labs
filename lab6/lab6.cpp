#include <iostream>

using namespace std;

int main(){
    int num1;
    int num2;
    cout<<"Введіть перше число"<<endl;
    cin>>num1;
    if(cin.fail()){cin.ignore();num1=10;}
    cout<<"Введіть друге число"<<endl;
    cin>>num2;
    if(cin.fail()){cin.ignore();num2=10;}
    int count[10]={0};
    while (num1 > 0)
    {
        int digit = num1%10;
        count[digit]+=1;
        if(count[digit]!=0)
        {
            cout<<digit<<":"<<count[digit]
        }
        num1 /= 10;
    }




    return 0;
}