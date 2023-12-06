#include <iostream>
using namespace std;
#include <ctime>  

int main()
{
    srand(time(0));

    cout << "Zadej dolni mez: ";
    int a, b;
    cin >> a;
    cout << "Zadej horní mez: ";
    cin >> b;
    int pocet = b - a+1;
    cout << a + rand() % +pocet << " ";
    
}


