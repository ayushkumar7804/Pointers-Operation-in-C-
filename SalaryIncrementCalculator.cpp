/*Ayush Yadav
  24070123028*/


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void calculatehike( double &current_salary, bool& has_completed_one_year, bool& has_completed_research_projects, bool& has_new_project_pipeline ){
    if( has_completed_one_year && has_completed_research_projects && has_new_project_pipeline){
        current_salary *= 1.20;
        cout << "Employee is eligible for hike in the salary "<< endl;
    }
    else{
        cout << " The conditions are not met so employee will not recieve the hike"<< endl;

    }
}
int main() {
    double current_salary;
    bool has_completed_one_year;
    bool has_completed_research_projects;
    bool has_new_project_pipeline;

    double* salaryptr= &current_salary;
    bool* yearptr = &has_completed_one_year;
    bool *reasearch_project = &has_completed_research_projects; 
    bool *new_pipline = &has_new_project_pipeline;

    cout << "Enter Current Employee Salary ---> "<< endl;
    cin >> current_salary;

    cout << "has the employee completed 1 year ?(1 for yes and 0 for no ): "<< endl;
    cin >> has_completed_one_year;

    cout << "has completed the research projects?( 1 for YES and 0 for NO ):"<< endl;
    cin  >> has_completed_research_projects;

    cout << "Is the new project in the pipline?( select 1 for True and 0 for False): "<< endl;
    cin >> has_new_project_pipeline; 

    calculatehike (current_salary, has_completed_one_year, has_completed_research_projects,has_new_project_pipeline);

    cout << "Final Salary: " << current_salary << endl;
    


}
/*OUTPUT'
  Enter Current Employee Salary --->
100000
has the employee completed 1 year ?(1 for yes and 0 for no ): 
1
has completed the research projects?( 1 for YES and 0 for NO ):
1
Is the new project in the pipline?( select 1 for True and 0 for False): 
1
Employee is eligible for hike in the salary 
Final Salary: 120000*/

/* When the conditon didn't met so OUTPUT would be ----->>
Enter Current Employee Salary ---> 
100000
has the employee completed 1 year ?(1 for yes and 0 for no ): 
0
has completed the research projects?( 1 for YES and 0 for NO ):
1
Is the new project in the pipline?( select 1 for True and 0 for False): 
1
 The conditions are not met so employee will not recieve the hike
Final Salary: 100000*/
    

 
