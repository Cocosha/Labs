#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int decConvert(int n,int base){
    int res=0;
    int dif=n/10;
    res=n-(10-base)*dif;
    return res;
}
bool comp(int n, int base){
    while(n>0){
        if(n%10>=base){
            return false;
        }
        n=n/10;
    }
    return true;
}
int verify(int inn, int inb){
    if(inb<2 || inb>9){
        cout<<endl<<"Неправильна система числення :"<<inn<<"("<<inb<<")"<<endl;
        return 0;
    } else {
        if(comp(inn,inb)){
            return decConvert(inn,inb);
            cout<<inn<<"("<<inb<<") = "<<decConvert(inn,inb)<<endl;
        } else {
            cout<<endl<<"Неправильне число :"<<inn<<"("<<inb<<")"<<endl;
            return 0;
        }
    }
}
void readTxt(char *txt){
    int i =0;
    char c;
    ifstream fin("./files/file.bac");
    if(!fin.is_open()){
        cout<<"Error"<<endl;
    } else {
        while (fin.get(c)){
            if (c=='\n'){
                //cout<<"next line";
            }
            //cout<<c;
            txt[i]=c;
            i++;
        }
    }
    fin.close();
}
void txtToNum(char *txt, ofstream& out){
    int num=0;
    int base;
    int i=0;
    int k=0;
    int ia=0;
    int ib=0;
    while (*txt){
        if(txt[i]<=0){return;}
        cout<<txt[i];
        out<<txt[i];
        if(txt[i]=='('){
            ib=i-1;
            for (int j = 0; j <= ib-ia; j++){
                //cout<<txt[i-1-j];
                num += ((txt[i-1-j]-'0')*pow(10,j));
            }
        }
        if(txt[i]==')'){
            base=txt[i-1]-'0';
            num = verify(num,base);
            cout<<" = "<<num;
            out<<" = ";
            out<<num;
            num=0;
        }
        if(txt[i]=='\n'){
            ia=i+1;
        }
        i++;
    }
    out.close();
}
int main(){
    char *txt;
    txt = new char[9999];
    int inn=12;
    int inb=4;
    rename("./files/file.txt","./files/file.bac");
    readTxt(txt);
    ofstream file("./files/file.txt");
    txtToNum(txt,file);
    // verify(inn,inb);
    file.close();
    delete[] txt;
    return 0;
}