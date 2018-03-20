#include <iostream>

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

void burbuja(int arr[],int tam,int (*p)(int,int))
{
    int i;
    int *ptr;
    while(tam!=0)
        {
        ptr=arr;
        i=10;
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

void imprimir_rrglo(int arr[])
{
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arreglo[]={5,8,7,3,1,9,2,4,11,19};
    burbuja(arreglo,sizeof(arreglo)/4,orden_ascedente);
    imprimir_rrglo(arreglo);
    return 0;
}
