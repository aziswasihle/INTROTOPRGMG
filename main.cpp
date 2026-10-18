#include <iostream>

using namespace std;

int main()
{
    int employeeID;
    string nameSurname;
    int option1;
    int leaveDays;
    int choice;
    double basicSalaryIT=35000;
    double basicSalaryFinance=30000;
    double basicSalaryLecturer=30000;
    double bonus1;
    double bonus2;
    double bonus3;
    double bonus4;
    double bonus5;
    double bonus6;
    double totalPay;


    cout<<"Good day, please enter the following details: "<<endl;
    cout<<"Employee ID: ";
    cin>>employeeID;
    cout<<"Name and Surname: ";
    cin.ignore();
    getline(cin, nameSurname);
    cout<<endl;
    cout<<endl;
    cout<<nameSurname<<", Please enter the following details:"<<endl;
    cout<<"1 for IT department "<<endl;
    cout<<"2 for Finance department "<<endl;
    cout<<"3 for Teaching Department "<<endl;
    cout<<"Department: ";
    cin>>option1;
    cout<<endl;
    cout<<endl;

    for(;option1<1 || option1>3;)
    {
        cout<<"INVALID INPUT, Please enter 1, 2 or 3"<<endl;
        cin>>option1;
        cout<<endl;
        cout<<endl;
    }

    //people who qualify for basic bonus
    bonus1=basicSalaryIT*0.15;
    bonus2=basicSalaryFinance*0.15;
    bonus3=basicSalaryLecturer*0.15;
    //people who qualify for minimum bonus
    bonus4=basicSalaryIT*0.10;
    bonus5=basicSalaryFinance*0.10;
    bonus6=basicSalaryLecturer*0.10;

    cout<<"Your bonus is calculated based on these conditions:"<<endl;
    cout<<"If leave days exceed 20: 10% of basic salary"<<endl;
    cout<<"If leave days are less than 20: 15% of basic salary"<<endl;
    cout<<"Please enter the amount of leave days you have taken to identify what bonus you qualify for"<<endl;
    cin>>leaveDays;
    cout<<endl;
    cout<<endl;

    for(;leaveDays<0;)
    {
        cout<<"INVALID INPUT, Please enter a valid number"<<endl;
        cin>>leaveDays;
    }

    if(leaveDays<=20)
    cout<<"Basic bonus"<<endl;
    else
    cout<<"Minimum bonus"<<endl;

    if(leaveDays>20)
    option1=option1+3;


    switch(option1)
    {
        case 1:
            totalPay=basicSalaryIT+bonus1;
            cout<<"=========== PAY SLIP ==========="<<endl;
            cout<<"Employee ID: " <<employeeID<<endl;
            cout<<"Department: IT "<<endl;
            cout<<"Leave days: "<<leaveDays<<endl;
            cout<<endl;
            cout<<"Basic salary:  R"<<basicSalaryIT<<endl;
            cout<<"Bonus (15%):   R"<<bonus1<<endl;
            cout<<"Total pay:     R"<<totalPay<<endl;
            cout<<"Thank you"<<endl;
            cout<<endl;
            cout<<endl;
            break;

         case 2:
            totalPay=basicSalaryFinance+bonus2;
            cout<<"=========== PAY SLIP ==========="<<endl;
            cout<<"Employee ID: "<<employeeID<<endl;
            cout<<"Department: Finance"<<endl;
            cout<<"Leave days: "<<leaveDays<<endl;
            cout<<endl;
            cout<<"Basic salary:  R"<<basicSalaryFinance<<endl;
            cout<<"Bonus (15%):   R"<<bonus2<<endl;
            cout<<"Total pay:     R"<<totalPay<<endl;
            cout<<"Thank you"<<endl;
            cout<<endl;
            cout<<endl;
            break;

        case 3:
            totalPay=basicSalaryLecturer+bonus3;
            cout<<"=========== PAY SLIP ==========="<<endl;
            cout<<"Employee ID: " <<employeeID<<endl;
            cout<<"Department: Teaching "<<endl;
            cout<<"Leave days: "<<leaveDays<<endl;
            cout<<endl;
            cout<<"Basic salary:  R"<<basicSalaryLecturer<<endl;
            cout<<"Bonus (15%):   R"<<bonus3<<endl;
            cout<<"Total pay:     R"<<totalPay<<endl;
            cout<<"Thank you"<<endl;
            cout<<endl;
            cout<<endl;
            break;

        case 4:
            totalPay=basicSalaryIT+bonus4;
            cout<<"=========== PAY SLIP ==========="<<endl;
            cout<<"Employee ID: " <<employeeID<<endl;
            cout<<"Department: IT "<<endl;
            cout<<"Leave days: "<<leaveDays<<endl;
            cout<<endl;
            cout<<"Basic salary:  R"<<basicSalaryIT<<endl;
            cout<<"Bonus (10%):   R"<<bonus4<<endl;
            cout<<"Total pay:     R"<<totalPay<<endl;
            cout<<"Thank you"<<endl;
            cout<<endl;
            cout<<endl;
            break;

        case 5:
            totalPay=basicSalaryFinance+bonus5;
            cout<<"=========== PAY SLIP ==========="<<endl;
            cout<<"Employee ID: " <<employeeID<<endl;
            cout<<"Department: Finance "<<endl;
            cout<<"Leave days: "<<leaveDays<<endl;
            cout<<endl;
            cout<<"Basic salary:  R"<<basicSalaryFinance<<endl;
            cout<<"Bonus (10%):   R"<<bonus5<<endl;
            cout<<"Total pay:     R"<<totalPay<<endl;
            cout<<"Thank you"<<endl;
            cout<<endl;
            cout<<endl;
            break;

        case 6:
            totalPay=basicSalaryLecturer+bonus6;
            cout<<"=========== PAY SLIP ==========="<<endl;
            cout<<"Employee ID: " <<employeeID<<endl;
            cout<<"Department: Teaching "<<endl;
            cout<<"Leave days: "<<leaveDays<<endl;
            cout<<endl;
            cout<<"Basic salary:  R"<<basicSalaryLecturer<<endl;
            cout<<"Bonus (10%):   R"<<bonus6<<endl;
            cout<<"Total pay:     R"<<totalPay<<endl;
            cout<<"Thank you"<<endl;
            cout<<endl;
            cout<<endl;
            break;

        }






    return 0;
}

