// #include<stdio.h>

// int main(){ //All program start executes with main function
//     printf("Hello world"); //printf is a function that print the value 
// }
//2. WAP check prime or not 
 //#include <stdio.h>

// int main() {
    
//     int a;
//     printf("Enter a: ");
//     scanf("%d",&a);
//     if(a<=1){
//         printf("Not a prime");
//     }
//     int c=0;
//     for(int i =2; i<a;i++){
//         c++;
//     }
//     if(c == 0){
//         printf("Not a prime");
//     }else{
//         printf("prime");
//     }

//     return 0;
// }

//3.WAP sum array element
// #include<stdio.h>

// int main(){
//     int a[5];
//   for(int i =0; i<5;i++){
//       scanf("%d",&a[i]);
//   }
//     int sum = 0;
//     for(int i =0; i<5;i++){
//         sum +=a[i];
//     }
//     printf("sum: %d",sum);
//     return 0;
// }

//3.WAP Largest number
//  #include<stdio.h>

// int main(){
//     int a[5];
//   for(int i =0; i<5;i++){
//       scanf("%d",&a[i]);
//   }
//   int max =a[0];
//   for(int i =0; i<5; i++){
//       if(a[i]>max){
//           max = a[i];
//       }
//   }
//   printf(" max value: %d",max);
//   return 0;
//}

//4.WAP min  number in an array
//  #include<stdio.h>

// int main(){
//     int a[5];
//   for(int i =0; i<5;i++){
//       scanf("%d",&a[i]);
//   }
//   int min =a[0];
//   for(int i =0; i<5; i++){
//       if(a[i]<min){
//           min = a[i];
//       }
//   }
//   printf(" min value: %d",min);
//   return 0;
// }

//5.WAP Linear Search 

// #include<stdio.h>

// int main(){
//     int a[5];
//     int found =0;
//     for(int i =0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     int key = 30;
    
//     for(int j = 0; j<5; j++){
//         if(a[j] == key){
//            found = 1;
//             break;
//         }
//     }
//         if(found ==1){
//             printf("Found");
//         }else{
//             printf("Not Found");
//         }
      
    
//     return 0;
// }

//check even and odd
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a: ");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("Even");
//     }else{
//         printf("Odd");
//     }
//     return 0;
// }
