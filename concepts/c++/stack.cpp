#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include<algorithm>
#include <list>
#include <stack>

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
typedef stack<int> sti;
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


void showStack(sti si)
{
	sti g = si;
	while(!g.empty())
	{
		cout << '\t' << g.top();
		g.pop();
	}

	cout << '\n';
}

int main()
{
	
	sti s1;
	for(int i=0;i<10;i++)
	{
		s1.push(i);
	}

	showStack(s1);


return 0;

}













