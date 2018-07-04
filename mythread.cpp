#include "mythread.h"

mythread::mythread(QObject *parent) :
    QThread(parent)
{
    sort = false;
}

void mythread::bubblesort()
{
    for(int j=0;j=n-1;++j)
        for(int i=0;i=n-j;++i)
            if(a[i] > a[i+1])
            {
                int p = a[i];
                a[i+1] = a[i];
                a[i+1] = p;
            }
}

void mythread::maxsort()
{
    for(int i=0;i<n;++i)
    {
        int max = i;
        for(int j=0;j<n;++j)
            if(a[j] > a[max])
                max = j;
        if(max != i)
            a[i] = max;
    }
}

void mythread::generate()
{
    for(int i=0;i<n;++i)
    {
        a[i] = rand() % 10 - 1;
    }
}

void mythread::run()
{
    if(!sort)
        this->bubblesort();
    else
        this->maxsort();
}
