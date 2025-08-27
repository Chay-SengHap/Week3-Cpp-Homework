#include <iostream>
#include <string>

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
    void setId(int studentId){
        id = studentId;
    }

    double getId(){
        return id;
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
void sortByID(Student student[] , int  size){

    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size -1; j++){
            if(student[j].getId()>student[j+1].getId()){
                Student temp = student[j];
                student[j] = student[j+1];
                student[j+1] = temp;
            }
        }
    }

    cout<<"Sorted Student List\n\n";;
    for(int i = 0 ; i < size ; i++){
        student[i].display();
        cout<<endl;
    }


}



int main(){

    Student studentList[]= {
        {2 , "Seng Hab" , 100},
        {1 , "RaYuth" , 90},
        {4 , "Srong Chhay" , 95},
        {3 , "Nak Nak" , 97},
        {5 , "Somnang" , 91}
        
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
    cout<<"\n\n\n";
    cout<<"Top Student"<<endl;
    findTopScoreStudent(studentList , sizeof(studentList) / sizeof(studentList[0]));
    cout<<"\n\n\n";
    cout<<"Sorted Student by Id"<<endl;
    cout<<"\n\n\n";
    sortByID(studentList , sizeof(studentList)/sizeof(studentList[0]));




    return 0;

}