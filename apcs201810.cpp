//2d encode
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int squareSize=0;
vector<int> vectorInt;
int main() {
    for (int i=0;i<1;i++) {
        int input=0;
        cin>>input;
        if (input==2) {
            i-=4;
        }
        vectorInt.push_back(input);
    }
    cin>>squareSize;//init

    for (int i=0;i<vectorInt.size();i++) {
        
    }
    system("pause");
    return 0;
}