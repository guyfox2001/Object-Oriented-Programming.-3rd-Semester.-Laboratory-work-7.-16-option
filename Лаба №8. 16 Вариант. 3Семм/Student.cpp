#include "Student.h"


String^ Student::get_name()
{
    return this->PrNameStudent;
}

String^ Student::get_surname()
{
    return this->PrSurnameStudent;
}

Group^ Student::get_group()
{
    return this->PrOurGroup;
}

Int32^ Student::get_student_ID_number()
{
    return this->Pr_student_ID_number;
}

void Student::set_name(String^ Set_Name)
{
    this->PrNameStudent = Set_Name;
}

void Student::set_surname(String^ Set_SurName)
{
    this->PrSurnameStudent = Set_SurName;

}

void Student::set_group(Group^ Set_Group)
{
    this->PrOurGroup = Set_Group;

}

void Student::set_student_ID_number(Int32^ Set_student_ID_number)
{
    this->Pr_student_ID_number = Set_student_ID_number;
}
