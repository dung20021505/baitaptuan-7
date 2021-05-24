#include <iostream>
using namespace std;
void ar(int a[])
{
    cout << sizeof (a)<< endl;
}
int main()
{
    int a[5],i;
    for (int i = 0;i < 5;i++) {
    	a[i]=i;
}
    cout << sizeof (a)<< endl;
    ar(a);
    return 0;
//    sizeof noi khai bao mang a lon hon sizeof cua mang a trong ham
}
