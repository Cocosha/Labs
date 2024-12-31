
#include <iostream>
#include <ctime>
using namespace std;

int main() {
srand(time(0));
    unsigned int p = 10;
    int r1 = 0;
    int r2 = 100;
    int buf;
    int max = -2147483647;
    int min = 2147483647;
    double nlist[75]={};

//Input and validate
    cout<<"P : ";
    cin>>p;
    p=(cin.fail())?10:(p<10)?10:(p>75)?75:p;
    cin.clear();
    cin.ignore();
    cout<<endl<<"R1 : ";
    cin>>r1;
    r1=(cin.fail())?0:r1;
    cin.clear();
    cin.ignore();
    cout<<endl<<"R2 : ";
    cin>>r2;
    r2=(cin.fail())?0:r2;
    cin.clear();
    cin.ignore();

//swap min and max
    if (r1>r2){
    r1=r1+r2; 
    r2=r1-r2; 
    r1=r1-r2;
    }

//Output
    for (int i=0; i<p;   i++){
        int randomNum = rand() % (r2-r1+1)+r1;
        buf = randomNum+randomNum/RAND_MAX;
        max=(buf>max)?buf:max;
        min=(buf<min)?buf:min;
        cout<<" | "<<buf;
    }
    cout<<endl<<"max : "<<max;
    cout<<endl<<"min : "<<min;
    return 0;

    
}