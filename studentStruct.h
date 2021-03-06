#pragma once
#include <SDKDDKVer.h>
//#include <stdio.h>
//#include <tchar.h>
#include<string>
#include <stdlib.h>
#include <iostream>
#ifndef _STUDENTSTRUCT_H_
#define _STUDENTStruct_H_

using namespace std;
struct SubjectMark {
	string subject;
	string  mark;
};
struct Student
{
	bool valid;
	string fio;
	string group;
	int subjCount;
	SubjectMark *marks;
};

Student *Create();
bool Init(Student &student, string str);
bool Clear(Student &student);
bool Kill(Student *student);
//bool AddSubjects(Student &student,const string _subject,const string _mark);
bool AddSubjects(Student &student, const string subjectMarks);
bool PrintStudent(const Student &student);
bool AddStudent(Student ***students, const int maxStudentsCount, int *studentsCount, Student &newStudent);
bool AddStudents(Student ***students, const int maxStudentsCount, int *studentsCount, Student ***newStudents, int newStudentsCount);
bool AddStudentsFromFile(const string filePath, Student ***students, const int maxStudentsCount, int *studentsCount);
bool AddConsoleTextColor(const string error, const int color = 12);
string StudentToString(const Student &student);
bool SaveStudentsToFile(const string filePath, Student **students, const int studentsCount);
#endif // !_MYSTRUCT_H_
