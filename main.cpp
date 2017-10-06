#include "Classroom.h"

using namespace std;

int main() {
   Student Bob;
   Bob.name = "Bob";
   Bob.hobby = "Basketball";
   Bob.gpa = 3.5;

   vector<Student> students;
   students.push_back(Bob);

   Classroom engin101(students, "Professor Ringenberg", 12);

   cout << "What time is ENGIN 101?" << endl;
   cout << "It starts at " << engin101.get_time() << endl;
   cout << "Wait, that's not the right time!" << endl;
   
   engin101.set_time(11);

   cout << "Fixed it. Now ENGIN 101 is at " << engin101.get_time() << endl;

   return 0;

}
