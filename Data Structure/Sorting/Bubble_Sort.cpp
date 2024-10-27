// worst case is if the array is in desecending order
// swap in the worst case are : n(n-1)/2
// time complexity is : O(n^2)
//  space complexity is : O(1)
#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                flag = true;
                swap(v[j], v[j + 1]);
            }
        }
        if (!flag) // if flag is not true
        {
            break;
        }
    }
    return;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bubblesort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;

    return 0;
}