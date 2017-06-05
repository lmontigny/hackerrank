/*Write the class AddElements here*/

template<class T>
class AddElements{
    T val1;
    public:
        AddElements(T arg) {val1=arg;}
        T add(T val2){
            T sum;
            sum = val1+val2;
            return sum;
        };
};

template<>
class AddElements <string>{
    string val1;
    public:
        AddElements(string arg) {val1=arg;}
        string concatenate(string val2){
            string sum;
            sum = val1+val2;
            return sum;
        };
};

