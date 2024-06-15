//snake pettern

#include<stdio.h>  
int matrix[10][10];  
int main()  
{  
    int i,j,k,l;  
    int direction=1;  
        printf("Matrix before snake=\n");  
    for(i=0;i<10;i++){   //this loop is used to print one line of a matrix  
        for(j=0;j<10;j++){// this loop is used to print one element in a line  
          printf("%d\t",matrix[i][j]);   
        }  
        printf("\n");  
    }  
    for(i=1,j=0,k=0;i<=100;i++){ /*this is loop is used to set martixpattern */  
        matrix[j][k]=i;  
        switch(direction){  //switch is used to check direction of snake  
            case 1:if(k+1<10){  
                        if(matrix[j][k+1]==0){  
                            k++;        //if direction is one and martix[j][k+1] is 0  
                            continue;  
                        }  
                        else{  
                              
                            j++;//if direction is one but k+1 is not smaller than 10  
  
                            direction=2;  
                            continue;  
                        }  
                    }  
                     
                   else{        //if direction is one and martix[j][k+1] is 0  
                        j++;  
                        direction=2;  
                        continue;  
                    }  
            break;  
            case 2:if(j+1<10){   
                        if(matrix[j+1][k]==0){      /* if direction=2 and matrix[j+1][k]=0  */  
                            j++;  
                            continue;  
                        }  
                        else{  
                            direction=3;  
                            k--;    // if matrix[j+1][k] is not equal 0  
                            continue;  
                        }  
                    }  
                    else{// if j+1 is not less than 10  
                            direction=3;  
                            k--;  
                            continue;  
                        }  
            break;  
            case 3:if(k-1>=0){  
                        if(matrix[j][k-1]==0){  
                              
                            k--;    // if direction=3 and matrix[j][k-1]=0  
                            continue;  
                        }  
                        else{  
                            direction=4;  
                            j--;    //if matrix[j][k-1] is not equals to zero  
                            continue;  
                        }  
                    }  
                    else{  
                            direction=4;  
                            j--;// k-1 is not greater than -0  
                            continue;  
                        }  
                      
                      
            break;  
              
              
            case 4:if(j-1>=0){  
                        if(matrix[j-1][k]==0){  
                              
                            j--;    //if direction=4 and matrix[j-1][k]=0  
                            continue;  
                        }  
                        else{  
                            k++;    // if direction=4 and matrix[j-1][k]!=0  
                            direction=1;  
                            continue;  
                        }  
                    }  
                    else{  
                            k++;    // if direction=4 but j-1 is not greater than -1  
                            direction=1;  
                            continue;  
                        }  
                      
                     
            break;  
        }  
    }  
      
    
          
        printf("Matrix after snake=\n");  
     for(i=0;i<10;i++){  // this loop is used to print one line of matrix  
        for(j=0;j<10;j++){   // this loop is used to print one element of line  
          printf("%d\t",matrix[i][j]);   
        }  
        printf("\n");  
    }  
    return 0;  
}  