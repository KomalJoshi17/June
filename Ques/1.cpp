// Create a program to assign value and print variables, make an int variable salary with a value of 50,000.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;  
// int main(){
//     int salary=50000;
//     cout<<"Salary : "<<salary;
//     return 0;
// }



// Create two variables number1 and number2 with values 123 and 12451.34.
// Print number1 and number2 in different lines.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int number1=123;
//     float number2=12451.34;
//    cout<<number1<<endl<<number2;
//     return 0;
// }



// Create a variable to store marks scored by a student and print it in the format given below.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int marks=25;
//     cout<<"I have scored "<<marks<<" in my maths exam";
//     return 0;
// }


// Create a program to find the area of square having side of 8.7 units.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     float side=8.7;
//     float area=side*side;
//     cout<<area;
//     return 0;
// }


// Create a program to divide N candies to M number of students. Suppose you have to divide 18 candies among 4 students equally.How many candies will each student get if candies must be divided equally?
// And how many candies will be left that cannot be divided?
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int candies=18;
//     int students=4;
//     int get_candies=candies/students;
//     int left_candies=candies%students;
//     cout<<get_candies<<endl<<left_candies;
//     return 0;
// }

// Finding if the given number is odd or not
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int number;
//     cin>>number;
//     if(number%2!=0){
//         cout<<1;
//     }else{
//         cout<<0;
//     }
//     return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int number;
//     cin>>number;
//     bool result=(number%2!=0);
//     cout<<result;
//     return 0;
// }


// If we are given m chocolates and there are n people, then can we divide these m chocolates into n people, such that each of them will get an equal number of chocolates and each person should get an integer number of chocolates?
// Write a program for the above problem statement.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;    
// int main(){
//     int chocolate;
//     int people;
//     cin>>chocolate>>people;
//     bool result=(chocolate%people==0);
//     cout<<result;
//     return 0;
// }


// Find the maximum number amongst n1, n2, and n3. You have to first take these numbers as inputs from the user.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;   
// int main(){
//     int num1,num2,num3;
//     cin>>num1>>num2>>num3;
//     if (num1>=num2 && num1>=num3){
//         cout<<"Highest: "<<num1;
//     }else if (num2>=num1 && num2>=num3){
//         cout<<"Highest: "<<num2;
//     }else{
//         cout<<"Highest: "<<num3;
//     }
//     return 0;
// }


// You have three distinct integer numbers: `num1, num2, and num3. Write a C++ program to determine and display which number is the largest, the second largest, and the smallest among the three.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num1,num2,num3;
//     int largest;
//     int middle;
//     int small;
//     cin>>num1>>num2>>num3;
//     if(num1>num2 && num1>num3){
//         largest=num1;
//         if(num2>num3){
//             middle=num2;
//             small=num3;
//         }else{
//             middle=num3;
//             small=num2;
//         }
//     }else if(num2>num1 && num2>num3){
//         largest=num2;
//         if(num1>num3){
//             middle=num1;
//             small=num3;
//         }else{
//             middle=num3;
//             small=num1;
//         }
//     }else{
//         largest=num3;
//         if(num1>num2){
//             middle=num1;
//             small=num2;
//         }else{
//             middle=num2;
//             small=num1;
//         }
//     }
//     cout<<largest<<" "<<middle<<" "<<small;
//     return 0;
// }


// You are developing a simple program for a movie theater in India. The theater has different ticket prices based on the age of the moviegoers. Here are the pricing rules in Indian Rupees (₹):
// Children (age 12 and below) pay ₹100 per ticket.
// Adults (age 13 to 64) pay ₹200 per ticket.
// Seniors (age 65 and above) pay ₹150 per ticket.
// Write a C++ program that takes the age of a moviegoer as input and calculates the ticket price they should pay in Indian Rupees (₹).
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;   
// int main(){
//     int age;
//     cin>>age;

//     if(age<=12){
//         cout<<"Children (age 12 and below) pay ₹100 per ticket.";
//     }else if(age >13 && age < 64){
//         cout<<"Adults (age 13 to 64) pay ₹200 per ticket.";
//     }else{
//         cout<<"Seniors (age 65 and above) pay ₹150 per ticket.";
//     }
//     return 0;
// }


// Write a program that takes two inputs (a and b) from the user and prints the numbers from a to b using while loop
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int a,b;
//     cin>>a>>b;
//     while(a<=b){
//         cout<<a<<" ";
//         a++;
//     }
//     return 0;
// }


// Now print the numbers in the reverse order from b to a using while loop.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int a,b;
//     cin>>a>>b;
//     while(b>=a){
//         cout<<b<<" ";
//         b--;
//     }
//     return 0;
// }

// FACTORIAL
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;
//     int factorial=1;
//     if(number<0){
//         cout<<"NO";
//     }else{
//         for(int i=1;i<=number;i++){
//             factorial*=i;
//         }
//         cout<<factorial;
//     }
//     return 0;
// }