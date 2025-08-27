#include <iostream>

using namespace std;

class Student{
    private:
        int id;
        string name;
        float score;
    public:
    Student(int studentID , string studentName , float studentScore){
        this-> id= studentID;
        this->name = studentName;
        this->score = studentScore;

    }
    void display(){
        cout<<"Student Name : "<<name<<endl;
        cout<<"Student ID : "<<id<<endl;
        cout<<"Student Score : "<<score<<endl;

    }
    void setScore(double updateaScore){
        score = updateaScore;
    }

    double getScore(){
        return score;
    }

        
};

void findTopScoreStudent(Student student[] , int size){
    if (size == 0) return;
    float highestScore = student[0].getScore();
    int findIndex = 0;
    for (int i = 0 ; i < size ; i++){
        if(highestScore < student[i].getScore()){
            highestScore = student[i].getScore();
            findIndex = i;
        }
    }

    student[findIndex].display();
    

}



int main(){

    Student studentList[]= {
        {1 , "Seng Hab" , 100},
        {2 , "RaYuth" , 90},
        {3 , "Srong Chhay" , 95},

    };
    //Student Info
    cout<<"Student Infomation"<<endl<<endl;;
    for(int i = 0 ; i < sizeof(studentList) / sizeof(studentList[0]) ; i++){
        
        studentList[i].display();
        cout<<endl;
    }

    //Set change student score
    studentList[1].setScore(96);

    cout<<"Student Infomation After Change Student Score"<<endl<<endl;;
    for(int i = 0 ; i < sizeof(studentList) / sizeof(studentList[0]) ; i++){
        
        studentList[i].display();
        cout<<endl;
    }
    cout<<"Top Student"<<endl;
    findTopScoreStudent(studentList , sizeof(studentList) / sizeof(studentList[0]));




    return 0;

}