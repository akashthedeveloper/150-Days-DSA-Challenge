/*
1
2 3
4 5 6
7 8 9 10  
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row = 1;
    int count = 1;
    while(row <=n){

        int col = 1;
        while(col <=row){
            cout<<count<<" ";
            count = count + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}



// #include <iostream>

// int main() {
//     int n, i = 1, num = 1;

//     std::cout << "Enter the number of rows for Floyd's Triangle: ";
//     std::cin >> n;

//     while (i <= n) {
//         int j = 1;
//         while (j <= i) {
//             std::cout << num << " ";
//             num++;
//             j++;
//         }
//         std::cout << std::endl;
//         i++;
//     }

//     return 0;
// }