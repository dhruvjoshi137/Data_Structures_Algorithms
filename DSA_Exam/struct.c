// #include<stdio.h>
// struct Point{
//     int x;
//     int y;
// };
//     void printPoint(struct Point p){
//         printf("Point : (%d,%d)\n",p.x,p.y);
//     }
//     int main(){
//         struct Point p1={p1.x,20};
//         p1.x=90;
//         struct Point p2;
//         p2.x=30;
//         p2.y=40;
//         printPoint(p2);
//         printPoint(p1);
//         }
























#include<stdio.h>
struct marks{
    int maths;
    int science;
};
void printMarks(struct marks m){
    printf("Marks : (%d,%d)\n",m.maths,m.science);
}

int main(){
    struct marks m1={100,90};
    struct marks m2={33,99};
    printMarks(m1);
    printMarks(m2);
}