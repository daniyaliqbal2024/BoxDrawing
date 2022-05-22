#include <string>
using namespace std;

string drawFilledBox(int height, int width)
{
	string box="";

	for (int h=0; h<height; h++)
	{
		for (int w=0; w<width; w++)
		{
			box += "*";
		}
		box+="\n";
	}
	return box;
}


string drawEmptyBox(int height, int width)
{
	string box="";

	for (int h=0; h<height; h++)
	{
		for (int w=0; w<width; w++)
		{
			if (h == 0 || h == height -1 || w == 0 || w == width -1)
			{
				box += "*";
			}
			else
			{
				box += " ";;
			}
		}
		box+="\n";
	}

	return box;
}

string drawRightTriangle(int length)
{
	string box="";

	for (int i=0; i<length; i++)
	{
		for(int j=0; j<=i; j++)
		{
			box += "*";
		}
		box +="\n";
	}
	return box;
}

string drawFlippedRightTriangle(int length)
{
	string box="";

	for (int i=length; i>0; i--)
	{
		for(int j=0; j<=i - 1; j++)
		{
			box +="*";
		}
		box +="\n";
	}
	return box;
}

string drawMirroredRightTriangle(int length)
{
	string box = "";

	for (int i=1; i<=length; i++)
	{
		for(int j=i; j<length; j++)
		{
			box += " ";
		}
		for(int k=1; k<=i; k++)
		{
			box +="*";
		}
		box +="\n";
	}
	return box;
}

string drawIsosoleseTriangle(int length)
{
	string box = "";
	int dotcount = 1;

	for(int i=1; i<=length; i++)
	{
		for(int j=length -1; j>=i; j--)
		{
			box+=" ";
		}
		for(int k=0; k<dotcount; k++)
		{
			box+="*";
		}
		box+="\n";
		dotcount += 2;
	}
	return box;
}
