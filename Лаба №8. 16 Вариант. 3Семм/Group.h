#pragma once
#include"Student.h"
using namespace System;
using namespace System::Collections;

delegate void OurMessage(String^ Mess);
delegate void count_student(Int32^ Count);
ref class Group
{
public:
	
	void add_student(Student^ AddingStudent);
	void add_student(String^Name, String^Surname, Int32^ ID);
	String^ get_name();
	void Print_Students_count(Int32^ count);
	event OurMessage^ AddedStudent;
	event count_student^ CountStudent;
private:
	ArrayList^ Students;
	String^ GroupName;
	Int32 Size = 0;
	
};

