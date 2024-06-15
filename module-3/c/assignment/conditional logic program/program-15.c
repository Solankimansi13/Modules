/* Write a C program to determine eligibility for admission to a professional 
course based on the following criteria 
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 -------------------------------------- Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible. 
*/

#include<stdio.h>
int main()
{
    int maths, chem, phy, total;

    printf("enterr maths marks = ");
    scanf("%d",&maths);
    printf("\nenter physics marks = ");
    scanf("%d",&phy);
    printf("\nenterr chemistry markss = ");
    scanf("%d",&chem);
    printf("\n maths and physicss total is %d\n",maths+phy);

    total = maths + phy + chem;

    printf("\ntotal of all subject is %d\n",total);

    if((maths >= 65) && (phy >= 55) && (chem >= 50) && (total >= 190) || (maths + phy >=140))
    {
        printf(" \ncandidate is eligibale for admission");
    }
    else{
        printf("\ncandidate is not eligibale");
    }

    return 0;
} 