#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

class ANDEquation {

	public: int restoreY(vector<int> A) {

		int i,temp=0,temp2=0,index=-1;
		int size = A.size();
		temp = A[0];
		for(i=1;i<size;i++)
		{
			temp = temp&A[i];
		}
		bool check = false;
		for(i=0;i<size;i++)
		{
			if(temp==A[i] && check==false)
			{
				//cout<<temp<<endl;
				check = true;
				index = i;
			}
			else
			{
				if((i==0) || (index==0 && i==1))
					temp2=A[i];
				else
					temp2=temp2&A[i];
			}
		}
		cout<<temp2<<" "<<temp<<endl;
		if(temp2==temp && check)
			return temp;
		else
			return -1;
	}

};
