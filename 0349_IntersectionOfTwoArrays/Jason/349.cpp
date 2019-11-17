#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main() {
    
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    // Version 2 - map
    map<int, bool> m;
    vector<int> result;

    for (vector<int>::iterator it = nums1.begin(); it != nums1.end(); ++it) {
        m[*it] = false;
    }

    for (vector<int>::iterator it = nums2.begin(); it != nums2.end(); ++it) {
        if (m.find(*it) != m.end())
            m[*it] = true;
    }

    for (map<int, bool>::iterator it = m.begin(); it != m.end(); ++it) {
        if (it->second)
            result.push_back(it->first);
    }

    return result;

    // Version 1 - Set
    // set<int> s1, s2;
    // vector<int> result;
    // for (int i = 0; i < nums1.size(); ++i) {
    //     s1.insert(nums1[i]);
    // }

    // for (int i = 0; i < nums2.size(); ++i) {
    //     if (s1.find(nums2[i]))
    //         s2.insert(nums2[i]);
    // }

    // for (set<int>::iterator it = s2.begin(); it != s2.end(); ++it) {
    //     result.push_back(*it);
    // }

    // return result;
}