#include <stdio.h>
const int FINE_PER_DAY = 20;

struct Date {
    int day, month, year;
};

struct Member {
    char name[30];
    int id;
};
struct Book {
    char title[50];
    struct Member member;
    struct Date dueDate;
    struct Date returnedDate;
};

int calculateLateDays(struct Date due, struct Date returned) {
    int dueDays, returnedDays, lateDays;

    dueDays = due.year * 360 + due.month * 30 + due.day;

    returnedDays = returned.year * 360
                 + returned.month * 30 + returned.day;

    lateDays = returnedDays - dueDays;

    if (lateDays < 0) {
        lateDays = 0;
    }

    return lateDays;
}

int main() {

    struct Book books[4] = {
        {"C Programming", {"Ali", 101},
         {10, 11, 2026}, {15, 11, 2026}},

        {"Data Structures", {"Sara", 102},
         {28, 11, 2026}, {2, 12, 2026}},

        {"Discrete Math", {"Usman", 103},
         {20, 12, 2026}, {18, 12, 2026}},

        {"Calculus", {"Hira", 104},
         {29, 12, 2026}, {3, 1, 2027}}
    };

    int i, lateDays, fine;

    for (i = 0; i < 4; i++) {

        lateDays = calculateLateDays(
            books[i].dueDate,
            books[i].returnedDate
        );

        fine = lateDays * FINE_PER_DAY;

        printf("%s\t | %s  (%d) | late: %d Days | Fine: Rs %d\n",books[i].title,books[i].member.name,books[i].member.id,lateDays,fine);
    }

    return 0;
}
