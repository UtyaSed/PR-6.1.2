// PR 6.1 рекурсивний спосіб
// <Обухов Віктор>
// Лабораторна робота 6.1
// Пошук елементів одновимірного масиву ітераційним та рекурсивним способом
// Варіан 7


#include <iostream>
#include<iomanip>

using namespace std;

void print0(int* b, const int n, int i)
{
    cout << setw(3) << b[i];
    if (i < n - 1)
        print0(b, n, i + 1);
    else
        cout << endl;
}


void format_mas(int* b, int n, int sum, int k, int i)
{
    if (i < n)
    {
        if (!(b[i] % 2 == 1 || b[i] % 3 == 0))
        {
            k++;
            sum += b[i];
            b[i] = 0;
        }
        format_mas(b, n, sum, k, i + 1);
    }
    else
    {
        cout << endl;
        cout << "quantity - " << k << endl;
        cout << "sum - " << setw(8) << sum << endl;
        cout << endl;
    }
}

void print1(int* b, const int n, int i)
{
    cout << setw(3) << b[i];
    if (i < n - 1)
        print1(b, n, i + 1);
    else
        cout << endl;
}

void create(int* b, const int size, const int Low, const int High, int i)
{
    b[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        create(b, size, Low, High, i + 1);
}

int main()
{
    srand(unsigned(time(NULL))); 

    const int n = 21;
    int b[n];

    create(b, n, 10, 90, 0); 
    print0(b, n, 0);
    format_mas(b, n, 0, 0, 0);
    print0(b, n, 0);

    getchar();
}