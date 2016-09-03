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
typedef set<int> si;
typedef long double ld; 
typedef set<int>::iterator sit;
typedef set<int>::reverse_iterator sitr;
typedef map<int,int>::iterator mit;
typedef vector<int>::iterator vit;
typedef vector<int>::reverse_iterator vitr;

const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int LG = 20;


int main()
{
	si g1;

	g1.insert(5);
	g1.insert(1);
	g1.insert(2);
	g1.insert(3);
	g1.insert(5);

	sit i;

	for(i=g1.begin() ; i!=g1.end() ; i++)
	{
		cout << *i << "\t";
	}
	
	cout << endl << endl;

	sitr ir;

	for(ir=g1.rbegin() ; ir!=g1.rend() ; ir++)
	{
		cout << *ir << "\t";
	}

	cout << endl << "*************" << endl;


	g1.erase(g1.begin() , g1.find(2));
	
	for(i=g1.begin() ; i!=g1.end() ; i++)
	{
		cout << *i << "\t";
	}

	cout << endl << endl;
	
	int num = g1.erase(5);
	
	cout << "num : "<< num << endl;

	
	

	



	



return 0;

}



















