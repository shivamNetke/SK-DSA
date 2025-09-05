// directed and Weighted Adjacency Matrix Graph

#include <iostream>
using namespace std;

void printArray(int arr[4][4], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// directed and weighted
void addEdge(int arr[4][4], int vertex1, int vertex2, int weight)
{
    arr[vertex1][vertex2] = weight;

}
int main()
{
    int arr[4][4] = {0};   // initialize all elements with 0

    // directed and weighted edges
    addEdge(arr, 0, 1, 5);
    addEdge(arr, 0, 3, 7);
    addEdge(arr, 1, 2, 3);
    addEdge(arr, 2, 3, 6);

    printArray(arr, 4);

    return 0;
}
