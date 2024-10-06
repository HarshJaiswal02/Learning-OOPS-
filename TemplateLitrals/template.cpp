#include <bits/stdc++.h>
using namespace std;

// Compile time --> (Polymorph) not efficient as it is not much reuse-able.

// int sum(int a, int b)
// {
//     return a + b;
// }
// float sum(float a, float b)
// {
//     return a + b;
// }

// Make the decision in run time-- using template
// Reuse able
// things to remember  Syntax ---> template<typename T> T->can be ay variable name A,B ,C ...etc
template <typename AB>
AB sum(AB a, AB b)
{
    return a + b;
}

// we can use the place holder like we do in vector vector<int> or vector<pair<int,int>>

template <typename T, typename W>
T sum(T a, T b, W c)
{
    cout << "Print-- " << c << "Type " << typeid(c).name() << endl;
    return a + b;
}
int main()
{

    // cout << sum(2, 3) << endl;
    // cout << sum(2.4f, 3.3f) << endl;

    cout << sum<int, float>(2, 5, 3.4f) << endl;
    cout << sum<float, int>(2.3f, 1.f, 5) << endl;
    return 0;
}