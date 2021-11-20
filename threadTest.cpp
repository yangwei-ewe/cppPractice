#include <iostream>
#include <thread>
#include <ctime>
#include <windows.h>
using namespace std;

void positiveCount(int time) {
    cout<<"positive:wait for 2.3 sec..."<<endl;
    Sleep(200);
    cout<<"positive:start"<<endl;
    for (int i=0;i<time;i++) {
        Sleep(1000);
        cout<<"positive:"<<i+1<<"sec..."<<endl;
    }
    cout<<"positive:end"<<endl;
    //return ;
}

void negCount (int time) {
    cout<<"neg:start"<<endl;
    for (int i=0;i<time;i++) {
        Sleep(1000);
        cout<<"neg:"<<i+1<<"sec..."<<endl;
    }
    cout<<"neg:end"<<endl;
}

int main () {
    //ewe
    thread thread1(positiveCount,5);
    thread thread2(negCount,5);
    thread1.join();
    thread2.join();
    cout<<"main:returned"<<endl;
    system("pause");
    return 0;
}
