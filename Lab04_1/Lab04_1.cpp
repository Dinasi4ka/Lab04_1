// Lab04_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//³���� ĳ���
//����������� ������ 4.1
// �����
// ������ 2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k, N;
    double S;

    cout << "N = "; cin >> N;

    S = 0;
    k = N;
    while (k <= 19)
    {
        S += sqrt(pow(sin(k), 2) + pow(cos(N / k), 2));
        k++;
    }
    cout << S << endl;

    S = 0;
    k = N;
    do {
        S += sqrt(pow(sin(k), 2) + pow(cos(N / k), 2));
        k++;
    } while (k <= 19);
    cout << S << endl;

    S = 0;
    for (k = N; k <= 19; k++)
    {
        S += sqrt(pow(sin(k), 2) + pow(cos(N / k), 2));
    }
    cout << S << endl;

    S = 0;
    for (k = 19; k >= N; k--)
    {
        S += sqrt(pow(sin(k), 2) + pow(cos(N / k), 2));
    }
    cout << S << endl;
    return 0;
}

