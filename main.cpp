#include <iostream>
#include <conio.h>
#include<cstdlib>
#include<string>
#include<sstream>
#include <fstream>

using namespace std;



int main()
{

        int a[10000],count=0,n=0;
        int x,i=0,j=0,key;
        // clrscr();
        fstream myfile;
        string line;
        myfile.open ("data10k.txt");

        while(!myfile.eof()){
                getline(myfile,line);
                stringstream(line)>>x;
                a[i]=x;
                i++;
                }
        void insertion_sort(int[],int );
        insertion_sort(a,10000);


         for(int i= 0; i < 10000; i++)

    {

       // std::cout << "Sorted [" << i + 1 << "] element: ";

        std::cout << a[i
        ];

        std::cout << "\n";

    }

    myfile.close();

    return 0;

}

void  insertion_sort(int a[10000],int N){
      int i=0;
      int j=0;
      int key;

      for (i=1;i<N;i++){
            key=a[i];
            j=i-1;
             while (j>=0 && a[j]>key){
                a[j+1] =a[j];
                j=j-1;
                a[j+1]=key;
            }
        }

}




