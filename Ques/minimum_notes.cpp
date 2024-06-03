// Write a C++ program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // int amount;
    // cin>>amount;
    // int notes=0;
    // int notes1=0;
    // int notes2=0;
    // int notes3=0;
    // int notes4=0;
    // int notes5=0;
    // int notes6=0;
    // int notes7=0;
    // for(int i=amount;i>500;i/=500){
    //     notes+=i/500;
    //     int rest_amount=amount-notes*500;
    //         for (int i=rest_amount;i>100;i/=100){
    //             notes1+=i/100;
    //             int rest_amount1=rest_amount-notes1*100;
    //                 for (int i=rest_amount1;i>50;i/=50){
    //                     notes2+=i/50;
    //                     int rest_amount2=rest_amount1-notes2*50;
    //                     for (int i=rest_amount2;i>20;i/=20){
    //                     notes3+=i/20;
    //                     int rest_amount3=rest_amount2-notes3*20;
    //                     for (int i=rest_amount3;i>10;i/=10){
    //                     notes4+=i/10;
    //                     int rest_amount4=rest_amount3-notes4*10;
    //                     for (int i=rest_amount4;i>5;i/=5){
    //                     notes5+=i/5;
    //                     int rest_amount5=rest_amount4-notes5*5;
    //                     for (int i=rest_amount5;i>2;i/=2){
    //                     notes6+=i/2;
    //                     int rest_amount6=rest_amount5-notes6*2;
    //                     for (int i=rest_amount6;i>1;i/=1){
    //                     notes7+=i/1;
    //                     int rest_amount7=rest_amount6-notes7*1;
    //                 }
    //                 }
    //                 }
    //                 }
    //                 }
    //                 }

    // }
    // }
    // cout<<notes<<endl<<notes1<<endl<<notes2<<endl<<notes3<<endl<<notes4<<endl<<notes5<<endl<<notes6<<endl<<notes7;

     int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;
    
    /* Initialize all notes to 0 */
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;


    /* Input amount from user */
    cout<<"Enter amount: "<<endl;
    cin>>amount;


    if(amount >= 500){
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100){
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50){
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20){
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10){
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5){
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2){
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1){
        note1 = amount;
    }

    /* Print required notes */
    cout<<"Total number of notes "<<endl;
    cout<<"500 ="<< note500<<endl;
    cout<<"100 ="<< note100<<endl;
    cout<<"50 ="<< note50<<endl;
    cout<<"20 ="<< note20<<endl;
    cout<<"10 ="<< note10<<endl;
    cout<<"5 ="<< note5<<endl;
    cout<<"2 ="<< note2<<endl;
    cout<<"1 ="<< note1<<endl;
    return 0;
}