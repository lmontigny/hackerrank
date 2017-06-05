// Write your Student class here

class Student{
  public:
    int score[5], sum=0;
    void input(){cin >> score[0] >>score[1] >>score[2] >>score[3] >>score[4];}
    int calculateTotalScore(){
        for(int i=0; i<5;i++) sum+=score[i];
        return sum;}

};
