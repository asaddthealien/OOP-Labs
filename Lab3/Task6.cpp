#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Matrix{
	int rows;
	int cols;
	vector<vector<int>> array;
	public:
		Matrix(int rows, int cols)
		{
			this->rows = rows;
			this->cols = cols;
			array.resize(rows, vector<int>(cols, 0));
		}
		void setrows(int rows)
		{
			this->rows = rows;
		}
		void setcols(int cols)
		{
			this->cols = cols;
		}
		int getrows()
		{
			return rows;
		}
		int getcols()
		{
			return cols;
		}
		void setelement(int i, int j, int element)
		{
			array[i][j] = element;
		}
		void addition(Matrix m1, Matrix m2)
		{
			if(m1.rows != m2.rows || m1.cols != m2.cols)
			{
				cout<<"Matrices cannot be added"<<endl;
			}
			else
			{
				cout<<"Resultant matrx:"<<endl;
				for(int i = 0; i < m1.rows; i++)
				{
					for(int j = 0; j < m2.cols; j++)
					{
						cout<<m1.array[i][j] + m2.array[i][j]<<" ";
					}
					cout<<endl;
				}
			}
	    }
	    void product(Matrix m1, Matrix m2)
		{
			if(m1.rows != m2.rows || m1.cols != m2.cols)
			{
				cout<<"Matrices cannot be multiplied"<<endl;
			}
			else
			{
				cout<<"Resultant matrx:"<<endl;
				for(int i = 0; i < m1.rows; i++)
				{
					for(int j = 0; j < m2.cols; j++)
					{
						cout<<m1.array[i][j] * m2.array[i][j]<<" ";
					}
					cout<<endl;
				}
			}
	    }
};
	    
int main()
{
	int r1, c1;
	cout<<"Enter rows for matrix 1: ";
	cin>>r1;
	cout<<"Enter cols for matrix 1: ";
	cin>>c1;
	Matrix m1(r1,c1);
	int r2, c2;
	cout<<"Enter rows for matrix 2: ";
	cin>>r2;
	cout<<"Enter cols for matrix 2: ";
	cin>>c2;
	Matrix m2(r2, c2);
	int element;
	cout<<"Enter elements for Matrix 1:"<<endl;
	for(int i = 0; i < m1.getrows(); i++)
	{
		for(int j = 0; j < m1.getcols(); j++)
		{
			cin>>element;
			m1.setelement(i , j, element);
		}
	}
	cout<<"Enter elements for Matrix 2:"<<endl;
	for(int i = 0; i < m2.getrows(); i++)
	{
		for(int j = 0; j < m2.getcols(); j++)
		{
			cin>>element;
			m2.setelement(i , j, element);
		}
	}
	while(1)
	{
		cout<<"======MENU======="<<endl;
	    cout<<"1. Multiplication"<<endl;
	    cout<<"2. Addition"<<endl;
	    cout<<"3. Exit"<<endl;
	    int choice;
	    cin>>choice;
	    switch(choice){
	    	case 1:{
	    		m1.addition(m1, m2);
				break;
			}
			case 2:{
				m1.product(m1, m2);
				break;
			}
			case 3:{
				exit(1);
				break;
			}	
	}
}

return 0;	
	
	
}
			
			
			
			