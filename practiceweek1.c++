#include<iostream>
using namespace std;
/*int main(){
    cout<<"Hello, World!";
    return 0;
}*/
/*int main(){
    int studentCount=0;
    cout<<"int:"<<studentCount<<endl;
    float temperature=36.6;
    cout<<"float:"<<temperature<<endl;
    char grade='A';
    cout<<"char:"<<grade<<endl;
    bool passed=true;
    cout<<"bool:"<<passed<<endl;
    return 0;
}*/
/*int main(){
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "You entered: " << a << " and " << b << endl;
    cout << "Sum: " << (a + b) << endl;

    return 0;
}*/
/*int main(){
    int studentScore = 85;
    int StudentRecord = 1500;
    int student_score = 90;
    int MAX_BUFFER_SIZE = 1024;

    cout << "studentScore: " << studentScore << endl;
    cout << "StudentRecord: " << StudentRecord << endl;
    cout << "student_score: " << student_score << endl;
    cout << "MAX_BUFFER_SIZE: " << MAX_BUFFER_SIZE << endl;

    return 0;

}*/
/*int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if(n % 2 == 0){
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }


    
    return 0;
}*/
/*int main(){
    char grade;
    cout <<"Enter your grade: ";
    cin >> grade;
    switch(grade){
        case 'A':cout << "Excellent!" << endl; break;
        case 'B':cout << "Good !" << endl; break;
        case 'C':cout << "Fair!"<<endl; break;
        case 'D':cout << "fail!"<<endl; break;
    }

    return 0;

}*/
/*int main(){
    for(int i=5; i<=50;i+=5){
        cout <<"i=" << i<<endl ;
    }
    return 0;
}*/
/*int main(){
    int choice;
    do{
        cout <<"1.Greet"<<endl;
        cout<<"2.Calculate"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin >>choice;

        if(choice == 1){
            char name[50];
            cout << "Enter your name: ";
            cin >> name;
            cout << "Hello, Greeting " << name << "!" << endl;
        } else if(choice == 2){
            int num;
            cout <<"Enter a number: ";
            cin >> num;
            int factorial = 1;
            for(int i=1; i<=num; i++){
                factorial *= i;
            }
            cout <<"Factorial of "<< num <<" is: "<< factorial << endl;
        } else if(choice == 3){
            cout << "Exiting the program." << endl;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 3);

    return 0;
}*/


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
       

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}





    
    




