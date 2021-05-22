#include <iostream>

using namespace std;

int main()
{
    int x, y, cont = 1, cont2 = 1, cont3;
    cin >> x;
    cin >> y;
    while (cont <= y){
        cont3 = cont;
        while (cont2 <= x){
            if (cont2 == x){
                cout << cont3 <<endl;
                cont3++;
                cont2++;
            }else{
                cout << cont3 << " ";
                cont3++;
                cont2++;
            }
        }
        cont2 = 1;
        cont = cont + x;
    }
    return 0;
}
