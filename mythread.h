#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <cstdlib>

const int n = 10;

class mythread : public QThread
{
    Q_OBJECT
public:
    int a[n];
    bool sort;
    void run();
    void bubblesort();
    void maxsort();
    void generate();
    explicit mythread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // MYTHREAD_H
