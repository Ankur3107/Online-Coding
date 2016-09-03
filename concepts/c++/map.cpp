#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include<algorithm>
#include <list>
using namespace std;


#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define fbo find_by_order
#define ook order_of_key

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef set<int> si;
typedef list<int> li;
typedef map<int,int> mi;
typedef long double ld; 
typedef set<int>::iterator sit;
typedef set<int>::reverse_iterator sitr;
typedef map<int,int>::iterator mit;
typedef vector<int>::iterator vit;
typedef vector<int>::reverse_iterator vitr;
typedef list<int>::iterator lit;

const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int LG = 20;


int main()
{
	
	
	mi g1;

	for(int i=0; i<10 ;i++)
	{
		ii p1;
		
		p1.fi = i;
		p1.se = i*2;
	
		g1.insert(p1);
	}

	mit i;
	for(i=g1.begin() ; i!=g1.end() ; i++)
	{
		cout << "\t" << i->fi << "\t" << i->se << "\n";
	}	
	


return 0;

}



















