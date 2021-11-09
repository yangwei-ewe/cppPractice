#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n=0,sum=0;
    cin>>n;
    int arr[n]={0};
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++) {
        if (arr[i]==0) {
            if (i==0) {
                sum+=arr[i+1];
            }
            else if (i==n-1) {
                sum+=arr[i-1];
            }
            else {
                sum+=min(arr[i-1],arr[i+1]);
            }
        }
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}