#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
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

class TheJediTestDiv2 {

  public: int countSupervisors(vector <int> students, int Y, int J) {
             int size = students.size();
             int mins = MAX;
             for(int i=0;i<size;i++)
             {
                int sum = 0;
                for(int j=0;j<size;j++)
                {
                   if(i==j && students[j]-Y>0)
                      sum+= ceil((students[j]-Y+0.0)/J);
                   else if(i!=j)
                      sum+= ceil((students[j]+0.0)/J);
                   cout<<"SUM="<<sum<<endl;
                }
                cout<<sum<<endl;
                mins = min(mins,sum);
             }
		return mins;
	}

};
