#include "Group.h"

void Group::add_student(String^ Name, String^ Surname, Int32^ ID)
{
    Student^ Adding = gcnew Student;
    Adding->set_name(Name);
    Adding->set_surname(Surname);
    Adding->set_group(this);
    Adding->set_student_ID_number(ID);

    this->Students->Add(Adding);
    this->Size++;

    AddedStudent("We're added student " + Adding->get_name() + ' ' + Adding->get_surname() + " In Group " + Adding->get_group()->get_name());

    if (this->Size > 5)
        CountStudent(this->Size);
}

String^ Group::get_name()
{
    return this->GroupName;
}

void Group::Print_Students_count(Int32^ count)
{
    Console::WriteLine("We have a " + count->ToString() + " students" );
}
