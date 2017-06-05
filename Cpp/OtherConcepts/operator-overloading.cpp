
class Matrix{
    public:
   vector<vector<int> > a;

    Matrix operator+(const Matrix& mat){
      Matrix sum;
      int n,m;
      n=a.size(); m=a[0].size();
      for (int c = 0 ; c < n ; c++ ){
          vector<int> row;
          for ( int d = 0 ; d < m ; d++ ){
              row.push_back(a[c][d]+mat.a[c][d]);
      }
        sum.a.push_back(row);
    }

        return sum;

    }
};
