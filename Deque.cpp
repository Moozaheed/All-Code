// // CPP program to illustrate the
// // deque::insert() function
// // insert elements by iterator
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	deque<int> dq = { 1, 2, 3, 4, 5 };

// 	deque<int>::iterator it = dq.begin();
	

// 	dq.insert(it, 10); // 1 10 2 3 4 5

// 	std::cout << "Deque contains:";
// 	// for (it = dq.begin(); it != dq.end(); ++it)
// 	// 	cout << ' ' << *it;
// 	// cout << '\n';

//     for(auto x:dq)cout<<x<<" ";

// 	return 0;
// }

// CPP program to illustrate the
// deque::insert() function
// program for third syntax
#include <bits/stdc++.h>
using namespace std;

int main()
{
	deque<int> dq = { 1, 2, 3, 4, 5 };

	deque<int>::iterator it = dq.begin();

	vector<int> v(2, 10);
    for(auto x:v)cout<<x<<" ";
    cout<<endl;

	//  10 10 1 2 3 4 5
	dq.insert(it, v.begin(), v.end());

	std::cout << "Deque contains:";
	for (it = dq.begin(); it != dq.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';

	return 0;
}
