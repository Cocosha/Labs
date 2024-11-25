#include <iostream>
#include  <stdarg.h>
using namespace std;
int minMax(int count, ...) {
    int total = 0;
    int min = 2147483647;
    int max = -2147483647;
    va_list args;
    va_start(args,count);
    for(int i=0; i<count;i++){
        int num = va_arg(args,int);
        cout<<num<<" : ";
        if(num<min){min=num;}
        else if (num>max){max=num;}
    }
    cout<<endl<<"Мінімум : "<<min<<" | Максимум : "<<max<<endl<<"max / min = "<<max/min;
}
int main() {
    minMax(9,2,-12,9,22,4,122,176,22,10);
    
    return 0;
}
