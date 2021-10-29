// Лабораторна робота No 5.4
#include <iostream>
#include <cmath>

using namespace std;
double S0( const int k, const int N)
{
    double s=0;
    for (int k=1; k<=N; k++)
        s += pow(1./(2*k+1), 2);
    return s;
}
 double S1( const int k, const int N)
{
    if (k>N)
        return 0;
    else
        return pow(1./(2*k+1), 2) + S1(k+1, N );
}
double S2( const int k, const int N)
{
    if (k<1)
        return 0;
    else
        return pow(1./(2*k+1), 2) + S2(k-1, N );
}
double S3( const int k, const int N, double t)
{
    t = t + pow(1./(2*k+1), 2);
    if (k>=N)
        return t;
    else
        return S3( k+1, N, t);
}
double S4( const int k, const int N, double t)
{
    t = t + pow(1./(2*k+1), 2);
    if (k<=1)
        return t;
    else
        return S4( k-1, N, t);
}
int main()
{
    int k = 1, N;
    cout << "N = "; cin >> N;

    cout << "(iter)         S0 = " << S0(k,N)    << endl;
    cout << "(recup++)      S1 = " << S1(k,N)    << endl;
    cout << "(recup--)      S2 = " << S2(N,N)    << endl;
    cout << "(rec down ++)  S3 = " << S3(k, N, 0)<< endl;
    cout << "(rec down --)  S4 = " << S4(N, N, 0)<< endl;
  
    return 0;
}
