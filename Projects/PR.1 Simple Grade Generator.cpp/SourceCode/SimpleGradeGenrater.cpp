#include <iostream>
using namespace std;

int main(){
	int html_theory, html_viva, html_practical;
	int css_theory, css_viva, css_practical;
	int mq_theory, mq_viva, mq_practical;
	int bootstrap_theory, bootstrap_viva, bootstrap_practical;
	
	//HTML MARKS
	cout<<"Enter the Marks Scored in HTML Theory Exam :";
	cin>>html_theory;

	cout<<"Enter the Marks Scored in HTML Viva : ";
	cin>>html_viva;

	cout<<"Enter the Marks Scored in HTML Practical : ";
	cin>>html_practical;

	//CSS MARKS
	cout<<"Enter the Marks Scored in Css Theory Exam :";
	cin>>css_theory;

	cout<<"Enter the Marks Scored in Css Viva : ";
	cin>>css_viva;
	
	cout<<"Enter the Marks Scored in Css Practical : ";
	cin>>css_practical;

	//Media Query
	cout<<"Enter the Marks Scored in Media Query Theory Exam :";
	cin>>mq_theory;

	cout<<"Enter the Marks Scored in Media Query Viva : ";
	cin>>mq_viva;

	cout<<"Enter the Marks Scored in Media Query Practical : ";
	cin>>mq_practical;

	//Bootstrap Marks
	cout<<"Enter the Marks Scored in Bootstrap Theory Exam :";
	cin>>bootstrap_theory;

	cout<<"Enter the Marks Scored in Bootstrap Viva : ";
	cin>>bootstrap_viva;
	
	cout<<"Enter the Marks Scored in Bootstrap Practical : ";
	cin>>bootstrap_practical;

	int html_total = html_theory + html_viva + html_practical;
	int html_percentage = html_total;

	int css_total = css_theory + css_viva + css_practical;
	int css_percentage = css_total;

	int mq_total = mq_theory + mq_viva + mq_practical;
	int mq_percentage =  mq_total;

	int bootstrap_total = bootstrap_theory + bootstrap_viva + bootstrap_practical;
	int bootstrap_percentage =  bootstrap_total;

	cout<<"Your Marks Scored in HTML Exam :"<<html_total<<" Percentage of Marks Scored in HTML Exam:  "<<html_percentage<<"%"<<endl;
	cout<<"Your Marks Scored in Css Exam :"<<css_total<<" Percentage of Marks Scored in Css Exam:  "<<css_percentage<<"%"<<endl;
	cout<<"Your Marks Scored in Media Query Exam :"<<mq_total<<" Percentage of Marks Scored in Media Query Exam:  "<<mq_percentage<<"%"<<endl;
	cout<<"Your Marks Scored in Bootstrap Exam :"<<bootstrap_total<<" Percentage of Marks Scored in Bootstrap Exam:  "<<bootstrap_percentage<<"%"<<endl;

	int total_marks = html_total + css_total + mq_total + bootstrap_total;
	float Percentage =  (total_marks/400.0)*100;

	if(total_marks >= 350 && Percentage >= 90){
		cout<<"Total Marks Scored During In Exams "<<total_marks<<"/400"<< " Total Percentage Secured "<<Percentage<<"%"<<endl;
		cout<<"So you Got A+ Grade"<<endl;
	}else{
		if(total_marks >= 300 && Percentage >= 80){
		cout<<"Total Marks Scored During In Exams "<<total_marks<<"/400"<< " Total Percentage Secured "<<Percentage<<"%"<<endl;
		cout<<"So you Got A Grade"<<endl;
		} else{
			if(total_marks >= 250 && Percentage >= 70){
				cout<<"Total Marks Scored During In Exams "<<total_marks<<"/400"<< " Total Percentage Secured "<<Percentage<<"%"<<endl;
				cout<<"So you Got B+ Grade"<<endl;
			}else{
				if(total_marks >= 200 && Percentage >= 60){
				cout<<"Total Marks Scored During In Exams "<<total_marks<<"/400"<< " Total Percentage Secured "<<Percentage<<"%"<<endl;
				cout<<"So you Got B+ Grade"<<endl;
				}else{
					cout<<"For Placement assignment You Need 60% and more 200 marks"<<endl;
				}
			}
		}
	}
}