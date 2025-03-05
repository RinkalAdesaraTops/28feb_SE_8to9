#include <stdio.h>
#include <string.h>


typedef struct computerengringstudentdetails {
    int rollno; //2110
    char name[100]; // 2010
    float cgpa; //2114
} ces;

(*ptr).name
ptr->name
void print(ces s1);

int main() {
    
    ces s1 = {1, "Dhruv", 98.99};
    ces s2 ={2,"Krisha",98.99};

    
    print(s1);

    return 0;
}


void print(ces s1) {
    printf("Student info\n");
    printf("Student roll no is : %d\n", s1.rollno);
    printf("Student Name is : %s\n", s1.name);
    printf("Student cgpa is : %.2f\n", s1.cgpa);
}



house no
block
city
state
