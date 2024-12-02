
#include <iostream>
#include <ctime>
using namespace std;

int main() {
srand(time(0));
    int p = 10;
    int r1 = 0;
    int r2 = 100;
    int idMax = 0;
    int idMin = 0;
    double nlist[75]={};
    cout<<"P : ";
    cin>>p;
    p=(p<10)?10:(p>75)?75:p;
    cout<<endl<<"R1 : ";
    cin>>r1;
    cout<<endl<<"R2 : ";
    cin>>r2;

    if (r1>r2){
    r1=r1+r2; 
    r2=r1-r2; 
    r1=r1-r2;

    }
    for (int i=0; i<p;   i++){
        int randomNum = rand() % (r2-r1+1)+r1;
        nlist[i] = randomNum+randomNum/RAND_MAX;
        if (randomNum>nlist[idMax]){idMax=i;};
        if (randomNum<nlist[idMin]){idMin=i;};
        cout<<" | "<<nlist[i];
    }
    cout<<endl<<"max : "<<nlist[idMax];
    cout<<endl<<"min : "<<nlist[idMin];
    return 0;

    
}