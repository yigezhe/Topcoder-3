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

class ANDEquation {

  public: int restoreY(vector <int> A) {
             int size = A.size();
             int ans=1;
             int temp=A[0];
             for(int i=1;i<size;i++)
             {
                temp = temp&A[i];
             }
             int test = ~0;
             for(int i=0;i<size;i++)
             {
                if(A[i]==temp&&ans==1)
                {
                   ans--;
                   temp=A[i];
                }
                else
                {
                   test = test & A[i];
                }
             }
             if(ans==0&&temp==test)
		return temp;
             else
                return -1;
	}

};
