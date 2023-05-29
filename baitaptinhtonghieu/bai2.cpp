#include <iostream>
#include <cmath>

using namespace std;

bool kiemTraNguyenTo(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool kiemTraChinhPhuong(int n)
{
    int can = sqrt(n);
    return can * can == n;
}

bool kiemTraHoanHao(int n)
{
    int tong = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            tong += i;
        }
    }
    return tong == n;
}

bool kiemTraFibonacci(int n)
{
    int a = 0, b = 1;
    while (b < n)
    {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b == n;
}

int main()
{
    int n;
    cout << n << "nhap so n: ";
    cin >> n;

    if (kiemTraNguyenTo(n))
    {
        cout << n << " la so nguyen to" << endl;
    }
    if (kiemTraChinhPhuong(n))
    {
        cout << n << " la so chinh phuong" << endl;
    }
    if (kiemTraHoanHao(n))
    {
        cout << n << " la so hoan hao" << endl;
    }
    if (kiemTraFibonacci(n))
    {
        cout << n << " la so Fibonacci" << endl;
    }

    return 0;
}