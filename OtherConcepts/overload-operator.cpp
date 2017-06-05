//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

Complex operator+(const Complex& val1, const Complex& val2){
    Complex tmp;
    tmp.a = val1.a + val2.a;
    tmp.b = val1.b + val2.b;
    return tmp;
}

std::ostream& operator<< (std::ostream &out, const Complex &val)
{
    out << val.a << "+i" << val.b;

    return out;
}


