#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    long long a,b;
    scanf("%lld %lld",&a, &b);
    printf("%lld\n", (a-1) * (b-1) + 1);
}