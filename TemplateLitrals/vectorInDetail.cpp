#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(23);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(31);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(5);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(14);
    // v.clear();
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.shrink_to_fit();
    try
    {
        cout << "value: " << v.at(1) << endl;
    }
    catch (const std::exception &e)
    {
        cout << e.what() << '\n';
    }

    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(4);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    return 0;
}