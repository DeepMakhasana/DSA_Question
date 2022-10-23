#include <iostream>
using namespace std;

int main() {
  // 1). Patttern
  // 1 2 3 4
  // 1 2 3 4
  // 1 2 3 4
  // 1 2 3 4
  // ----->
  // int a;
  // cout << "Enter N value" << endl;
  // cin>>a;

  // for(int i=1;i<=a;i++){
  //   for(int j=1;j<=a;j++){
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  // 2). Patttern
  // 4 3 2 1
  // 4 3 2 1
  // 4 3 2 1
  // 4 3 2 1
  // ----->
  // int b;
  // cout << "Enter Number of row and col: " << endl;
  // cin >> b;

  // for(int i=1;i<=b;i++){
  //   for(int j=b;j>=1;j--){
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  // 3). Triangle Patttern
  // *
  // * *
  // * * *
  // * * * *
  // ----->
  // int c;
  // cout << "Enter number of row:" << endl;
  // cin >> c;

  // for(int i=1;i<=c;i++){
  //   for(int j=1;j<=i;j++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // 4). Patttern
  // 1
  // 2 2
  // 3 3 3
  // 4 4 4 4
  // ----->
  // int d;
  // cout << "Enter Number of row for triangle: ";
  // cin >> d;

  // for(int i=1;i<=d;i++){
  //   for(int j=1;j<=i;j++){
  //     cout << i << " ";
  //   }
  //   cout << endl;
  // }

  // 5). Patttern
  // 1
  // 2 3
  // 4 5 6
  // 7 8 9 10
  // ----->
  // int e;
  // cout << "Enter Number of row: ";
  // cin >> e;

  // int num=1;
  // for(int i=1;i<=e;i++){
  //   for(int j=1;j<=i;j++){
  //     cout << num << " ";
  //     num++;
  //   }
  //   cout << endl;
  // }

  // 6). Patttern
  // 1
  // 2 3
  // 3 4 5
  // 4 5 6 7
  // ----->
  // int f;
  // cout << "Enter number of row: ";
  // cin >> f;

  // for(int i=1;i<=f;i++){
  //   for(int j=i;j<i+i;j++){
  //     cout << j << " ";
  //   }
  //   cout<<endl;
  // }

  // 7). Patttern
  // 1
  // 2 1
  // 3 2 1
  // 4 3 2 1
  // ----->
  // int g;
  // cout << " Enter number of row: ";
  // cin >> g;

  // for(int i=1;i<=g;i++){
  //   for(int j=i;j>=1;j--){
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  // 8). Patttern
  // A
  // B B
  // C C C
  // D D D D
  // ----->
  // int h;
  // cout << "Enter Number of row: ";
  // cin >> h;

  // char ch = 64; // 65 == 'A'

  // for(int i=1;i<=h;i++){
  //   ch = ch+i;
  //   for(int j=1;j<=i;j++){
  //     cout << ch << " ";
  //   }
  //   cout << endl;
  //   ch = ch-i;
  // }

  // 9). Patttern
  // A B C D
  // A B C D
  // A B C D
  // A B C D
  // ----->
  int k;
  cout << "Enter Number of row: ";
  cin >> k;

  char cha = 65; // A == 65

  for (int i = 0; i < k; i++) {
    for (int j = 0; j < k; j++) {
      cha += j;
      cout << cha << " ";
      cha -= j;
    }
    cout << endl;
  }
}