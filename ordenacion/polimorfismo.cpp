#include <iostream>

using namespace std;
/*
class orden
{
public:
    virtual bool ordenamiento(int a,int b)=0;
};

class ascendente:public orden
{
public:
    bool ordenamiento(int a, int b)
    {
        return a>b;
    }
};
void cambiar(int* ptr1,int* ptr2)
{
    int c=*ptr1;
    *ptr1=*ptr2;
    *ptr2=c;
}
class descendente:public orden
{
public:
    bool ordenamiento(int a, int b)
    {
        return a<b;
    }
};
template<class T>
void ordn(T* arr,int tam,orden* ptrOb)
{
    --tam;
    int i;
    int *ptr;
    while(tam!=0)
        {
        ptr=arr;
        i=tam;
        while(i!=0){
            if(ptrOb->ordenamiento(*ptr,*(ptr+1))== true){
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
int main()
{
    int arreglo[]={5,8,7,3,1,9,2,4,11,19};
    ascendente a;
    descendente d;
    ordn<int>(arreglo,sizeof(arreglo)/4,&d);
    imprimir(arreglo,sizeof(arreglo)/4);
    return 0;
}

*/
