#include <string.h>
#include <cs50.h>
#include <ctype.h>

int letter_count(string s)
{
	int l= strlen(s);
	int num_letters=0;
	for(int i=0; i<l; i++)
	{
	if(isalnum(s[i]))
	{
		num_letters++;
	}
	}
	return num_letters;
}

int word_count(string s)
{
	int l=strlen(s);
	int num_words=0;
	for(int i=0; i<l; i++)
	{
	if(s[i]==' ')
	{
		num_words++;
	}
	}
	return num_words+1;
}

int sentences_count(string s)
{
	int l=strlen(s);
	int num_sentences=0;
	int temp=0;
	for(int i=0; i<l; i++)
	{
	if(s[i]=='.'||s[i]=='?'||s[i]=='!')
	{
		num_sentences++;
	}
	if(s[i]=='(')
	{
	for(int j=i; s[j]!=')'; j++)
	{
		if(s[j]=='.'||s[j]=='?'||s[j]=='!')
	{
		temp++;
	}
	}
	}
	}
	return num_sentences-temp;
}

string ari(string s)
{
	int letters=letter_count(s);
	int words=word_count(s);
	int sentences=sentences_count(s);
	int RI = (int)((4.71*((float)letters/words))+(0.5*((float)words/sentences))-21.43)+1;
	string grade;
	if(RI==1)
	{
		grade = "Kindergarten";
	}
	else if(RI==2)
	{
		grade = "First/Second Grade";
	}
	else if(RI==3)
	{
		grade = "Third Grade";
	}
	else if(RI==4)
	{
		grade = "Fourth Grade";
	}
	else if(RI==5)
	{
		grade = "Fifth Grade";
	}
	else if(RI==6)
	{
		grade = "Sixth Grade";
	}
	else if(RI==7)
	{
		grade = "Seventh Grade";
	}
	else if(RI==8)
	{
		grade = "Eighth Grade";
	}
	else if(RI==9)
	{
		grade = "Ninth Grade";
	}
	else if(RI==10)
	{
		grade = "Tenth Grade";
	}
	else if(RI==11)
	{
		grade = "Eleventh Grade";
	}
	else if(RI==12)
	{
		grade = "Twelfth Grade";
	}
	else if(RI==13)
	{
		grade = "College student";
	}
	else
	{
		grade = "Professor";
	}
	return grade;
}
