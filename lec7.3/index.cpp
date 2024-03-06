#include <iostream>
using namespace std;

int main(){
   int size;
   int pos,elem;
   cout << "enter array size: ";
   cin >> size;

   int a[size];

   cout << "Enter array elements: ";
   for(int i=0;i<size;i++){
     cout << "Enter a[" << i <<"]: ";
     cin >> a[i];
   }


   cout << endl << endl <<"=============" <<endl;


   int choice;

   do{
    cout << "press 1 for insert an element "<<endl;
    cout << "press 2 for updeate an element "<<endl;
    cout << "press 3 for Delete an element "<<endl;
    cout << "press 4 for view elements "<<endl;
    cout << "press 0 for Exit "<<endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter position: ";
        cin >> pos;

        cout << "Enter new element: ";
        cin >> elem;

        for(int i=size-1;i>=pos;i--){
            a[i+1]=a[i];
        }
        size++;

        a[pos]=elem;

        cout << "Element insert successfully";
        cout << endl;
        break;
    
    case 2:
         cout << "Enter position: ";
        cin >> pos;

        cout << "Enter new element: ";
        cin >> elem;

        a[pos]=elem;
        cout << "Element update successfully" <<endl;
        break;

    case 3:
        cout << "Enter position: ";
        cin >> pos;


        for(int i=pos+1;i<size;i++){
            a[i-1]=a[i];
        }
        size--;
        
        cout << "Element delete successfully" <<endl;
        break;

    case 4:
       cout <<endl <<"array is: ";
       for(int i=0;i<size;i++){
        cout << a[i] << " ";
       }
       cout << endl;
       break;

    case 0:
        break;

    
    default:
        cout << "enter vaild choice " <<endl;
        break;
    }
   
   }while (choice != 0);

   return 0;
}