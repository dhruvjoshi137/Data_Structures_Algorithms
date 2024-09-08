#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks";
    cin>>marks;
    char grade;
    if(marks>=91 and marks<=100){
        cout<<"G A"<<endl;
        grade='A';

    }else if(marks>=81 and marks<=90){
        cout<<"GRADE B"<<endl;
        grade='B';

    }else if(marks>=71 and marks<=80){
    cout<<"GRADE C"<<endl;
    grade='C';
    }else if(marks>=61 and marks<=70){
        cout<<"GRADE C"<<endl;
        grade='D';
    }else if(marks>=51 and marks<=60){
        cout<<"GRADE B"<<endl;
        grade='E';
    }else{
        cout<<"GRADE F"<<endl;
        grade='F';
    }


    /*if(grade=='A'){
        cout<<"Very good"<<endl;

    }else if(grade=='B'){
        cout<<"Good"<<endl;

    }else if(grade=='C'){
        cout<<"Average"<<endl;

    }else if(grade=='D'){
        cout<<"Poor"<<endl;

    }else if(grade=='E'){
        cout<<"Very poor"<<endl;

    }else if(grade=='F'){
        cout<<"Fail"<<endl;

    }
    return 0;*/


switch(grade){
    case 'A': cout<<"very good"<<endl;break;
    case 'B': cout<<"good"<<endl;break;
    case 'C': cout<<"average"<<endl;break;
    case 'D': cout<<"poor"<<endl;break;
    case 'E': cout<<"very poor"<<endl;break;
    default: cout<<"you have failed"<<endl;break;
return 0;
}

}