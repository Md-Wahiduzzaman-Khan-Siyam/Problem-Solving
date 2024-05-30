#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long h, m, s, c;
    while(scanf("%2lld%2lld%2lld%2lld", &h, &m, &s, &c) != EOF){
        long long ttl = h*60*60*100 + m*60*100 + s*100 + c;
        printf("%07lld\n", ttl*10000000/8640000);
    }
}

