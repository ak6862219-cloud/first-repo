// Print the Hello World
//#include<iostream>
// using namespace std;
// int main(){
//     cout <<"Hello World";
// }
//1. Given a number the task is to return the count od digits

//#include <iostream>
// using namespace std;
// int countDigit(long long n){
//     if(n ==0){
//         return 1;
//     }
//     int count =0;
//     while(n !=0){
//         n/=10;
//         count ++;
//     }
//     return count; 
// }
// int main(void){
//     long long n;
//      cout << "Enter a number: ";
//     cin >> n;   //  User se input lene ke liye
   
//     cout<<"Number of digit: "<<countDigit(n);
    
// }

//2. Chech a number is palindrome or not if number is palindrome output true else false

// #include<iostream>
// using namespace std;
// bool checkPalindrome(int n){
//     int reverse =0;
//     int temp =n;
//     while(temp !=0){
//         reverse = (reverse*10)+ (temp%10);
//         temp /=10;
//     }
//     return (reverse ==n);
// }
// int main(){
//     int n;
//     cout <<"enter n: ";
//     cin>>n;
//     if(checkPalindrome(n) ==1){
//         cout <<"TRUE"<<endl;
//     }else{
//         cout<<"FALSE"<<endl;
//     }
//     return 0;
// }

//3. To calculate the factorial 

// #include<iostream>
// using namespace std;
// unsigned int factorial(unsigned int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cout <<"enter n: ";
//     cin>>n;
//     cout<< "Factorial of "<< n <<" is "<<factorial(n)<<endl;
//     return 0;
// }

//4. Trailing Zeros in factorial
// #include<iostream>
// using namespace std;
// int CountTrailingZeros(int n){
//     int res =0;
//     for(int i =5;i<n;i*=5){
//         res +=(n/i);
//     }
//     return res;
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"Trailing Zeros: "<<CountTrailingZeros(n)<<endl;
//     return 0;
// }

//5. Greatest common divisor(GCD)
// #include<iostream>
// using namespace std;

// int gcd(int a, int b){
//     int res =min(a,b);
//     while(res>0){
//         if(a%res==0 && b%res ==0){
//             break;
//         }
//         res--;
//     }
//     return res;
// }
// int main(){
//     int a,b;
//     cout<<"Enter a: ";
//     cin>>a;
//     cout<<"Enter b: ";
//     cin>>b;
//     cout<<"gcd is: "<<gcd(a,b)<<endl;
//     return 0;
// }