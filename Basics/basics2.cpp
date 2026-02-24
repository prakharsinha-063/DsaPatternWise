// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   //conditional statements if else
//   //agar if k baad ek se jyada line toh curly brances wrna zaroori nhi
//   //1 true koi bhi number chalega
//   //0 false
//   //else tbhi chalega jab if ki condition false ho jayegi
//   //= or == assignment operator or comparative operator
//   int num=5;
//   if(num%2==0){
//     cout<<"Hello world\n";
//   }else{
//     cout<<"Fuck off world\n";
//   }
//   int a;
//   cin>>a;
//   if(a>10){
//     cout<<"a is greater than 10";
//   }else if(a>5 && a<10){
//     cout<<"a is greater than 5 but less than 10";
//   }else if(a>2 && a<5){
//     cout<<"a is greater than 2 but less than 5";
//   }else{
//     cout<<"a is smaller than 2";
//   }
// }
//and && saare true and v chalega
// or || ek bhi true or v chalega


//loops ek hi cheez baar baar k liye

// #include<iostream>
// using namespace std;
// int main(){
//   //for loop
//   //initialization ;comparator : true hua toh loop k ander jaoge;increment or decrement i++ or i=i+1
//   for(int i=0;i<10;i++){
//     cout<<"prakhar\n";
//   }

//   //while
//   int i=0;
//   while(i<10){
//     cout<<"prakhar\n";
//     i++;
//   }
// }

//practice
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int num;
//   cin>>num;
//   if(num){
//     cout<<"if k ander agar kuch v non zero h toh woh true mana jayega\n";
//   }else{
//     cout<<" num ka value zero h isliye if k ander ka condition false hua isliye else run hua ";
//   }
// }

//sum of 10 numbers 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int a=1,b=2,c=11,d=12,e=45,f=90,g=-23,h=0,i=1234,j=987;
//   cout<<"sum is "<<a+b+c+d+e+f+g+h+i+j;
//   return 0;
// }

//sum of first 10 numbers
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int sum=0;
//   for(int i=1;i<=10;i++){
//     sum+=i;
//   }
//   cout<<sum;
//   return 0;
// }

//sum of even numbers between 20 and 40 (both included)
#include<iostream>
using namespace std;
int main(){
  int sum=0; 
  // or i+=2 
  for(int i=20;i<=40;i++){
    if(i%2==0){
      sum+=i;
    }
    
  }
  cout<<sum;
  return 0;
}