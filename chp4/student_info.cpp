#include "Student_info.h "


//함수 원형 정의
bool compare(const Student_info& a, const Student_info b) {

	return a.name < b.name; // true나 false 반환 
}
// 한학생의 정보 읽기
istream& read(istream& is , Student_info& s) {
	//학생 이름, 중간고사, 기말고사 점수 읽어 저장
	is >> s.name >> s.midterm >> s.final;
	read_hw(is, s.homework);


	return 0;
}
istream& read_hw(istream& vector<double>&);
