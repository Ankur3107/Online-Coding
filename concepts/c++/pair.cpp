#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include<algorithm>

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

/*bool compare(const ii &i , const ii &j)
{
	return i.se > j.se;
}
*/


int main()
{
	
	ii p1;
	
	p1 = make_pair(1,10);
	p1 = make_pair(2,20);
	ii p2(p1);
	cout << "p1.fi() : " << p2.fi << endl;
	cout << "p1.se() : " << p2.se << endl;

	cout << "****************"<< endl;

	vector<ii> vip(5);
	
	
	for(int i=0 ; i<5 ;i++)
	 {
		vip[i].fi = i;
		vip[i].se = i*i;	
	 }

	sort(vip.begin() , vip.end());
	for(int i=0;i<5;i++)
	{
		cout << vip[i].fi << vip[i].se << endl;
	}

		
	
	


return 0;

}



















