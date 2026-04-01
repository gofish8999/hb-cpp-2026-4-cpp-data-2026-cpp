#pragma once

// student_info.h

#ifndef GUARD_Student_info_h
#defndef GUARD_Student_info_h

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student_info {

	string name;
	double midterm, final;
	vector<double> homework;


};

//함수 원형 정의
bool compare(const Student_info&, const Student_info);
istream& read(istream& Student_info&); // 한학생의 정보 읽기
istream& read_hw(istream& vector<double>&);

#endif

