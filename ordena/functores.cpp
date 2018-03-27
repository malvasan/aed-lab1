#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

class ascendente
{
public:
    bool ordenar(int a, int b)
    {
        return a>b;
    }
};
class descendente
{
public:
    bool ordenar(int a, int b)
    {
        return a<b;
    }
};
void cambiar(int* ptr1,int* ptr2)
{
    int c=*ptr1;
    *ptr1=*ptr2;
    *ptr2=c;
}
template <class T,class O>
void ordn(T* arr,int tam)
{
    --tam;
    int i;
    O objeto;
    int *ptr;
    while(tam!=0)
        {
        ptr=arr;
        i=tam;
        while(i!=0){
            if(objeto.ordenar(*ptr,*(ptr+1))== true){
                cambiar(ptr,ptr+1);
            }
            ptr++;
            i--;
        }
        tam--;
    }
}
void imprimir(int* arr,int tam)
    {
    for(int i=0;i<tam;i++)
        cout<<arr[i]<<" ";
    }
void crear_arr(int* arr,int tam)
{
    int num;
    srand(time(NULL));
    for(int i=0;i<tam;i++){
        num=rand()%100;
        *arr=num;
        arr++;
    }
}
int main()
{
    int arreglo[50000]={};
    crear_arr(arreglo,200000);
    ordn<int,ascendente>(arreglo,sizeof(arreglo)/4);
    //imprimir(arreglo,sizeof(arreglo)/4);
    return 0;
}

