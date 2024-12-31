using namespace std;

#include <iostream>
#include <bitset>
#include <stdarg.h>
#include <cstring>

#define MAX_TEXT 255

typedef struct brand{
    char name[MAX_TEXT]="N/A";
    int mileage;
    int carNum;
}brand;
typedef struct car{
    int nomer;
    int year =-1;
    char brand[MAX_TEXT];
    int mileage;
} car;

car addCar(car inp){
    cout<<"Введіть марку авто : ";
    cin>>inp.brand;
    cout<<"Введіть пробіг авто : ";
    cin>>inp.mileage;
    cout<<"Введіть рік випуску авто : ";
    cin>>inp.year;
    return inp;
}

void carSort(car cars[]){
    int i = 0;
    while(cars[i].year!=-1&&cars[i+1].year!=-1){
        if (cars[i].year>cars[i+1].year){
            car temp = cars[i];
            cars[i]=cars[i+1];
            cars[i+1]=temp;
            i=0;
        }else{
        i++;
        }
    }
}

int main(){
    car cars[99];
    brand brands[99];
    int count;
    cout<<"Введіть кількість авто : ";
    cin>>count;
    for (int i=0; i<count; i++){
        cars[i]=addCar(cars[i]);
        cars[i].nomer=i+1;
        for(int j=0; j<count; j++){
            if (strcmp(brands[j].name,cars[i].brand)==0){
                brands[j].mileage+=cars[i].mileage;
                brands[j].carNum++;
                j=count;
            }
            if (strcmp(brands[j].name,"N/A")==0){
                strcpy(brands[j].name,cars[i].brand);
                brands[j].mileage=cars[j].mileage;
                brands[j].carNum=1;
                j=count;
            }
        }
    }
    carSort(cars);
    int i=0;
    while(cars[i].year!=-1){
        cout<<cars[i].nomer<<" | "<<cars[i].brand<<" | "<<cars[i].mileage<<" | "<<cars[i].year<<endl;
        i++;
    }
    i=0;
    while(strcmp(brands[i].name,"N/A")!=0){
        cout<<endl<<brands[i].name<<" | Середній прогбіг "<<brands[i].mileage/brands[i].carNum<<" | Кількість авто "<<brands[i].carNum;
        i++;
    }




    return 0;
}
