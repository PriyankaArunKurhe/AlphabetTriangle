
#include <iostream>
using namespace std;
int main() {
    char ch='A';
    int n;
    cout << "Enter Limit:";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<ch++;
        }
        ch--;
        for(int l=1;l<i;l++){
            cout<<--ch;
        }
        cout<<"\n";
        ch = 'A';
    }
    return  0;
}
