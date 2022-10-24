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
      // int k;
      // cout << "Enter Number of row: ";
      // cin >> k;
    
      // char cha = 65; // A == 65
    
      // for (int i = 0; i < k; i++) {
      //   for (int j = 0; j < k; j++) {
      //     cha += j;
      //     cout << cha << " ";
      //     cha -= j;
      //   }
      //   cout << endl;
      // }

// 10). Patttern
  // A B C D
  // E F G H
  // I J K L
  // M N O P
  // ----->
      // int l;
      // cout << "Enter number of row or column: ";
      // cin >> l;
    
      // char chr = 64; // A = 65
      // if(l<=5){
      //   for(int i=1;i<=l;i++){
      //     for(int j=1;j<=l;j++){
      //       chr += 1;
      //       cout << chr << " ";
      //     }
      //     cout << endl;
      //   }  
      // }else {
      //   cout << "Enter lessthan 6 row and column." << endl;
      // }

// 11). Patttern
  // A B C D
  // B C D E
  // C D E F
  // D E F G
  // ----->
      // int m;
      // cout << "Enter number of row and column: ";
      // cin >> m;
    
      // char chara = 65;
    
      // for(int i=0;i<m;i++){
      //   chara += i;
      //   for(int j=0;j<m;j++){
      //     chara += j;
      //     cout << chara << " ";
      //     chara -= j;
      //   }
      //   cout << endl;
      //   chara -= i;
        
      // }

// 12). Patttern
  // A
  // B C
  // D E F
  // G H I J
  // ----->
      // int n;
      // cout << "Enter number of row: ";
      // cin >> n;
    
      // char charac = 64; // A = 65
    
      // for(int i=0;i<n;i++){
      //   for(int j=0;j<=i;j++){
      //     charac += 1;
      //     cout << charac << " ";
      //   }
      //   cout << endl;
      // }

// 13). Patttern
  // A
  // B C
  // C D E
  // D E F G
  // ----->
      // int o;
      // cout << "Enter number of row: ";
      // cin >> o;
    
      // char ch = 65; // A = 65
    
      // for(int i=0;i<o;i++){
      //   ch += i;
      //   for(int j=0;j<=i;j++){
      //     ch += j;
      //     cout << ch << " ";
      //     ch -= j;
      //   }
      //   cout << endl;
      //   ch -= i;
      // }

// 14). Patttern
  //       *
  //     * *
  //   * * *
  // * * * *
  // ----->
      // int p;
      // cout << "Enter Number of row: ";
      // cin >> p;
    
      // for(int i=1;i<=p;i++){
      //   for(int j=p;j>0;j--){
      //     if(j>i){
      //       cout << "  ";
      //     }else {
      //       cout << " *";
      //     }
      //   }
      //   cout<<endl;
      // }

// 15). Patttern
  // * * * *
  // * * *
  // * *
  // *
  // ----->
      // int q;
      // cout << "Enter number of row: ";
      // cin >> q;
    
      // for(int i=q;i>=1;i--){
      //   for(int j=1;j<=i;j++){
      //     cout << "* ";
      //   }
      //   cout<<endl;
      // }

// 16). Patttern
  // * * * *
  //   * * *
  //     * *
  //       *
  // ----->
      // int r;
      // cout << "Enter Number of row: ";
      // cin >> r;
    
      // for(int i=1;i<=r;i++){
      //   for(int j=1;j<=r;j++){
      //     if(i<=j){
      //       cout << "* ";
      //     }else{
      //       cout << "  ";
      //     }
      //   }
      //   cout << endl;
      // }



  
  
}