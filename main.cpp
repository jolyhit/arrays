#include <iostream>
using namespace std;

int main() {
    int size = 5;

    //1!
    int *arr = new int[size];

    //2!
    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ":";
        cin >> arr[i];
    }

    //3!
    cout << "\narray:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << "\t";
    }
    cout << "\n";
    //4!
    delete [] arr;
    arr = NULL;

    //5!
    cout << "\n";
    int size1 = 3;
    int **arr1 = new int* [size1];
    for (int i = 0; i < size1; ++i) {
        arr1[i] = new int[size1];
    }
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            cout << i + 1 << " row:";
            cout << j + 1 << " column:";
            cin >> arr1[i][j];
        }
    }
    cout << "\ntwo-dimensional array:\n";
    for (int i=0; i<size1; i++) {
        for (int j = 0; j < size1; j++)
            cout << " " << arr1[i][j];
        cout << endl;
    }

    for(int i = 0; i < size1; ++i){
        delete[] arr1[i];
        for (int j = 0; j < size1; ++j) {
            delete[] arr1[j];
        }
    }
    delete[] arr1;
    arr1 = NULL;
    return 0;
}
