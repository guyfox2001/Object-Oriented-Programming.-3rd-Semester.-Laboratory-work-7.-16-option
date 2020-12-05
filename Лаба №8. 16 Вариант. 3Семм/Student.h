#pragma once
#include"Group.h"

using namespace System;

ref class Student
{
public:
	String^ get_name();
	String^ get_surname();
	Group^ get_group();
	Int32^ get_student_ID_number();
	void set_name(String^ Set_Name);
	void set_surname(String^ Set_SurName);
	void set_group(Group^ Set_Group);
	void set_student_ID_number(Int32^ Set_student_ID_number);
private:
	String^ PrNameStudent;
	String^ PrSurnameStudent;
	Group^ PrOurGroup;
	Int32^ Pr_student_ID_number;
};

