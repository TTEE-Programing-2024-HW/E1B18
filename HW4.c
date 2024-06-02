#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10

// 定義學生結構體
typedef struct {
    char name[50];
    int student_id;
    int math;
    int physics;
    int english;
    float average;
} Student;

// 全域變數
Student students[MAX_STUDENTS];
int student_count = 0;

// 清除螢幕函式
void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// 計算平均分數函式
void calculate_average(Student* student) {
    student->average = (student->math + student->physics + student->english) / 3.0;
}

// 輸入學生資料函式
void enter_student_grades() {
    clear_screen();
    printf("Enter the number of students (5-10): ");
    int n;
    scanf("%d", &n);

    while (n < 5 || n > 10) {
        printf("Invalid number. Enter the number of students (5-10): ");
        scanf("%d", &n);
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[student_count].name);

        printf("Enter student ID (6 digits): ");
        scanf("%d", &students[student_count].student_id);

        printf("Enter Math grade (0-100): ");
        scanf("%d", &students[student_count].math);

        printf("Enter Physics grade (0-100): ");
        scanf("%d", &students[student_count].physics);

        printf("Enter English grade (0-100): ");
        scanf("%d", &students[student_count].english);

        calculate_average(&students[student_count]);
        student_count++;
    }

    printf("All student grades have been entered.\n");
    printf("Press any key to return to the main menu.\n");
    getchar();
    getchar();
}

// 顯示所有學生資料函式
void display_student_grades() {
    clear_screen();
    for (int i = 0; i < student_count; i++) {
        printf("Name: %s, ID: %d, Math: %d, Physics: %d, English: %d, Average: %.1f\n", 
                students[i].name, students[i].student_id, students[i].math, students[i].physics, students[i].english, students[i].average);
    }
    printf("Press any key to return to the main menu.\n");
    getchar();
    getchar();
}

// 搜尋學生資料函式
void search_student_grades() {
    clear_screen();
    printf("Enter the name of the student to search: ");
    char search_name[50];
    scanf("%s", search_name);
    int found = 0;

    for (int i = 0; i < student_count; i++) {
        if (strcmp(students[i].name, search_name) == 0) {
            printf("Name: %s, ID: %d, Math: %d, Physics: %d, English: %d, Average: %.1f\n", 
                    students[i].name, students[i].student_id, students[i].math, students[i].physics, students[i].english, students[i].average);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("No data found for the given student name.\n");
    }
    printf("Press any key to return to the main menu.\n");
    getchar();
    getchar();
}

// 顯示成績排名函式
void grade_ranking() {
    clear_screen();
    for (int i = 0; i < student_count - 1; i++) {
        for (int j = 0; j < student_count - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < student_count; i++) {
        printf("Name: %s, ID: %d, Average: %.1f\n", 
                students[i].name, students[i].student_id, students[i].average);
    }
    printf("Press any key to return to the main menu.\n");
    getchar();
    getchar();
}

// 退出系統函式
int exit_system() {
    printf("Are you sure you want to exit? (y/n): ");
    char choice;
    scanf(" %c", &choice);
    return (choice == 'y' || choice == 'Y');
}

// 主函式
int main() {
    // 進入畫面
    puts(".~!!!!5J:");
    puts(":^~~?B#######BP5?~.");
    puts(".^~!~~^^^~!7?7!~^~?YGB#########BY.");
    puts("7?!~^^~~~!~^::.......:^!7?Y55PPGPP?^.");
    puts("??...........:.................:::.^!7?7!~~^.");
    puts("57.........~J~...^^...................::^~~!7?~");
    puts(":Y7^:..::^?Y^....!~....~~:....::.............:7?");
    puts("~?J?777GJ:........7?:PY^^...7~...^7:........^P.");
    puts(".J?!77~?Y..........^!~7!77........:?Y7~^:::^!Y!");
    puts("!5...:~7^..............::...........!G!7????7:");
    puts(".7?!^:..............................~G!7????!");
    puts(".^!P!.............................:~^^:.~G.");
    puts(":P:...............................:^~7Y~");
    puts("~5..............................^5?77^.");
    puts("~G?7?!:.........................!P");
    puts("75^::^7J:........................57");
    puts(".P^.....:........................JY");
    puts("Y7......::....................:JJ");
    puts(".J?!~~~7YJ?!~^::............:!57");
    puts(":~!!!~. :~!7??????JJ!...:?J7:");
    puts("....7G!::~P?");
    puts("^???J~");

    system("pause");
    clear_screen();

    // 密碼驗證
    int count = 0;
    int a, b, c, d;
    printf("Enter 4-digit password\n");

    while (count < 3) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a == 2 && b == 0 && c == 2 && d == 4) {
            printf("Correct password\n");
            break;
        } else {
            count++;
            printf("Incorrect password, please try again\n");
        }
    }

    if (count == 3) {
        printf("Incorrect password entered three times, exiting program\n");
        return 0;
    }

    // 主選單
    while (1) {
        clear_screen();
        printf("------------[Grade System]----------\n");
        printf("|  a. Enter student grades          |\n");
        printf("|  b. Display student grades        |\n");
        printf("|  c. Search for student grades     |\n");
        printf("|  d. Grade ranking                 |\n");
        printf("|  e. Exit system                   |\n");
        printf("------------------------------------\n");
        printf("Please choose an option: ");

        char choice;
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                enter_student_grades();
                break;
            case 'b':
                display_student_grades();
                break;
            case 'c':
                search_student_grades();
                break;
            case 'd':
                grade_ranking();
                break;
            case 'e':
                if (exit_system()) {
                    return 0;
                }
                break;
            default:
                printf("Invalid option, please try again\n");
                break;
        }
    }

    return 0;
}
處理使用者輸入時，進一步理解了如何進行有效的錯誤檢測和處理，提升了程式的穩定性。通過模擬一個簡單的成績系統，加深了對資料結構和基本演算法的理解。

