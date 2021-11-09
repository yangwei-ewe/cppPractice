#include <iostream>
using namespace std;

int maxFill=0,currFill=0;
void act(char** mtx,int y,int x,bool opt) {
    
}
int main() {
    int col=0,row=0,works=0;
    cin>>col>>row>>works;
    char *mtx[col];
    for (int i=0;i<col;i++) {
        mtx[i]=new char[row];
    }//init

    for (int i=0;i<works;i++) {
        int y=0,x=0;
        bool opt=false;
        cin>>y>>x>>opt;
        act(mtx,y,x,opt);
    }
    return 0;
}