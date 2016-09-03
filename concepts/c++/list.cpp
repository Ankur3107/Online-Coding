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

/*bool compare(const ii &i , const ii &j)
{
	return i.se > j.se;
}
*/

void printIt(li a)
{
	lit i;
	for(i=a.begin() ; i!=a.end() ;i++)
	{
		cout << *i << "\t";
	}
	
	cout << endl << "********" << endl;	
}

int main()
{
	
	li a,b;

	for(int i=0 ;i<10;i++)
	{
		a.push_back(i*2);
		b.push_front(i*3);
		
	}
	printIt(a);
	printIt(b);
	
	lit i;
	i = a.begin();
	i++;
	a.insert(i,111);
	printIt(a);

	a.erase(a.begin());
	printIt(a);
	

	



	
	
		
	
	


return 0;

}



















