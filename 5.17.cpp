#include<iostream.h>
const int M=2;
const int N=2;
class Array{
public:
	Array()    //¹¹Ôìº¯Êı
	{}
	Array(int x[M][N])
    {
		int i,j;
		for(i=0;i<M;i++)
			for(j=0;j<N;j++)
				a[i][j]=x[i][j];
	}
    Array operator+(Array &b)
	{Array t;
     int i,j;
	 for(i=0;i<M;i++)
		 for(j=0;j<N;j++)
			 t.a[i][j]=a[i][j]+b.a[i][j];
		 return t;
	}
	Array operator-(Array b)
	{Array l;
	int i,j;
	for(i=0;i<M;i++)
		for(j=0;j<M;j++)
			l.a[i][j]=a[i][j]-b.a[i][j];
		return l;
	}
	void show()
	{int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			cout<<a[i][j]<<'\t';
		cout<<endl;
	}
	}
private:
int	a[M][N]	;
};
void main()
{
	int a[M][N]={{1,2},{3,4}};
	int b[M][N]={{5,6},{7,8}};
	Array A(a),B(b),C,D;
	C=(A+B);
	D=(A-B);
}


