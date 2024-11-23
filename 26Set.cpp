//SET, LOWE_BOUND, UPPER_BOUND

// lower_bound

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//   set<int> s;

//   s.insert(1);
//   s.insert(2);
//   s.insert(3);
//   //  if 4 is not present in thie set then lower bound return the just next bigger item from the set.

//   // s.insert(4); 
  
//   // but if now value exist after 4 in set then it'll return s.end() value which is 0 here.

//   // s.insert(5);
//   // s.insert(6);

//   cout << "lower bound = " << *(s.lower_bound(4)) << endl;


//   for(auto val : s){
//     cout << val <<" " ;
//   }

//   cout <<  endl;
//   return 0;
// }


// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//   set<int> s;

//   s.insert(1);
//   s.insert(2);
//   s.insert(3);

//   auto it = s.lower_bound(4); // Get the iterator for lower bound

//   if (it != s.end()) { // Check if the iterator is valid
//     cout << "Lower bound = " << *it << endl;
//   } else {
//     cout << "Lower bound does not exist (greater than all elements in the set)" << endl;
//   }

//   for (auto val : s) {
//     cout << val << " ";
//   }

//   cout << endl;
//   return 0;
// }



// upper_bound

#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){

set<int> s;

s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);

cout << "lower bound = " << *(s.lower_bound(4)) << endl; //4
cout << "upper bound = " << *(s.upper_bound(4)) << endl; //5

for(auto val : s) {
  cout << val << " ";
}
cout << endl;

return 0;
}