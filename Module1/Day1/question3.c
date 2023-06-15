/*3. Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.*/

#include <stdio.h>
int total ( int x, int y, int z) {   
return x+y+z;
}

double percentage(int w) {
return (w*100)/300;
}

int main() 
{
int rollnumber,t;
char name[100];  
int marksofphysics, marksofmaths, marksofchemistry;   
printf("Kindly enter the Roll Number of the student\n");    
scanf("%d",&rollnumber);   
printf("Kindly enter the Name of the student\n"); 
scanf("%s",name);    
printf("Kindly enter the marks of the student in physics, maths and in chemistry\n");    
scanf(" %d %d %d",&marksofphysics, &marksofmaths, &marksofchemistry);    
printf("\nTherefore the name of the student is %s, and their rollnumber is %d. The candidate have secured %d in physics, %d in maths, %d in chemistry", name, rollnumber, marksofphysics, marksofmaths, marksofchemistry);    
printf("\nThe total score is %d", total(marksofphysics, marksofmaths, marksofchemistry));   
printf("\nThe total percentage is %f",percentage(total(marksofphysics, marksofmaths, marksofchemistry))); 
return 0;
}