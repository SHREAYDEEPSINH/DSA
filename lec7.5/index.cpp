#include <iostream>
using namespace std;

int main()
{

    // qus 1------------------------
    // int a[5][5] = {{4, 9, 3, 5, 2},
    //                {8, 3, 7, 4, 8},
    //                {2, 5, 1, 3, 6},
    //                {6, 4, 9, 4, 3},
    //                {8, 2, 1, 7, 9}};
    // int length = sizeof(a) / sizeof(a[0][0]);
    // int sum = 0;
    // for (int i = 0; i <= 4; i++)
    // {
    //     for (int j = 0; j <= 4; j++)
    //     {
    //         sum = sum + a[i][j];
    //     }
    // }
    // cout << "average is: " << sum / length;





// qus2------------------------

    // int n;

    // cout << "Enter row and col size: ";
    // cin >> n;

    // int a[n][n], b[n][n], c[n][n];
    
    // cout << "Enter array a: " << endl ;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << "enter a[" << i << "][" << j << "]: ";
    //         cin >> a[i][j];
    //     }
    // }

    // cout << "Enter array b: " << endl ;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << "enter a[" << i << "][" << j << "]: ";
    //         cin >> b[i][j];
    //     }
    // }

    //  for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         c[i][j]=a[i][j]+b[i][j];
    //     }
    // }

    // cout << "array c: " << endl ;
    //  for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << c[i][j] << " ";
    //     }
    //     cout << endl;
    // }




// qus 3 --------------------------

//    int a[5][5] = {{4, 9, 3, 5, 2},
//                   {8, 3, 7, 4, 8},
//                   {2, 5, 1, 3, 6},
//                   {6, 4, 9, 4, 3},
//                   {8, 2, 1, 7, 9}};

//     for (int i = 0; i <= 4; i++)
//     {
//         for (int j = 0; j <= 4; j++)
//         {
//             if(i==0 || j==0 || i==4 || j==4){
//                 cout << a[i][j] <<" ";
//             }else{
//                 cout << "  ";
//             }
//         }
//         cout <<endl;
//     }


// qus 4----------------------------------
// int a[5][5] = {{4, 9, 3, 5, 2},
//                   {8, 3, 7, 4, 8},
//                   {2, 5, 1, 3, 6},
//                   {6, 4, 9, 4, 3},
//                   {8, 2, 1, 7, 9}};

//     for (int i = 0; i <= 4; i++)
//     {
//         for (int j = 0; j <= 4; j++)
//         {
//             if(i==j){
//                 cout << a[i][j] <<" ";
//             }else{
//                 cout << "  ";
//             }
//         }
//         cout <<endl;
//     }



// qus5---------------------------------

  int r,c;

    cout << "Enter row  size: ";
    cin >> r;
    cout << "Enter col  size: ";
    cin >> c;

    int a[r][c];
    
    cout << "Enter array elements: " << endl ;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << "enter a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    
    int choice;
    do{
       cout
    } while(choice!=0);
    
   
}