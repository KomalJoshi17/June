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
#include<iostream>
#include<bits/stdc++.h>
using namespace std;    
int main(){
    int chocolate;
    int people;
    cin>>chocolate>>people;
    int result=chocolate/people;
    cout<<result;
    return 0;
}