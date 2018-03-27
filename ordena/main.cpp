#include <iostream>
#include<time.h>
#include<stdlib.h>
/*
using namespace std;
void imprimir_rrglo(int arr[]);
void cambiar(int* ptr1,int* ptr2)
{
    int c=*ptr1;
    *ptr1=*ptr2;
    *ptr2=c;
}
int orden_ascedente(int a, int b)
{
    if (a>b)
        return 1;
    else
        return 0;
}

int orden_descedente(int a, int b)
{
    if (a<b)
        return 1;
    else
        return 0;
}

void burbuja(int* arr,int tam,int (*p)(int,int))
{
    --tam;
    int i;
    int *ptr;
    while(tam!=0)
        {
        ptr=arr;
        i=tam;
        while(i!=0){
            if(p(*ptr,*(ptr+1))== 1){
                cambiar(ptr,ptr+1);
            }
            ptr++;
            i--;
        }
        tam--;
    }
}

void imprimir_rrglo(int arr[],int tamano)
{
    for(int i=0;i<tamano;i++)
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
    int arreglo[1000000]={};
    crear_arr(arreglo,1000000);
    burbuja(arreglo,sizeof(arreglo)/4,orden_descedente);
    //imprimir_rrglo(arreglo,sizeof(arreglo)/4);
    return 0;
}
*/
