#include <iostream>
#include <cmath>
using namespace std;

const double e = std::exp(1.0); 
const double pi = 2*acos(0.0);
int main() {
    //1
    double a = 6;
    cout<<"a=";
    cin>>a;
    if(cin.fail()){cin.ignore();a=6;}
    double res = (pow(e,sqrt(2*a)))-(log((a+pow(a,1/5))/(a-1))+cos((pi-0.5)/(2*a)));
    cout<<endl<<"1 : "<<res<<endl;
    //2
    double z=33.8461;
    int b=-11;
    int c=int(z);
    int g=0x21;
    //2.1
    cout<<"2.1 : "<<!(g>=c || b<=g && b==c/4)<<endl;
    //2.2
    bool res2;
    res=~b^0375 | c << 3;
    cout<<res<<endl;
    //3
    int digit;
    int inp1=31;
    int inp2=12;
    int inpC=2;
    cout<<"Введіть число 1 : ";
    cin>>inp1;
    cout<<endl<<"Введіть число 2 : ";
    cin>>inp2;
    cout<<endl<<"Введіть число C : ";
    cin>>inpC;
    cout<<endl;
    if (inp1>inp2){
        cout<<inp2<<endl;
        while (inp2 > 0)
        {
            int digit = inp2%10;
            cout<<digit<<"|";
            inp2 /= 10;
        }
        cout<<" C = "<<inpC<<endl;
        if(inpC==digit){
            cout<<" Цифра збігається";
        } else {
            cout<<" Цифра не збігається";
        }
    } else {
        cout<<inp1;
        while (inp1 > 0)
        {
            int digit = inp1%10;
            cout<<digit<<"|";
            inp1 /= 10;
        }
        cout<<" C = "<<inpC<<endl;
        if(inpC==digit){
            cout<<" Цифра збігається";
        } else {
            cout<< "Цифра не збігається";
        }
    }
    return 0;   
}
 