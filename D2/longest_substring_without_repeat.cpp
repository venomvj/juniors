// CPP program to demonstrate the
// set::find() function
#include <bits/stdc++.h>
using namespace std;
int main()
{

	// Initialize set
	set<int> s;

	s.insert(1);
	s.insert(4);
	s.insert(2);
	s.insert(5);
	s.insert(3);

	// iterator pointing to
	// position where 3 is
	auto pos = s.find(5);

	// prints the set elements
	cout<< *pos<<endl;
	return 0;
}
