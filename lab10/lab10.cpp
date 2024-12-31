using namespace std;

#include <iostream>
#include <bitset>
#include <stdarg.h>
#include <cstring>


#define MAX_TEXT 225

typedef struct text{
    char full[MAX_TEXT];
    char split[MAX_TEXT/10][20][MAX_TEXT];
}text;


text split(text a){
    int i=0;
    int j=-1;//letter
    int k=1;//word
    int m=1;//sentance
    while(a.full[i]!=0){
        j++;
        if(m>=20){return a;}
        if((a.full[i]<='z'&&a.full[i]>='a')||(a.full[i]<='Z'&&a.full[i]>='A'))
            a.split[m][k][j]=a.full[i];
        if(a.full[i]==' '){
            k++;
            j=-1;
        }
        if(a.full[i]=='.'||a.full[i]=='?'||a.full[i]=='!'){
            i++;
            a.split[1][0][0]=k;
            m++;
            j=-1;
            k=1;            
        }
        i++;
    }
    return a;
}
void dsptxt(text a,int loc, char word[MAX_TEXT]){
    for(int i=1;i<=a.split[1][0][0];i++){
        int j=1;
        if(strcmp(a.split[i][loc],word)==0){
            while(strcmp(a.split[i][j],"")!=0){
                cout<<a.split[i][j]<<" ";
                j++;
            }
            cout<<". ";
        }


    }
}

int main(){
    /*Lorem ipsum dolor sit amet, consectetur adipiscing Sed. Proin diam urna, lobortis non blandit ac.Sed ornare eu leo. Sed elementum tincidunt consequat.*/
    char word[MAX_TEXT/10]="Sed";
    int loc=2;   
    cout<<"Введіть текст: ";
    text sen;
    cin.getline(sen.full,MAX_TEXT);
    cin.clear();
    cin.ignore(32767,'\n');
    cout<<"Слово: ";
    cin>>word;
    cout<<"Місце слова: ";
    cin>>loc;
    sen=split(sen);
    dsptxt(sen,loc,word);


}