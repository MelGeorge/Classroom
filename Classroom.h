#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

struct Student {
   string name;
   string hobby;
   double gpa;
};

class Classroom {
   public:
      Classroom(vector<Student> & students_in, string teacher_in, int time_in);
      Student get_student(int student_index);
      void set_student(int student_index, Student new_student);
      string get_teacher();
      void set_teacher(string new_teacher);
      int get_time();
      void set_time(int new_time);

   private:
      vector<Student> students;
      string teacher;
      int time;

      bool validate_time(int new_time);
};

#endif
