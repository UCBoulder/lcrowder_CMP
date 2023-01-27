#include <iostream>
#include <string>
#include <vector>
using std :: cout;
using std :: endl;
using std :: string;
using std :: vector;

int main()
{
    int nx , ny;
    nx = 5;
    ny = 5;
    vector< vector <double> > zValues;
    zValues.resize(nx);
    for ( int i = 0 ; i < nx ; ++i ) zValues[i].resize(ny);
    for ( int i = 0 ; i < nx ; ++i )
    for ( int j = 0 ; j < ny ; ++j )
    zValues[i][j] = (1-i)*(1+i)*(1-j)*(1+j);
    for ( int i = 0 ; i < nx ; ++i)
    {
    for ( int j = 0 ; j < ny ; ++j )
    cout << i << " " << j << " " << zValues[i][j] << endl;
    cout << endl;
    }
    return 0;
}