#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, i, elem, flag = -1;
    vector<int> array;
    cout << "Enter number of elements>>";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Enter an element of your sorted array>>";
        cin >> elem;
        array.push_back(elem);
    }
    int key;
    cout << "Enter an required element>>";
    cin >> key;
    int l = 0, r = array.size() - 1;

    while (r > l) {
        int m = (l + r) / 2;

        if (array[m] < key) {
            l = m + 1;
        }
        else if (array[m] > key) {
            r = m - 1;
        }
        else {
            cout << m;
            flag = 1;
            break;
        }
    }
    if (flag == -1 && array[l] == key) {
        cout << l;
    }
    else if (array[l] != key) {
        cout << "Not found";
    }
}

