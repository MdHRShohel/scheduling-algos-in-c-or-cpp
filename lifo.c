#include<stdio.h>  
int stack [ 100 ] , x , top = -1 , n , i ;  
void push()  
{  
    if ( top >= n - 1 )           // Checking the overflow condition of the stack //  
    {  
        printf ( "Stack overflow! \n " ) ;  
    }  
    else  
    {  
        printf ( "Enter value to be pushed : " ) ;  
        scanf ( "%d" , &x ) ;  
        top = top + 1 ;  
        stack [ top ] = x ;  
    }  
}  
void pop()  
{  
    if ( top == -1 )           
    {  
        printf ( "Stack underflow! \n " ) ;  
    }  
    else  
    {  
        printf ( "The popped element is %d \n " , stack [ top ] ) ;  
        top = top - 1 ;  
    }  
}  
void traverse()  
{  
    if ( top == -1 )  
    {  
        printf ( "Stack empty!\n " ) ;  
    }  
    else  
    {  
        for ( i = top ; i >= 0 ; i-- )  
        {  
            printf ( "%d \n " , stack [ i ] ) ;  
        }  
    }  
}  
int menu()  
{  
    int ch ;  
    printf ( " \t \t \t 1. PUSH OPERATION \n " ) ;  
    printf ( " \t \t \t 2. POP OPERATION \n " ) ;  
    printf ( " \t \t \t 3. TRAVERSE OPERATION \n " ) ;  
    printf ( " \t \t \t 4. EXIT \n " ) ;  
    printf ( "Enter your choice: " ) ;  
    scanf ( "%d" , &ch ) ;  
    return ch ;  
}  
void main()  
{  
    printf ( "Enter size of stack : " ) ;  
    scanf ( "%d" , &n ) ;  
    while ( 1 )  
    {  
        switch ( menu() )  
        {  
            case 1 :  
                push (  ) ;  
                break ;  
            case 2 :  
                pop (  ) ;  
                break ;  
            case 3 :  
                traverse (  ) ;  
                break ;  
            case 4 :  
                exit( 0 ) ;  
                break ;  
        }   }  
}  
