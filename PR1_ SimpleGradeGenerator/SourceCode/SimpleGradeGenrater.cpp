#include <iostream>
using namespace std;

int main(){
	int html_theory, html_viva, html_practical;
	int css_theory, css_viva, css_practical;
	int mq_theory, mq_viva, mq_practical;
	int bootstrap_theory, bootstrap_viva, bootstrap_practical;
	
	//HTML MARKS
	//html Theory
	cout<<"1.1 Enter the Marks Scored in HTML Theory Exam Out of 30 :";
	cin>>html_theory;
		if(html_theory<=30){
			cout<<"Marks in html_theory: "<<html_theory<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 30"<<endl;
		}

	//html Viva
	cout<<"1.2 Enter the Marks Scored in HTML Viva Out of 20 : ";
	cin>>html_viva;
	if(html_viva<=20){
			cout<<"Marks in html_viva: "<<html_viva<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 20"<<endl;
	}

	//html Practical
	cout<<"1.3 Enter the Marks Scored in HTML Practical Out of 50 : ";
	cin>>html_practical;
	if(html_practical<=50){
			cout<<"Marks in html_practical: "<<html_practical<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 50"<<endl;
	}

	//CSS MARKS
	cout<<"2.1 Enter the Marks Scored in Css Theory Exam Out of 30 :";
	cin>>css_theory;
		if(css_theory<=30){
			cout<<"Marks in css_theory: "<<css_theory<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 30"<<endl;
		}

	//CSS Viva
	cout<<"2.2 Enter the Marks Scored in Css Viva  Out of 20 : ";
	cin>>css_viva;
	if(css_viva<=20){
			cout<<"Marks in css_viva: "<<css_viva<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 20"<<endl;
	}

	//Css Practical
	cout<<"2.3 Enter the Marks Scored in Css Practical Out of 50 : ";
	cin>>css_practical;
	if(css_practical<=50){
			cout<<"Marks in css_practical: "<<css_practical<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 50"<<endl;
	}

	//Media Query
	cout<<"3.1 Enter the Marks Scored in Media Query Theory Exam Out of 30 : ";
	cin>>mq_theory;
	if(mq_theory<=30){
			cout<<"Marks in mq_theory: "<<mq_theory<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 30"<<endl;
	}

	//MediaQuery Viva
	cout<<"3.2 Enter the Marks Scored in Media Query Viva Out of 20 : ";
	cin>>mq_viva;
	if(mq_viva<=20){
			cout<<"Marks in mq_viva: "<<mq_viva<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 20"<<endl;
	}

	//MediaQuery Practical
	cout<<"3.3 Enter the Marks Scored in Media Query Practical Out of 50 : ";
	cin>>mq_practical;
	if(mq_practical<=50){
			cout<<"Marks in mq_practical: "<<mq_practical<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 50"<<endl;
	}

	//Bootstrap Marks
	cout<<"4.1 Enter the Marks Scored in Bootstrap Theory Exam Out of 30 : ";
	cin>>bootstrap_theory;

	if(bootstrap_theory<=30){
			cout<<"Marks in bootstrap_theory: "<<bootstrap_theory<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 30"<<endl;
	}

	//Bootstrap Viva
	cout<<"4.2 Enter the Marks Scored in Bootstrap Viva Out of 20 : ";
	cin>>bootstrap_viva;
	if(bootstrap_viva<=20){
			cout<<"Marks in bootstrap_viva: "<<bootstrap_viva<<endl;
		}else{
			cout<<"The Marks For this Exam Can't Cross 20"<<endl;
	}

	//Boostrap Practical
	cout<<"4.3 Enter the Marks Scored in Bootstrap Practical Out of 50 : ";
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

	cout<<"Your Marks Scored in HTML Exam : "<<html_total<<" Percentage of Marks Scored in HTML Exam:  "<<html_percentage<<"%"<<endl;
	cout<<"Your Marks Scored in Css Exam : "<<css_total<<" Percentage of Marks Scored in Css Exam:  "<<css_percentage<<"%"<<endl;
	cout<<"Your Marks Scored in Media Query Exam :"<<mq_total<<" Percentage of Marks Scored in Media Query Exam:  "<<mq_percentage<<"%"<<endl;
	cout<<"Your Marks Scored in Bootstrap Exam : "<<bootstrap_total<<" Percentage of Marks Scored in Bootstrap Exam:  "<<bootstrap_percentage<<"%"<<endl;

	int total_marks = html_total + css_total + mq_total + bootstrap_total;
	float Percentage =  (total_marks/400.0)*100;
	
     

	//used the Terrinory operater;
	(total_marks >= 350)? cout << "Total Marks Scored During In Exams " << total_marks << "/400"<<" The Percentage Secured "<<Percentage<<"%"<< endl: 
    (total_marks >= 300)? cout<<"Total Marks Scored During In Exams "<<total_marks<<"/400"<< "/400"<<" The Percentage Secured "<<Percentage<<"%"<<endl:
    (total_marks >= 250)? cout << "Total Marks Scored During In Exams " << total_marks << "/400"<<" The Percentage Secured "<<Percentage<<"%"<< endl:
    (total_marks >= 200)? cout << "Total Marks Scored During In Exams " << total_marks<< "/400"<<" The Percentage Secured "<<Percentage<<"%":
        cout << "For Placement assignment more Than 200 marks" << endl;

        int Grade =static_cast<int>(Percentage / 10);
        switch (Grade) {
        case 9: 
            cout << "Grade: A (Excellent)" << endl;
            break;
        case 8:
            cout << "Grade: B (Good)" << endl;
            break;
        case 7:
            cout << "Grade: C (Average)" << endl;
            break;
        case 1:
            cout << "Grade: D (Below Average)" << endl;
            break;
        default:
            cout << "Grade: F" << endl;
            break;
    }

	// Extra message using if-else
	if (total_marks >= 200 && total_marks <=400) {
    	cout << "Congrats You have cleared the exams." << endl;
	} else {
    	cout << "Try Next Time. Better luck!" << endl;
	}

}