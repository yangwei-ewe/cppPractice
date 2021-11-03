#include <algorithm>
#include <iostream>
using namespace std;

int len = 0, cutPointSize = 0, *cutPointArr;
bool *cutHistory;

int cut(int begin, int end)
{
    int i = 0;
    while (!(cutPointArr[i + 1] > (begin + end) / 2) && (i + 1 < cutPointSize))
    {
        i++; //1 2 4 6
    }
    cout << "cutpoint:" << cutPointArr[i] << endl;
    cutHistory[i] = true;
    if (cutHistory[0] || cutHistory[cutPointSize - 1])
    {
        //cout << "begin:" << begin << "\tend:" << end << endl;
        if (cutPointArr[i+1]>=end&&cutPointArr[i]<=begin) {
            return 0;
        }
        return (end - begin);
    }
    else
    {
        //cout << "begin:" << begin << "\tend:" << end << endl;
        return (end - begin) + cut(begin, cutPointArr[i]) + cut(cutPointArr[i], end);
    }
}

int main()
{
    cin >> cutPointSize >> len;
    cutPointArr = new int[cutPointSize]();
    cutHistory = new bool[cutPointSize]();
    for (int i = 0; i < cutPointSize; i++)
    {
        cin >> cutPointArr[i];
        cutHistory[i] = false;
    }
    //sort(cutPointArr, cutPointArr + cutPointSize);
    cout << cut(0, len) << endl;
    system("pause");
    return 0;
}