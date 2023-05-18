//TIC-TAC-TOE//CAN BE IMPROVED
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>

void main()
{
    clrscr();
    int x,y,i,j;
    int game_count = 0,n;
    char r[25],a[32][3];


    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    a[i][j]='0';
	}
    }


    while(game_count < 9)
    {


    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    cout<<"|"<<a[i][j];
	}
	cout<<"|"<<endl;
    }

	cout<<"enter the location"<<endl;
	cin>>i>>j;
	cout<<"enter your character"<<endl;
	cin>>a[i][j];
	game_count++;


	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    cout<<"|"<<a[i][j];
		}
		cout<<"|"<<endl;
	 }
	cout<<endl;


	if (y == 2)
	{
		cout << endl;
	}
	if(a[x][y]!='0')
	{
		if(a[0][0]!='0' && a[0][0]==a[1][0] && a[0][0]==a[2][0] || a[0][0]!='0' && a[0][0]==a[0][1] && a[0][0]==a[0][2]
		  || a[0][0]!='0' && a[0][0]==a[1][1] && a[0][0]==a[2][2])
		  {
			cout<<"player with character "<<a[0][0]<<" wins"<<endl;
			break;
		   }
		if(a[0][1]!='0' && a[0][1]==a[1][1] && a[0][1]==a[0][2])
		{
			cout<<"player with character "<<a[0][1]<<" wins"<<endl;
			break;
		}
		if(a[0][2]!='0' && a[0][2]==a[1][2] && a[0][2]==a[2][2] ||
		   a[0][2]!='0' && a[0][2]==a[1][1] && a[0][2]==a[2][0])
		{
			cout<<"player with character "<<a[0][2]<<" wins"<<endl;
			break;
		}

		if(a[1][0]!='0' && a[1][0]==a[1][1] && a[1][0]==a[1][2])
		{
			cout<<"player with character "<<a[1][0]<<" wins"<<endl;
			break;
		}
		if(a[2][0]!='0' && a[2][0]==a[2][1] && a[2][0]==a[2][2])
		{
			cout<<"player with character "<<a[0][2]<<" wins"<<endl;
			break;
		}
	}



	} // while loop

 // game ended
game_count=9; // quit the while loop
getch();
} // main end
/* CAN ADD
undo steps
vs computer
*/