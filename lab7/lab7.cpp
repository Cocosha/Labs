#include <iostream>
using namespace std;
int prime(int pr,int arr[]){
    for (int i=arr[0];i>0;i--){
        if(pr%arr[i]==0){
            pr=prime(pr+2,arr);
        }
    }
    arr[0]++;
    arr[arr[0]]=pr;
    return pr;
}

int main() {
    int pArr[99]={2,2,3};
    int count[99]={
    };
    int num = 13;
    while (pArr[pArr[0]]<num/2){
        prime(pArr[pArr[0]]+2,pArr);
        
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
