// Print the sum of first n natural number, where n is the input.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     int i=1;
//     while(i<=n){
//         i++;
        
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// pritn the sum of the first n numbers by using for loop sher n is the input.
#include<iostream>
using namespace std;
int main(){
    int n;

    int sum=0;
    for(int i=1; i<10; i++){
        sum +=i;
    }
    cout<<sum<<endl;
    return 0;
}