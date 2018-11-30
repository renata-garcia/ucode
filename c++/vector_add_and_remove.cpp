#include <iostream>
#include<vector>
using namespace std;

void receive_vector(std::vector<double> &a)
{
	// cout << "vector<double>: " << a << endl;
}
 
int main() {
   std::vector<double> a(10);

   cout << "adding vector" << endl;
   size_t ii = 0;
   // cout << "a.begin(): " << a.begin() << " a.end(): " << a.end() << endl;
   for(std::vector<double>::iterator it = a.begin(); it != a.end(); ++it, ++ii)
   {
   	*it = ii;
   	cout << " *it: " << *it << endl;//"it: " << it << 
   }

   cout << "removing odds" << endl;
   size_t jj = 0;
   ii = 0;
   std::vector<double>::iterator itt = a.begin();	 
   for(std::vector<double>::iterator it = a.begin(); ii < 5; ++it, ++ii)
   {
   	 cout << "  jj: " << jj << " ii: " << ii << endl;
   	 // a.erase(itt+jj);
   	 a.erase(a.begin()+jj-ii);
   	 cout << "  removed." << endl;
   	 jj = jj + 2;
   }

   cout << "printing vector" << endl;
   for(std::vector<double>::iterator it = a.begin(); it != a.end(); ++it)
     cout << " *it: " << *it << endl;//"it: " << it << 

   // receive_vector(*a);
}
