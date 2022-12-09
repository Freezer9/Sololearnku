struct student
{
    int age;
    int grade;
    char name[40];
};

int main(){
    /* declare two variables*/
    struct student s1 = {19, 9, "John"};
    struct student s2 = {22, 10, "Batman"};
}

/* or type cast*/
struct student s1;
s1 = (struct student) {19, 9, "John"};

/* or use named member initialization */
struct student s1 = {.grade = 9, .age = 19, .name = "John"};

/* accessing struct members */
s1.age = 19;


