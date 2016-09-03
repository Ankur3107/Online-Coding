#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <iterator>

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
typedef long double ld; 
typedef set<int>::iterator sit;
typedef map<int,int>::iterator mit;
typedef vector<int>::iterator vit;
typedef vector<int>::reverse_iterator vitr;

const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int LG = 20;


int main()
{
	vi g1;
	vit i;
	vitr ir;

	for(int i=1; i<=9; i++)
	g1.push_back(i);

	for(i=g1.begin();i!=g1.end();i++)
	{
		cout << *i << '\t';
	
	}    

	cout << endl << endl;
	for(ir=g1.rbegin();ir!=g1.rend();ir++)
	{
		cout << *ir << '\t';
	}
	cout << endl << endl;

	cout << "size:" << g1.size() << endl ;
	cout << "capacity:" << g1.capacity() << endl;
	cout << "max size" << g1.max_size() << endl;

	cout << "g1[1] :" << g1[1] << endl;
	cout << "g1.front() :" << g1.front() << endl;
	cout << "g1.back() :" << g1.back() << endl;
	cout << "g1.at(1) : " << g1.at(1) << endl;

	cout << "************" << endl;

	int a[] = {1,2,3,4,5};

	vi b;
	
	b.assign(a,a+5);
	// b.assign(5,0);
	for(i=b.begin();i!=b.end();i++)
	{
		cout << *i << '\t';
	
	} 
	
	cout << "************" << endl;

	vi g2(3,10);
	
	vit ig2;
	
	ig2 = g2.end();
	
	g2.insert(ig2,2,30);

	g2.erase(g2.begin()+1);
	for(i=g2.begin();i!=g2.end();i++)
	{
		cout << *i << '\t';
	
	} 
	
return 0;

}



















