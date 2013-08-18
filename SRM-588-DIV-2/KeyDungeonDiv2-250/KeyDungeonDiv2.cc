#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define eps (le-7)
#define INF (le60)
#define MAX (1<<30)
#define MIN (-MAX)
#define LL long long

#define pb push_back

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()
#define gcd(a,b) __gcd(a,b)
#define EQ(a,b) (abs(a-b) <eps)
#define sqr(a) ((a)*(a))
#define popcount(n) __builtin_popcount(n)

inline LL strtoint(const string &s) {stringstream ss;ss<<s;LL ret;ss>>ret;return ret;}
inline string inttostr(const LL &a) {stringstream ss;ss<<a;string ret;ss>>ret;return ret;}

class KeyDungeonDiv2 {

  public: int countDoors(vector <int> doorR, vector <int> doorG, vector <int> keys) {
             int size = doorR.size();
             int sum = 0;
             for(int i=0;i<size;i++)
             {
                int a=0;
                int b=0;
                a = keys[0]-doorR[i];
                b = keys[1]-doorG[i];

                int c = 0;
                if(a<0)
                   c+=a;
                if(b<0)
                   c+=b;
                if(c+keys[2]>=0)
                   sum++;
             }
		return sum;
	}

};