#include <iostream>

using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     cout << "Original Matrix is: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "Transpose of the matrix is:" << endl;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*Matrix multiplication*/

// int main()
// {
//     int r1, c1, r2, c2;
//     cout << "Enter shape of matrix 1:";
//     cin >> r1 >> c1;
//     cout << "Enter shape of matrix 2:";
//     cin >> r2 >> c2;

//     int a[r1][c1];
//     int b[r2][c2];

//     cout << "Enter elements of matrix 1:" << endl;

//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     cout << "Enter elements of matrix 2:" << endl;

//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             cin >> b[i][j];
//         }
//     }

//     cout << "Matrix 1 is: " << endl;

//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "Matrix 2 is: " << endl;

//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             cout << b[i][j] << " ";
//         }
//         cout << endl;
//     }

//     if (c1 == r2)
//     {
//         int mul[r1][c2];

//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 mul[i][j] = 0;
//                 for (int k = 0; k < c1; k++)
//                 {
//                     mul[i][j] += a[i][k] * b[k][j];
//                 }
//             }
//         }

//         cout << "Multiplication of mat-1 and mat-2 is:" << endl;

//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 cout << mul[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     else
//     {
//         cout << "Matrix multiplication not possible" << endl;
//     }

//     return 0;
// }

/*Matrix search where elements in rows and columns are sorted.*/

// int main()
// {
//     int n, m;
//     int key;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     bool found = false;
//     cout << "Enter element to search: ";
//     cin >> key;

//     int r = 0, c = m - 1;
//     while (r < n && c >= 0)
//     {
//         if (arr[r][c] == key)
//         {
//             found = true;
//         }
//         if (arr[r][c] > key)
//         {
//             c--;
//         }
//         else
//         {
//             r++;
//         }
//     }

//     if (found)
//     {
//         cout << key << " exists in matrix" << endl;
//     }
//     else
//     {
//         cout << key << " doesn't exist in matrix" << endl;
//     }
//     return 0;
// }