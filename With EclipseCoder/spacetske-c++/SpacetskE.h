#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

long long module=1000000007;

class SpacetskE {
	int C[210][210];
	void init()
	{
		int i,j;
		C[0][0]=1;
		for(i=1;i<210;i++)
		{
			C[i][0]=1;
			for(j=1;j<=i;j++)
			{
				C[i][j]=(C[i-1][j]+C[i-1][j-1])%module;
			}
		}
	}
	int gcd(int a, int b){return a%b?gcd(b,a%b):b;}

	public: int countsets(int L, int H, int K) {
		if(K==1)
			return (H+1)*(L+1);
		int x,y,base;
		long long ans = 0;
		init();
		for(base=1;base<=L+1;base++)
		{
			for(y=H+1;y>=2;y--)
			{
				for(x=1;x<=L+1;x++)
				{
						int temp=1,max;
						if(x==base)
							max = y;
						else
						{
							if(abs(x-base)>(y-1))
								temp = gcd(abs(x-base),y-1);
							else
								temp = gcd(y-1,abs(x-base));
							max = temp+1;
						}


						if(max>=K)
							ans= (ans + C[max-1][K-1])%module;
				}
			}
		}

		return ans;
	}



};
