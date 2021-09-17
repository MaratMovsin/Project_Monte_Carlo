#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

double lorenz(double loc=0, double scale=1){
    double rnd = (double)rand();
    rnd = rnd / RAND_MAX;
    return loc + scale*tan(3.1415*(rnd-0.5));
}

int main()
{
    srand(time(NULL));
    cout<<lorenz();
    return 0;
}
