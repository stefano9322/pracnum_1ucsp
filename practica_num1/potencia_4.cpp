#include <iostream>

using namespace std;

int base(int x, int y)
{
    int z=1;
    for(int i=0;i<y;i++){

        z=z*x;
    }
    cout<<z<<endl;
}

int main()
{
    int x=5, y =3;
    base(x,y);

    return 0;
}
