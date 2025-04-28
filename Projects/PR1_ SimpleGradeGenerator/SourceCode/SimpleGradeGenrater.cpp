#include <iostream>
using namespace std;

int main(){
	int html_theory, html_viva, html_practical;
	int css_theory, css_viva, css_practical;
	int mq_theory, mq_viva, mq_practical;
	int bootstrap_theory, bootstrap_viva, bootstrap_practical;
	
	//HTML MARKS
	//html Theory
	cout<<"Enter the Marks Scored in HTML Theory Exam ";
	cin>>html_theory;
		if(html_theory<=30){
			cout<<"Marks in html_theory: "<<html_theory<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 30"<<endl;
		}

	//html Viva
	cout<<"Enter the Marks Scored in HTML Viva ";
	cin>>html_viva;
	if(html_viva<=20){
			cout<<"Marks in html_viva: "<<html_viva<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 20"<<endl;
	}

	//html Practical
	cout<<"Enter the Marks Scored in HTML Practical : ";
	cin>>html_practical;
	if(html_practical<=50){
			cout<<"Marks in html_practical: "<<html_practical<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 50"<<endl;
	}

	//CSS MARKS
	cout<<"Enter the Marks Scored in Css Theory Exam :";
	cin>>css_theory;
		if(css_theory<=30){
			cout<<"Marks in css_theory: "<<css_theory<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 30"<<endl;
		}

	//CSS Viva
	cout<<"Enter the Marks Scored in Css Viva : ";
	cin>>css_viva;
	if(css_viva<=20){
			cout<<"Marks in css_viva: "<<css_viva<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 20"<<endl;
	}

	//Css Practical
	cout<<"Enter the Marks Scored in Css Practical : ";
	cin>>css_practical;
	if(css_practical<=50){
			cout<<"Marks in css_practical: "<<css_practical<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 50"<<endl;
	}

	//Media Query
	cout<<"Enter the Marks Scored in Media Query Theory Exam :";
	cin>>mq_theory;
	if(mq_theory<=30){
			cout<<"Marks in mq_theory: "<<mq_theory<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 30"<<endl;
	}

	//MediaQuery Viva
	cout<<"Enter the Marks Scored in Media Query Viva : ";
	cin>>mq_viva;
	if(mq_viva<=20){
			cout<<"Marks in mq_viva: "<<mq_viva<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 20"<<endl;
	}

	//MediaQuery Practical
	cout<<"Enter the Marks Scored in Media Query Practical : ";
	cin>>mq_practical;
	if(mq_practical<=50){
			cout<<"Marks in mq_practical: "<<mq_practical<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 50"<<endl;
	}

	//Bootstrap Marks
	cout<<"Enter the Marks Scored in Bootstrap Theory Exam :";
	cin>>bootstrap_theory;

	if(bootstrap_theory<=30){
			cout<<"Marks in bootstrap_theory: "<<bootstrap_theory<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 30"<<endl;
	}

	//Bootstrap Viva
	cout<<"Enter the Marks Scored in Bootstrap Viva : ";
	cin>>bootstrap_viva;
	if(bootstrap_viva<=20){
			cout<<"Marks in bootstrap_viva: "<<bootstrap_viva<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 20"<<endl;
	}

	//Boostrap Practical
	cout<<"Enter the Marks Scored in Bootstrap Practical : ";
	cin>>bootstrap_practical;
	if(bootstrap_practical<=50){
			cout<<"Marks in bootstrap_practical: "<<bootstrap_practical<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 50"<<endl;
	}

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
	
     

	//used the Terrinory operater;
	(total_marks >= 350)? cout << "Total Marks Scored During In Exams " << total_marks << "/400"<< endl: 
    (total_marks >= 300)? cout<<"Total Marks Scored During In Exams "<<total_marks<<"/400"<<endl:
    (total_marks >= 250)? cout << "Total Marks Scored During In Exams " << total_marks << "/400"<< endl:
    (total_marks >= 200)? cout << "Total Marks Scored During In Exams " << total_marks << "/400":
        cout << "For Placement assignment more Than 200 marks" << endl;


        switch (total_marks / 100) {
        case 4: 
            cout << "Grade: A (Excellent)" << endl;
            break;
        case 3:
            cout << "Grade: B (Good)" << endl;
            break;
        case 2:
            cout << "Grade: C (Average)" << endl;
            break;
        case 1:
            cout << "Grade: D (Below Average)" << endl;
            break;
        default:
            cout << "Grade: F (Try Next Time)" << endl;
            break;
    }

	// Extra message using if-else
	if (total_marks >= 200) {
    	cout << "Congrats! You have cleared the exams." << endl;
	} else {
    	cout << "Try Next Time. Better luck!" << endl;
	}

}