#include "Classroom.h"

using namespace std;

Classroom::Classroom(vector<Student> & students_in, string teacher_in, int time_in) : students(students_in), teacher(teacher_in), time(time_in) {

   assert(students_in.size() >= 1);

}

Student Classroom::get_student(int student_index) {
   return students[student_index];
}

void Classroom::set_student(int student_index, Student new_student) {
   assert(student_index < students.size() && student_index > -1);

   students[student_index] = new_student;
}

string Classroom::get_teacher() {
   return teacher;
}

void Classroom::set_teacher(string new_teacher) {
   teacher = new_teacher;
}

int Classroom::get_time() {
   return time;
}

void Classroom::set_time(int new_time) {
   assert(this->validate_time(new_time));
   this->time = new_time;
}

bool Classroom::validate_time(int new_time) {
   return new_time >= 0 && new_time <= 24;
}
