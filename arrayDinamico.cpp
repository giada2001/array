
#include "arrayDinamico.h"
#include <iostream>

using namespace std;
arrayDinamico::ArrayDinamico(int n){

    if(n<=0)
    {
        cout<<"errore:size deve essere maggiore
        exit(1);
    }

    maxSize=n+BUF_SIZE;
    size=n;

    ptr ==new double [maxSize];
    for(int i=0;i<maxSize;i++)
        ptr[i]=0.0
}
/*
    explicit ArrayDinamico(const ArrayDinamico &a);
    ArrayDinamico(const double a[],int n);
    ~ArrayDinamico();
*/

ArrayDinamico::ArrayDinamico(const ArrayDinamico &a){
    maxSize =a.maxSize;
    size=a.size;
    ptr=new double[maxSize];
    for(int i=0; i<maxSize;i++)
        ptr[i]=a.ptr[i];
}
