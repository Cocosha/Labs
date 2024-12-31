#include <iostream>
using namespace std;
// int prime(int prm,int pArr[]){
//     for (int i=pArr[0];i>0;i--){
//         if(prm%pArr[i]==0){
//             prm=prime(prm+2,pArr);
//         }
//     }
//     pArr[0]++;
//     pArr[pArr[0]]=prm;
//     return prm;
// }

int main() {
    int pArr[99]={2,2,3};
    int count[99]={};
    int num;
    cout<<"Введіть число"<<endl;
    cin>>num;
    if(cin.fail()){cin.ignore();num=10;}
    int prm = 3;
    while (pArr[pArr[0]]<num){
        for (int i=pArr[0];i>0;i--)
        {
            if(prm%pArr[i]==0)
            {
                prm+=2;
            }
        }
    pArr[0]++;
    pArr[pArr[0]]=prm;
        
    }
    for(int i=1;num!=1;i++){
        if (num %pArr[i] == 0){
            cout<<num;
            num/=pArr[i];
            cout<<"/"<<pArr[i]<<"="<<num<<endl;
            count[i]++;
            i=0;
            
        }
    }
    for(int i =1;i<=99;i++){
        if (count[i]>0){
            cout << pArr[i]<<":"<< count[i] << endl;
        }
    }
    return 0;
}
