int sum_marks(const int value[6]){
    int sum=0;
    for (int i=0; i<6; i++){
        sum += value[i];
    }
    return sum;
}


class Person{
        public:
       string name;
       int age;
       virtual void getdata() = 0;
       virtual void putdata() = 0;
};

class Professor: public Person{
      public:
        int publication, id;
        static int s_id;
        //Professor(){id = s_id++;}
        ~Professor();
        void getdata(){
            cin >> name >> age >> publication;
        }
    void putdata(){
        cout << name << " " << age << " " << publication << " " << s_id++ << endl;
    }
};

class Student: public Person{
      public:
        int marks[6], id;
        static int s_id;
        //Student(){id = s_id++;}
        ~Student();
        void getdata(){
                cin >> name >> age >> marks[0] >> marks[1] >>
                    marks[2] >> marks[3] >> marks[4] >> marks[5];
        }
        void putdata(){
            cout << name << " " << age << " " << sum_marks(marks) << " " << s_id++ << endl;
        }
};

int Professor::s_id{1};
int Student::s_id{1};

