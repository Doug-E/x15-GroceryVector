//Authors: Douglas Mullaly, mohamed, Francisco, Riley 

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
  vector<string> list;
      char input;
      string cheese;

      do {
      cout<<"\n==GROCERY LIST MANAGER==";
      cout<<"\nEnter your choice: ";
      cout<<"\n (A)dd an item";
      cout<<"\n (S)how grocery list";
      cout<<"\n (Q)uit";
      cout<<"\nYour choice (A/S/Q): ";
      cin>>input;

      if (input == 'a' || input == 'A') {
          cout<< "What item would you like to add?" <<endl;
          cin.ignore();
          getline(cin, cheese); 
          list.push_back(cheese);

      }
                                                                    
      if (input == 's' || input == 'S') {
        for (int index = 0; index < list.size(); index++){
            cout<< list[index] <<endl;
        }
      }
    }
    while ( input != 'q' && input != 'Q' );
    return 0;
}
