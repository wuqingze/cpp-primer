#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <cstddef>
using std::size_t;

string::size_type find_char(const std::string &s, char c, size_t *cnt){
    auto index = s.size();
    *cnt = 0;
    for(decltype(index) i=0; i<s.size(); i++){
        if(s[i] == c){
            *cnt += 1;
            if(index == s.size()){
                index = i;
            }
        }
    }
    return index;
}

// returns an iterator that refers to the first occurrence of value
// the reference parameter occurs contains a second return value
vector<int>::const_iterator find_val(
    vector<int>::const_iterator beg,  // first element
    vector<int>::const_iterator end,  // one past last element
    int value,                        // the value we want
    vector<int>::size_type &occurs)   // number of times it occurs
{
    auto res_iter = end; // res_iter will hold first occurrence, if any
    occurs = 0;          // set occurrence count parameter 

    for ( ; beg != end; ++beg)
        if (*beg == value) {
            // remember first occurrence of value
            if (res_iter == end) 
                res_iter = beg;
            ++occurs;    // increment occurrence count
         }

    return res_iter;     // count returned implicitly in occurs
}


//vector<int>::const_iterator find_val(
//        vector<int>::const_iterator beg,
//        vector<int>::const_iterator end,
//        int value,
//        vector<int>::size_type *occurs){
//    auto ptr = beg;
//    auto index = beg;
//    while(ptr != end){
//        cout << "----ptr--" << *ptr << endl;
//        if(*ptr == value){
//            *occurs += 1;
//            if(index == beg){
//                cout << "ptr == beg" << endl;
//                index = ptr;
//            }
//        }
//        ptr += 1;
//    }
//    return index;
//}

int main() 
{
	
	string s;
    while(s.empty()){
    	getline(cin, s); 
    }
    cout << s << endl;

    size_t ctr = 0;
	auto index = find_char(s, 'o', &ctr);
	cout << index << " " << ctr << endl;
	
	vector<int> ivec;
	int i;
	// read values into ivec
	while (cin >> i){
        std::cout << i <<endl;
		ivec.push_back(i);
    }

	// for each value in the list of ints
	for (auto i : {42, 33, 92}) {
        cout << "---" << i << endl;
        vector<int>::size_type occurs;
		auto it = find_val(ivec.begin(), ivec.end(), i, occurs);
		if (it == ivec.end())
			cout << i << " is not in the input data" << endl;
		else
			cout << i << " was at position " 
			     << it - ivec.begin() << endl;
	}

	return 0;
}
