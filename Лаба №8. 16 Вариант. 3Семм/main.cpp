#include "Group.h"
#include"Student.h"


void main(){
	String
		^Name      = gcnew String("ExampleName"),
		^Surname   = gcnew String("ExampleSurName"),
		^GroupName = gcnew String("ExampleGroupName");
	Int32
		^ ID = gcnew Int32(123456789);
	Group^ AI_19 = gcnew Group;
	for (int i = 0; i < 20; i++) {
		AI_19->add_student(Name, Surname, ID);
	}

}