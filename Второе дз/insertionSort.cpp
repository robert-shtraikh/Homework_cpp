

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, i, elem;
    vector<int> array;
    cout << "Enter number of elements>>";
    cin >> n;   
    for (i = 0; i < n; i++) {
        cout << "Enter an element of your unsorted array>>";
        cin >> elem;
        array.push_back(elem);
    }
    for (i = 0; i < n; i++) {
        for (int j = i; j > 0 && array[j - 1] > array[j]; j--) {
            swap(array[j - 1], array[j]);
        }
    }
    for (i = 0; i < n; i++) {
        cout << " "<< array[i];
    }
    
    


    


}


