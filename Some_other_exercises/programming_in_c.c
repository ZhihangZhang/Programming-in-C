

/* int main(){
	int initialNum, rightNum;

	printf("Enter the positive integer number you want to reverse: \n");
	scanf("%d", &initialNum);

	if(initialNum >= 0){
		do {
			rightNum = initialNum % 10;
			printf("%d", rightNum);
			initialNum /= 10;
	}
	while(initialNum != 0);
	
	}else{
		initialNum *= -1;
		do {
			rightNum = initialNum % 10;
			printf("%d", rightNum);
			initialNum /= 10;

	}
	while(initialNum != 0);


	printf("-");		
	}



	
	
	printf("\n");
	
	system("PAUSE");
	return 0;
}
*/
// reverse number (both negative and positive integers)

/* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int number, quotient;
    double exponent = 0.0;

    printf("Please enter the number : \n");
    scanf("%d", &number);

    do{
        exponent++;
        quotient = number / pow(10.0, exponent);


    }
    while(quotient != 0);

    exponent--;

    do{
        quotient = number / (int) pow(10.0, exponent);
        number %= (int) pow(10.0, exponent); 

        switch(quotient)
        {
            case 0 :
                printf("zero ");
                break;

            case 1 :
                printf("one ");
                break;

            case 2 :
                printf("two ");
                break;

            case 3 :
                printf("three ");
                break;

            case 4 :
                printf("four ");
                break;

            case 5 :
                printf("five ");
                break;

            case 6 :
                printf("six ");
                break;

            case 7 :
                printf("seven ");
                break;

            case 8 :
                printf("eight ");
                break;

            case 9 :
                printf("nine ");
                break;
            default:
                printf("Error ");
                break;
        }


        exponent--;

    }
    while (exponent >= 0);

	printf("\n");
	system("PAUSE");
    return 0;
}

 */
// improvement: 002 and negative number (translate the numbers into  english)

/* int main(void){
	 int date, count = 1, type, number;
	 double midnightT, sixamT, sixpmT, noonT, max, min, total = 0.0, average;

	 FILE* inputfile;
	 FILE* outputfile;

	 inputfile = fopen(FILE_NAME2, "r");
	 outputfile = fopen(FILE_NAME1, "w");

	 if(inputfile == NULL){
		 printf("Error opening the file - program is terminating... \n");
		 fclose(inputfile);
		 fclose(outputfile);

	 }else{
		 printf("Enter how many days you want to cover (up to five): ");
		 scanf(" %d", &number);

		 while( fscanf(inputfile, "%d %lf %lf %lf %lf", &date, &midnightT, &sixamT, &noonT, &sixpmT) == 5 ){

			 fprintf(outputfile, "%d %.1lf %.1lf %.1lf %.1lf\n", date, midnightT, sixamT, noonT, sixpmT);

			 if(count == 1){

				 max = min = midnightT;;

			 }

			 if(count <= number){

				 max = max <= midnightT ? midnightT : max;
			     min = min >= midnightT ? midnightT : min;
			     total += midnightT;    // total need to be assigned value if using an increment operator
			 }

			 count++;
		 }
		 
		 average = total / number;  

		 printf("\nMidnight data (to day %d): \n\n", number);
		 fprintf(outputfile, "\nMidnight data (to day %d): \n\n", number);

		 printf("Average: %f\n", average);
		 fprintf(outputfile, "Average: %.3f\n", average);

		 printf("Maximum: %f\n", max);
		 fprintf(outputfile, "Maximum: %.3f\n", max);

		 printf("Minimum: %f\n", min);
		 fprintf(outputfile, "Minimum: %.3f\n", min);

		 fclose(inputfile);
		 fclose(outputfile);

	 }




	 system("PAUSE");
	 return 0;
  }

 */
 // read and write file 

/* #define FILE_NAME1 "test1.txt"
#define FILE_NAME2 "test2.txt"
#define WIDTH 100 
#define HEIGHT 60
#define PI acos(-1.0)

void printRow (int, int);

 // declare function printRow: return value type is void
                            
							 //and their types are all integer
 

 // jump to next line until row = size

/* 
int main (void){
	 int size, row;

	 printf("Please enter the size of your triangle : ");
	 scanf("%d", &size);

	 row = 1;

	 while(row <= size){
		 printRow(row, size); //pass the parameters from main function to printRow function
		// put commas between mutiple parameters (make the variables acessible only by passing them to printRow function)
							   
		 row++;
	 }


	 system("PAUSE");
	 return 0;
 }

 // printf the spaces and stars in every row

 void printRow (int r, int s){   // make sure the name of parameters are put into the brackets, the names could
                                      // and should be different cuz functions are separate
	 int star = 1, space = 1;


	 while(space <= s - r){    
		 printf(" ");
		 space++;
	 }

	 while(star <= 2*r-1){
		 printf("*");
		 star++;
	 }

	 printf("\n");
 }

*/
// use function other than main function to genereate a triamgle

/*
 int main(void){

	 FILE* inputfile;
	 double litreUsed[6], priceTotal[6], priceUnit[6], litreEach;
	 int code, i;


	 for(i = 1; i <= 5; ++i){
		 litreUsed[i] = 0.0;
		 priceTotal[i] = 0.0;
	 }
	 // array elements must be set the initial number to replace the garbage value

	 priceUnit[1] = GASOLINE_P;
	 priceUnit[2] = DIESEL_P;
	 priceUnit[3] = JET_FUEL_P;
	 priceUnit[4] = NATURAL_GAS_P;
	 priceUnit[5] = PROPANE_P;
	 // maybe can assign the  price more quickly....


	 inputfile = fopen(FILE_NAME, "r");
	 

	 if(inputfile == NULL){
		 
		 printf("Error opening the file.");
		 fclose(inputfile);

	 }else{

		 while( fscanf(inputfile, "%d %lf", &code, &litreEach) == 2 ){

			 litreUsed[code] += litreEach;

		 }

		
		 printf("Fuel code      Cost\n");
		 printf("---------      -----------\n");


		 for(i = 1; i <= 5; ++i){

			 priceTotal[i] = priceUnit[i] * litreUsed[i];
			 printf("%d    %19.3f\n", i, priceTotal[i]);
			 // Don't forget the index for array elements

		 }
	 }

	 fclose(inputfile);
	 system("PAUSE");
	 return 0;
 }

  */
// array and input file

/*
#define PI acos(-1.0)
#define FILE_NAME "coordinates.txt"

 int main(void){

	 FILE* inputfile;
	 double diameterORsidelength;
	 int code, i = 1, r, radius;

	 inputfile = fopen(FILE_NAME, "r");
	 

	 if(inputfile == NULL){
		 
		 printf("Error opening the file.");

	 }else{

		 // the rectangle
		 while( fscanf(inputfile, "%d %lf", &code, &diameterORsidelength) == 2 ){
			 if( code == 2 ){
				 for ( i = 1; i <= (int)diameterORsidelength; ++i ){

					 r = 1;   // avoid initializing the r in the for loop because the r must be reset (r in the for loop is only executed once)
					 
					 while(r <= (int)diameterORsidelength){
						 printf("*");
						 r++;
					 }
					 printf("\n");
				 }
				 printf("\n");
			 }else{

				 radius =  (int)(diameterORsidelength / 2);

				 if( radius % 2 == 0 ){
					 radius++;
				 }

		 // the diamond which is split to two parts

				 // the first big triangle
				 for( i = 1; i <= radius; i+=2 ){
					 
					 // spaces				
					 r = 1;
					 
					 while( r <= (radius - i)/2 ){
						 printf(" ");
						 r++;
					 }

					 // asterisks
					 r = 1;  // don't forget to reset the r
				
					 while( r <= i ){
						 printf("*");
						 r++;
					 }
					 printf("\n");
				 }


					 // the rest of the lines
				 for(i = radius-2; i >= 1; i-=2){

					 // spaces
					 r = 1;

					 while( r <= (radius - i)/2 ){
						 printf(" ");
						 r++;
					 }

					 //asterisks
					 r = 1;
					 while( r <= i ){
						 printf("*");
						 r++;
					 }
					 printf("\n");
				 }
				 printf("\n");
			 }
	 }

	 fclose(inputfile);
	 system("PAUSE");
	 return 0;
 }

}
 */
// print the diamond and rectangle

/* void printStar(int);


int main (void){

	 int length;

	 printf("Please enter the length of the row of stars: \n");
	 scanf("%d", &length);

	 while(length < 0){
		 printf("The length should be a non-negative integer!\n");	 
		 printf("Please enter the length of the row of stars: \n");
    	 scanf("%d", &length);

	 }


	 do{ 
		 printStar(length);

		 scanf("%d", &length);
		 
		 while(length < 0 && length != -1){
			 printf("No valid data.\n");	 
			 printf("Please enter the length of the row of stars: \n");
			 scanf("%d", &length);
		}
	 }while(length != -1); // NOTICE:"true" if it is nonzero, and "false" if it is zero.
	                       // to make sure the divisor is nonzero.
	                       // so -1 will be evaluated to true. only zero is false.

	 printf("Program is terminating......\n");
	 system("PAUSE");
	 return 0;
 }


// Function: printStar
// Takes: the length of the row
// Returns: void
// Purpose: to print the specified length of stars

void printStar(int L){

	int i = 1;

	while(i <= L){
		printf("*");
		i++;
	}
	printf("\n");
}
 */
// printStar function

/* 
int main (void){
	 int count = 1;
	 double x, nextNumerator, lnVal = 0;

	 
	 printf("Please enter the value of x (0 < x < 2): ");
	 scanf("%lf", &x);

	 while(x<=0 || x>=2){
		 printf("The value of the x is not in the required interval!\n");
		 printf("Please enter the value of x (0 < x < 2): ");
		 scanf("%lf", &x);
	 }

	 nextNumerator = x - 1;

	 while( fabs(nextNumerator/count) >= THRESHOLD ){
		 lnVal += nextNumerator/count;
		 nextNumerator = nextNumerator * -(x - 1);
		 count++;
	 }
	 printf("The approximation of ln(%f) is %f\n", x, lnVal);
	 printf("¨C computed using %d term%c.\n\n", count - 1, count - 1 != 1 ? 's' : ' '); // bucky uses string
	 

	 system("PAUSE");
	 return 0;
 }
 
*/

// approximation of ln(x)

/*
int main (void){
	 FILE *inputFile;
	 double nextVal, average, sum;
	 int i, r = 1;

	 inputFile = fopen(FILE_NAME2, "r");

	 if(inputFile == NULL){
		 printf("Error opening the file!\n");
	 }else{
		 while( fscanf(inputFile, "%lf", &nextVal) == 1 ){

			 sum = 0.0; // reset the value of sum.
			 sum += nextVal;

			 // dont need to write down all the variables in a row.
			 for(i = 1; i <= 4; ++i){
				 fscanf(inputFile, "%lf", &nextVal);
				 sum += nextVal;
			 }
			 average = sum / 5;
			 printf("The average of row %d is %.3f\n", r, average);
			 r++;
		 }
	 }

	 fclose(inputFile);  // remember to close file in the end.

	 printf("\n");
	 system("PAUSE");
	 return 0;
 }

 
  */
// too many numbers in a row

/*
void printSymbol(char, int);

int main (void){
	 int row, i = 0;
	 int NUM_OF_SYMBOLS;
	 char symbol;

	 printf("Enter the number of rows: \n");
	 scanf("%d", &row);

	 printf("Enter the number of symbols in a line: \n");
	 scanf("%d", &NUM_OF_SYMBOLS);

	 printf("Enter the symbol you want to print: \n");
	 scanf(" %c", &symbol); // the char conversion specifier wont skip the whitespace automatically

	 while(i < row){

		 printSymbol(symbol, NUM_OF_SYMBOLS);
		 i++;
		 printf("\n");
	 }
	 

	 system("PAUSE");
	 return 0;
 }


// Purpose: print n symbols in a line 
// Parameters: number of symbols to print
//             the symbol to print (char type)
// Return: void

void printSymbol(char symbol, int nSymbols){
	int i;

	for(i = 0; i <= nSymbols; ++i){
		printf("%c ", symbol);
	}
	
}
 */
// dynamics function for print symbol (char conversion specifier)

/* 
double get_area (int area_type, double area_dimension);
double area_circle (double diameter);
double area_square (double length);

void draw_shape (FILE* outFile, int area_type, double dimension);
void draw_circle (FILE* outFile, double diameter);
void draw_square (FILE* outFile, double length);
void draw_line (FILE* outFile, char c, int number);

// decomposition -- (get area > square/circle | printshape > print diamond/rectangle > print line)
int main (void){
	FILE* inFile;
	FILE* outFile;
	int area_type;
	double dimension, totalArea = 0.0;

	inFile = fopen (FILE_NAME1, "r");
	outFile = fopen (FILE_NAME2, "w");

	if(inFile == NULL || outFile == NULL){
	}
	else{
		while( fscanf(inFile, "%d %lf", &area_type, &dimension) == 2 ){
			
			totalArea += get_area(area_type , dimension);		
			
			draw_shape(outFile, area_type, dimension);
	
		}
		
	}
	
	printf("The total flooded area is %.2f m^2\n", totalArea);


	fclose(inFile);
	fclose(outFile);


	system("PAUSE");
	return 0;
 }


double get_area (int area_type, double area_dimension){
	double area;

	if(area_type == 1){
		area = area_circle (area_dimension);
	}else{
		area = area_square (area_dimension);
	}

	return area;
}


double area_circle (double diameter){
	return pow((diameter/2.0), 2.0) * PI;
}


double area_square (double length){
	return pow(length, 2.0);
}


void draw_shape (FILE* outFile, int area_type, double dimension){

	if(area_type == 1){
		draw_circle (outFile, dimension);
	}else{
		draw_square (outFile, dimension);
	}
	fprintf(outFile, "\n");
}


void draw_circle (FILE* outFile, double diameter){
	int num_spaces, num_stars, top_part, bottom_part;
	int row, limit;

	limit = diameter; 
	// convert it to integer
	if(limit % 2 == 0){
		limit++;
	}
	// make sure the limit is odd number

	top_part = limit/2 + 1;
	bottom_part = limit/2;

	row = 0; //
	while(row < top_part){

		num_spaces = limit/2 - row; // using zero make the code more simple
		num_stars = row * 2 + 1;

		draw_line (outFile, ' ', num_spaces);
		draw_line (outFile, '*', num_stars);

		fprintf(outFile, "\n");

		row++;
	}

	row = 1;// starting as 1 i.e. the number the spaces
	while(row <= bottom_part){

		num_spaces = row;
		num_stars = limit - row*2;

		draw_line (outFile, ' ', num_spaces);
		draw_line (outFile, '*', num_stars);

		fprintf(outFile, "\n");
		row++;
	}
}


void draw_square (FILE* outFile, double length){

	int row = 0;
	int limit = length;


	while(row < limit){
		
		draw_line(outFile, 'X', limit);

		fprintf(outFile, "\n");
		row++;
	}

}


void draw_line (FILE* outFile, char c, int number){
	int count = 0;

	while(count < number){
		fprintf(outFile, "%c", c);
		count++;
	}
	// no new line
}
 */
// decomposition and pseudo codes representing functions

/*
#define minimumBet 5.0

double getWallet(void);
double makeBet(double remainingMoney);
double playRound(double betMoney);

int rollDice(void);
int rollDie(void);
double rollforPoint(int SUM_OF_DICE, double betMoney);

int goodbye(double remainingMoney);
int doAgain(void);



int main (void){
	double remainingMoney, betMoney, indication;
	
	remainingMoney = getWallet();
 
	do{
		betMoney = makeBet(remainingMoney);
		remainingMoney += playRound(betMoney);
		indication = goodbye(remainingMoney);

	}while(indication);

	printf("\n");
	system("PAUSE");
	return 0;
 }


double getWallet(void){
	double initialMoney, remainingMoney;

	printf("How much money do you want to play with? \n");
	scanf("%lf", &initialMoney);

	while(initialMoney < minimumBet){
		printf("The money is not enough for the minimum bet, try again.\n");
		printf("How much money do you want to play with?\n");
		scanf("%lf", &initialMoney);
	}
	remainingMoney = initialMoney;

	return remainingMoney;
}   


double makeBet(double remainingMoney){
	double betMoney;

	// improve the loop

	printf("\nYou have $%.2f in your wallet.\n", remainingMoney);
	printf("Place your bet (minimum $%.2f) : ", minimumBet);
	scanf("%lf", &betMoney);


	while(betMoney < minimumBet || betMoney > remainingMoney){
		if(betMoney < minimumBet){
			printf("Your bet is below the minimum of $%.2f, try again.\n\n", minimumBet);
		}else{
			printf("You have bet more than you have in your wallet, try again.\n\n");
		}

		printf("\nYou have $%.2f in your wallet.\n", remainingMoney);
		printf("Place your bet (minimum $%.2f) : ", minimumBet);
		scanf("%lf", &betMoney);
	}

	return betMoney;
}


double playRound(double betMoney){
	int SUM_OF_DICE;
	double moneyGet;

	SUM_OF_DICE = rollDice();

	printf("You rolled a %d.\n", SUM_OF_DICE);
	
	if(SUM_OF_DICE == 2 || SUM_OF_DICE == 3 || SUM_OF_DICE == 12){
		printf("You lose :-( \n");
		moneyGet =  -betMoney;
	}else if(SUM_OF_DICE == 7 || SUM_OF_DICE == 11){
		printf("You win :-) \n");
		moneyGet = betMoney;
	}else{
		printf("\n");
		moneyGet = rollforPoint(SUM_OF_DICE, betMoney);
		printf("\n");
	}
	
	return moneyGet;
}

int rollDice(void){
	int num1, num2, sum;

	num1 = rollDie();
	num2 = rollDie();

	sum = num1 + num2;


	return sum;
}

int rollDie(void){
	int num;

	do{
		num = rand() % 7;
	}
	while(num == 0);

	return num;
}

double rollforPoint(int SUM_OF_DICE, double betMoney){
	int point;
	double moneyGet;

	point = SUM_OF_DICE;

	printf("Rolling for point: %d...\n", SUM_OF_DICE);

	do{
		SUM_OF_DICE = rollDice();
		printf("You rolled a %d.\n", SUM_OF_DICE);
	}
	while( !(SUM_OF_DICE == 7 || SUM_OF_DICE == point) );

	if(SUM_OF_DICE == 7){
		printf("You lose :-( ");
		moneyGet = -betMoney;
	}else{
		printf("You win :-) ");
		moneyGet = betMoney;
	}

	return moneyGet;
}

int goodbye(double remainingMoney){
	int indication;

	if(remainingMoney < minimumBet){
		indication = 0;
		printf("\nSorry, you don't have enough money to make a bet.");
	}else{
		indication = doAgain();

		if(indication == 0){
			printf("\nYou have $%.2f in your wallet. Goodbye!", remainingMoney);
		}

	}

	return indication;
}

int doAgain(void){
	int indication;

	printf("\nEnter 1 to play, 0 to quit: \n");
	scanf("%d", &indication);

	while(indication != 1 && indication != 0){
		printf("Sorry, invalid command, try again.\n");
		printf("\nEnter 1 to play, 0 to quit: \n");
		scanf("%d", &indication);
	}
	return indication;
}

*/
// the game of dice

/* 

#define MINROWS 1
#define MAXROWS 12

//function prototypes
int get_factorial (int factorial_num);
int n_choose_r (int n, int r);
int getInputInRange (int min, int max);
void printTriangle (int rows);

int main (void){
	int rows;

	rows = getInputInRange(MINROWS, MAXROWS);

	printTriangle (rows);

	system("PAUSE");
	return 0;
 }



/*
 * Prompts user to enter an integer 
 * between min and max, inclusive.  Prints an
 * error message and repeatedly prompts for 
 * input, if input is outside required range.
 *
 * Param: min - minimum acceptable input
 * Param: max - maximum acceptable input
 * Returns: number between min and max, inclusive,
 * entered by user.

int getInputInRange (int min, int max){
	int value;

	printf("How many rows of Pascal's triangle do you want to print (%d to %d inclusive)?\n", min, max);
	scanf("%d", &value);

	while(value < min || value > max){
		printf("Error, the number of rows is NOT in the specified rage, try again:\n");
		scanf("%d", &value);
	}

	return value;
}

/*
 * Function: printTriangle - to print the Pascal's triangle according to the specified number of rows
 * Param: the rows of triangle

void printTriangle (int rows){
	int col, row = 0, coefficient;

	while(row < rows){
		col = 0;

		while(col < row + 1){
			coefficient = n_choose_r(row, col);
			printf("%4d", coefficient);
			col++;
		}

		printf("\n");
		row++;
	}
	printf("\n");
}

/* function:  compute the number of ways we select r distinct objects from a group of n objects
 * parameter: r - the number of objects we select
 *            n - the number of a group objects 
 * return:    the number of ways we select objects

int n_choose_r (int n, int r){  // check when r is greater than n; n and r is non-negative integer
	int nCr, n_factorial, r_factorial, n_MINUS_r_factorial;

	n_factorial = get_factorial(n);
	r_factorial = get_factorial(r);
	n_MINUS_r_factorial = get_factorial(n-r);

	nCr = n_factorial / ( n_MINUS_r_factorial * r_factorial);

	return nCr;

}

/* function: get_factorial
 * parameter: a non-negatove integer whose factorial user want to compute
 * return: num!

int get_factorial(int factorial_num){ // check negative number and overflow
	int factorial = 1;
	
	while(factorial_num > 1){
		factorial *= factorial_num;
		factorial_num--;
	}

	return factorial;
}

*/
// print the Pascal's triangle

/*
#define SIZE 10
#define SYMBOL '*'

void printSymbol(int num, char symbol);
int checkRange(int userInput);

int main (void){

	int interval[SIZE];
	int i, nextVal, quotient, num;
	int leftValue, rightVal;
	
	// set all the garbage value to 0

	for(i = 0; i < SIZE; ++i){
		interval[i] = 0;
	}

	// get the input and make sure it is in specified range

	printf("Enter a series of positive integers between 1 and 100 (inclusive):\n");
	printf("Enter -1 to terminate this program\n");

	scanf("%d", &nextVal);
	nextVal = checkRange(nextVal);

	// increase the corresponding array element and repeatly prompt user the next value

	while(nextVal != -1){
		
		quotient = (nextVal - 1) / 10;
		interval[quotient]++;

		scanf("%d", &nextVal);
		nextVal = checkRange(nextVal);
	}

	printf("\n\n");

	// print the histogram on the screen

	for(i = 0; i < SIZE; ++i){

		leftValue = (i+1)*10 - 9;
		rightVal = (i+1)*10;

		printf("%d - %d: ", leftValue, rightVal);
		
		num = interval[i];
		printSymbol(num, SYMBOL);
		
		printf("\n");

	}

	printf("\n");
	system("PAUSE");
	return 0;
 }
  


void printSymbol(int num, char symbol){
	int i;

	for(i = 0; i < num; ++i){
		printf("%c", symbol);
	}
}


int checkRange(int userInput){

	while( userInput > 100 || (userInput != -1 && userInput <= 0) ){     // valid inputs include -1 and positive integers which are less than 101
		printf("Error, invalid input, try again.\n");
		scanf("%d", &userInput);
	}

	return userInput;
}

 */
// print an histogram of distribution

/*

int main (void){
	 
	int i, response, total = 0;
	double percentage, averageRating = 0;

	int ratingCounter[11]; // variable length array for C99 and C11 (VS uses C90)
	
	// set all the elements in the array to zero
	for(i = 0; i < 11; ++i){
		ratingCounter[i] = 0;
	}

	printf("Enter your responses (1 - 10): \n");

	do{
		scanf("%d", &response);

		while(response < 1 || (response > 10 && response != 999) ){
			printf("Error, invalid input.\nEnter 1 to 10 to rate and enter 999 to end.\n");
			scanf("%d", &response);
		}
		

		if(response == 999){
			break;
		}
		
		ratingCounter[response]++;
		total++;
	}
	while(response != 999);  // the condition repeats


	// print the rating table
	printf("\n\nRating      Number of the Responses      Percentage\n");
	printf("-------     ------------------------      ----------\n");

	for(i = 1; i < 11; ++i){

		percentage = (double)ratingCounter[i] / total * 100;
		averageRating += percentage * i * 0.01;
		printf("%6d      %12d      %16.2f\n", i, ratingCounter[i], percentage);
	}
	
	printf("\nTotal responses: %d\n", total);
	printf("Average rating: %.2f\n", averageRating);

	system("PAUSE");
	return 0;
 }


 */
// rating system with average rating and rating percentage


/* 

#define SIZE1 8
#define SIZE2 9


int range(int array[], int elementsNUM);
int count_in_range(int array[], int elementsNUM, int MAX, int MIN);
int is_sorted(int array[], int elementsNUM);
int search(int array[], int toFind);
int numDuplicate(int array1[], int size1, int array2[], int size2);


int main (void){
	int testArray1[] = {-3, -1, 4, 5, -6, -9, 10, 89};
	int testArray2[] = {3, 2, 15, 98, 1, 0, 9, 6, 100};
	int number;

	number = numDuplicate(testArray1, SIZE1, testArray2, SIZE2);

	printf("%d\n\n", number);
	system("PAUSE");
	return 0;
 }


int numDuplicate(int array1[], int size1, int array2[], int size2){
	int i, toFind, flag, duplicateNUM = 0;

	for(i = 0; i < size1; ++i){
		toFind = array1[i];
		flag = search(array2, size2, toFind);
		duplicateNUM += (flag == -1) ? 0 : 1;
	}

	return duplicateNUM;
}


int search(int array[], int size, int toFind){

	int i;
	for(i = 0; i < size; ++i){
		if(array[i] == toFind){
			return i;
		}
	}
	return -1;
}



int range(int array[], int elementsNUM){

	int i, MAX, MIN, range;

	MAX = MIN = array[0];  // no need to use a flag

	for(i = 0; i < elementsNUM; ++i){

		MAX = MAX < array[i] ? array[i] : MAX;
		MIN = MIN > array[i] ? array[i] : MIN;

	}
	
	range = MAX - MIN + 1;

	return range;

}

int  count_in_range(int array[], int elementsNUM, int MAX, int MIN){
	
	int numberInRange = 0, i;

	for(i = 0; i < elementsNUM; ++i){
		if(array[i] >= MIN && array[i] <= MAX){
			numberInRange++;
		}
	}

	return numberInRange;
}

int is_sorted(int array[], int elementsNUM){
	int i;
	
	for(i = 1; i < elementsNUM; ++i){
		if(array[i] <= array[i-1]){
			return 0;
		}
	}
	return 1;
}


 */
// numDuplicate

/*
int main (void){
	
	unsigned long long int num0, num1, num2;
	int i;

	num0 = 0;
	num1 = 1;
	
	printf("%llu\n%llu\n", num0, num1);

	for(i = 0; i < 48; ++i){

		num2 = num0 + num1;
		printf("%llu\n", num2);

		num0 = num1;
		num1 = num2;

	}
	system("PAUSE");
	return 0;
 }
 */
// generatre fibonacci numbers without using the array

/* 

#define num_of_fibonacci 50

int main (void){

    // int num_of_fibonacci;
    int index, i;
    unsigned long long int fibonacci[num_of_fibonacci];


    // printf("How many fibonacci numbers do you want to display (1 - 75, inclusive):\n");
    // scanf("%d", &num_of_fibonacci);

    // while(num_of_fibonacci > 75 || num_of_fibonacci < 1){
    //   printf("The number you entered is not in the specified range, try again:\n");
    //    scanf("%d", &num_of_fibonacci);
//     }


    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(index = 2; index < num_of_fibonacci; ++index){
        fibonacci[index] = fibonacci[index - 1] + fibonacci[index - 2];
    }


    for(i = 0; i < index; ++i){
        printf("%llu\n", fibonacci[i]);  // note that the specifier for unsigned long long is %llu
    }

	system("PAUSE");
	return 0;
 }

  */
// fibonacci numbers without the variable length array

/* 
#define SIZE 6

double getMean(double array[], int size);
double getSamplevariance(double array[], int size);
double getSSdeviation(double array[], int size);
double getMinimum(double array[], int size);


int main (void){
	
	double output1, output2, output3, output4;
	double testArray[] = {1.1, -5.4, 4.2, 6.5, -8.7, 9.1}; 

	output1 = getMean(testArray, SIZE);
	output4 = getMinimum(testArray, SIZE);
	

	printf("%f\n", output1);

	if(SIZE > 1){
		output2 = getSamplevariance(testArray, SIZE); 
		output3 = getSSdeviation(testArray, SIZE);	
		printf("%f\n", output2);
		printf("%f\n", output3);

	}

	printf("%f\n", output4);

	printf("\n");
	system("PAUSE");
	return 0;
 }

double getMean(double array[], int size){
	double sum = 0.0, meanVal;
	int i;

	for(i = 0; i < size; ++i){
		sum += array[i];
	}

	meanVal = sum / size;

	return meanVal;
}



double getSamplevariance(double array[], int size){
	int i;
	double average, numerator= 0.0, s_variance;

	average = getMean(array, size);

	for(i = 0; i < size; ++i){
		numerator += pow( (array[i] - average) , 2.0 );
	}

	s_variance = numerator / (size - 1);
	
	return s_variance;
}


double getSSdeviation(double array[], int size){

	return sqrt( getSamplevariance(array, size) );
}


double getMinimum(double array[], int size){
	int i;
	double MIN = array[0];

	for(i = 0; i < size; ++i){

		MIN = (MIN > array[i]) ? array[i] : MIN;
	}

	return MIN;
}

 */
// mean/variance/standardvariance in an array

/* 
#define false 0
#define true 1

int main (void){
	
	typedef int Bool;	// define new data type called Bool to store integer representing true anf false
	int primeNum[50];   // 50 elements are sufficient for prime numbers
	int index =2;		// index starts from 2 because 2 and 3 are prime numbers
	int num, i;

	Bool isPrime;

	primeNum[0] = 2;
	primeNum[1] = 3;

	// check every odd number from 5 to 50 (inclusive)

	for(num = 5; num < 50; num+=2){   // exclude even number from 4 to 50
		isPrime = true;
		
		// any non-prime integer can be expreesed as a multipe of prime numbers
		// any non-prime integer must have a factor which is less than or equal to the square root of the number
		// use the second condition to stop the for loop (for prime number) and use the first condition to break the loop (for non-prime number)

		for(i = 1; isPrime && num/primeNum[i] >= primeNum[i]; i++){  
			if(num % primeNum[i] == 0){
				isPrime = false;
			}
		}

	// store prime numbers into the array in order

		if(isPrime){
			primeNum[index] = num;
			index++;
		}
	}
	
	// print all the prime numbers in the array

	for(i = 0; i < index; i++){
		printf("%d ", primeNum[i]);
	}


	system("PAUSE");
	return 0;
 }
  

 */
// generate PRIME number version 2

/*

#define SIZE 101


void choosePrime(int array[], int size);
void printPrime(int array[], int size);
void isPrime(int array[], int size, int index);

int main (void){

	int data[SIZE];
	int i;


	for(i = 0; i < SIZE; ++i){
		data[i] = 0;
	}

	choosePrime(data, SIZE);
	printPrime(data, SIZE);


	printf("\n");
	system("PAUSE");
	return 0;
 }




void choosePrime(int array[], int size){
	int i;

	for(i = 2; i <= sqrt((double)size); ++i){ 
		isPrime(array, size, i);
	}
}

void isPrime(int array[], int size, int index){
	int j;
	
	for(j = 2; index * j < size; ++j){ 
		array[index * j] = 1;
	}

}


void printPrime(int array[], int size){
	int i;

	for(i = 2; i < size; ++i){
		if(array[i] == 0){
			printf("%d\n", i);
		}
	}
}


 */
// using slieve of eratosthenes algorithm to generate PRIME numbers

/*
double Squareroot(double x, double accuracy);
double absoluteVal(double x);

int main (void){
	double number, result, epsilon;

	printf("Please enter the number:\n");
	scanf("%lf", &number);

	printf("Please enter the epsilon:\n");
	scanf("%lf", &epsilon);


	result = Squareroot(number, epsilon);

	printf("The approximate square root of %f is %f", number, result);

	printf("\n");
	system("PAUSE");
	return 0;
 }



double Squareroot(double x, double accuracy){
	double guess = 1;

	printf("\n");
	if(x < 0){
		printf("Error, negative argument to sqaure root.\n");
		return -1;
	}

	if(x == 0){
		return 0; // using anouther if for aero is more accurate than the newton method
	}

	
	while( absoluteVal( guess*guess/x - 1 ) >= accuracy ){  // abs is the absolute value of integer while fabs in math.h is for dobule
		printf("%f\n", guess);                              // comparing ratio and one covers a larger range of value using subtraction 
		guess = (x/guess + guess) / 2.0;
	}

	return guess;
}



double absoluteVal(double x){

	if(x < 0){
		x = -x;
	}
	return x;
}


*/
 // find the approximate square root

/*
void printMatrix(int nRows, int nCols, double matrix[nRows][nCols]);
void scalarMultiply(int nRows, int nCols, double matrix[nRows][nCols], int scalar);

int main (void){
	double matrixData[3][5] = { {5.6, 2.3, 8.9, -1.2, 9.9},
							   {3.4, 2.3, 9.4, -0.2, 0.0},
							   {5.1, -9.47, 6.3, 1.23, 46.3}
							 };

	printMatrix(3, 5, matrixData);

	scalarMultiply(3, 5, matrixData, 6);

	printMatrix(3, 5, matrixData);

	scalarMultiply(3, 5, matrixData, -2);

	printMatrix(3, 5, matrixData);

	printf("\n");
	system("PAUSE");
	return 0;
 }


void printMatrix(int nRows, int nCols, double matrix[nRows][nCols]){
	int row, col;

	for(row = 0; row < nRows; ++row){
		for(col = 0; col < nCols; ++col){
			printf("%7.2f ", matrix[row][col]);
		}

		printf("\n");
	}

	printf("\n\n");
}


void scalarMultiply(int nRows, int nCols, double matrix[nRows][nCols], int scalar){
	int row, col;

	for(row = 0; row < nRows; ++row){
		for(col = 0; col < nCols; ++col){
			matrix[row][col] *= scalar;
		}
	}

}

 */
// using the variable length matrix for scalar multiplication

/*

#define maxBase 16
#define minBase 2

int getBase(void);
int getDigits(int array[], int base, int num);
void printDigits(int array[], int i);


int main (void){
	int number;
	int BASE;
	int Digits[64];
	int INDEX;
	
	do{
		printf("Enter the a non-negative integer: \n");
		scanf("%d", &number);

		while(number < 0){
			printf("The integer should be non-negative, try again\n");
			scanf("%d", &number);
		}

	
		BASE = getBase();

		INDEX = getDigits(Digits, BASE, number);
	
		printDigits(Digits, INDEX);

		printf("\n\n");


	}while(number != 0);

	

	printf("\n");
	system("PAUSE");
	return 0;
 }


int getBase(void){
	int base;

	printf("\nEnter the base (2 - 16): \n");
	scanf("%d", &base);

	while(base < minBase || base > maxBase){
		printf("Error, the base is invalid, try again.\n");
		scanf("%d", &base);
	}

	return base;
}


int getDigits(int array[], int base, int num){
	int index = 0;

	do{
		array[index] = num % base;
		num /= base;
		index++;
	}

	while(num != 0);

	return index;
}


void printDigits(int array[], int i){

	int nextDigit;
	const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
									'A', 'B', 'C', 'D', 'E', 'F'};

	printf("\nThe converted number is ");
	for(--i; i >= 0; i--){
		nextDigit = array[i];
		printf("%c", baseDigits[nextDigit]);
	}

	printf("\n");
}



 */
// convert non-neagtive integers into base between 2 and 16

/*

unsigned long int factorial(unsigned int x);

int main (void){
	int i;

	for(i = 0; i < 11; ++i){
		printf("%2d! = %lu\n", i, factorial(i) );
	}

	system("PAUSE");
	return 0;
 }



unsigned long int factorial(unsigned int x){ // the positive factorial increases rapidly, so using
	                                         // unsigned long int for result and unsigned int for parameter x
	unsigned long int result;

	if(x == 0){
		result = 1;
	}else{
		result = x * factorial( x - 1 ); // recursive definition x! = x * (x-1)!
	}

	return result;
}


 */
// generate the factorial using recursive function

/*
void rootsOfQuadratic(double a, double b, double c);
double Squareroot(double x);

int main (void){
	double A, B, C;

	printf("Please enter three coefficients of the qunadratic equation: \n");
	printf("a: ");
	scanf("%lf", &A);

	printf("b: ");
	scanf("%lf", &B);

	printf("c: ");
	scanf("%lf", &C);

	rootsOfQuadratic(A, B, C);

	printf("\n");
	system("PAUSE");
	return 0;
 }



void rootsOfQuadratic(double a, double b, double c){
	double discriminant, squarerootOfDelta;
	double x1, x2;

	discriminant = b*b - 4*a*c;

	if(discriminant < 0){
		printf("The roots of this equation are imaginary numbers. \n");

	}else if(discriminant == 0){
		x1 = x2 = -b / (2*a);
		printf("Roots: x1 = x2 = %.3f", x1);

	}else{
		// in this case, the discriminant must be positive
		squarerootOfDelta = Squareroot(discriminant);

		x1 = ( -b + squarerootOfDelta) / (2*a);
		x2 = ( -b - squarerootOfDelta) / (2*a);

		printf("Roots: x1 = %.3f, x2 = %.3f", x1, x2);
	}
}


double Squareroot(double x){
	double guess = 1;
	double accuracy = 0.0000001;
	
	// the discriminant munst be positive due to previous codes

	while( fabs( guess*guess/x - 1 ) >= accuracy ){  // abs is the absolute value of integer while fabs in math.h is for dobule
		guess = (x/guess + guess) / 2.0;
	}

	return guess;
}

 */
// get the roots of a quandratic equation

/*
int findGCD(int num1, int num2);

int main (void){
	int num1, num2, gcd;

	printf("Please enter two non-negative integer values whose greatest common divisor is to be determined: \n");
	scanf("%d %d", &num1, &num2);

	gcd = findGCD(num1, num2);

	printf("The greatest common divisor of %d and %d is %d", num1, num2, gcd);

	printf("\n");
	system("PAUSE");
	return 0;
 }


int findGCD(int u, int v){
	int temp;
	
	while(v != 0){
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

 */
// find the gcd

/* 
int findGCD(int u, int v);
int findLCM(int u, int v);

int main (void){
	int num1, num2;
	int result;

	
	printf("Enter two positive integer values: \n");

	scanf("%d", &num1);
	scanf("%d", &num2);


	while(num1 <= 0 || num2 <= 0){
		printf("Error, data is invalid, try again\n\n");
		printf("Enter two positive integer values: \n");  // if one of the number is zero, the nthe divisor becomes aero i.e. division by zero

		scanf("%d", &num1);
		scanf("%d", &num2);

	}

	result = findLCM(num1, num2);

	printf("\nThe least common multple of %d and %d is %d\n", num1, num2, result);


	printf("\n");
	system("PAUSE");
	return 0;
 }





int findGCD(int u, int v){
	int temp;
	
	while(v != 0){
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

int findLCM(int u, int v){
	int lcm;

	lcm = u / findGCD(u, v) * v; // avoid overflow 

	return lcm;
}


 */
// find the lcm

/*
#define size 9
 
void sortArray(double array[], int n);
void printArray(double array[], int n);

int main (void){

	double data[] = {13.0, 56.3, 3.2, -8.2, 0.0, 6.3, -3.6, 16.0, 17.2};

	printf("The array before the sort:\n");
	printArray(data, size);

	sortArray(data, size);

	printf("The array after the sort:\n");
	printArray(data, size);

	printf("\n");
	system("PAUSE");
	return 0;
 }



void sortArray(double array[], int n){
	double temp; 
	int i, j;

	for(i = 0; i < n - 1; ++i){   // when n = 1, no sorting action
		for(j = i + 1; j < n; ++j){
			if(array[i] > array[j]){  // change the sign to make it ascend or descend

				// swap module
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}

}



void printArray(double array[], int n){
	int i;

	for(i = 0; i < n; ++i){
		printf("%.2f ", array[i]);
	}
	printf("\n");
}

 */
// selection SORT algorithm 

/* 

#define ASCEND 1
#define DESCEND 0

#define size 9
 
void sortArray(double array[], int n, int flag);
void printArray(double array[], int n);

int main (void){

	double data[] = {13.0, 56.3, 3.2, -8.2, 0.0, 6.3, -3.6, 16.0, 17.2};

	printf("The array before the sort:\n");
	printArray(data, size);

	sortArray(data, size, DESCEND);

	printf("The array after the sort:\n");
	printArray(data, size);

	printf("\n");
	system("PAUSE");
	return 0;
 }



void sortArray(double array[], int n, int flag){
	double temp; 
	int i, j;

	for(i = 0; i < n - 1; ++i){   // when n = 1, no sorting action
		for(j = i + 1; j < n; ++j){
			if(flag == ASCEND ? array[i] > array[j] : array[i] < array[j]){  // change the sign to make it ascend or descend

				// swap module
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}

}



void printArray(double array[], int n){
	int i;

	for(i = 0; i < n; ++i){
		printf("%.2f ", array[i]);
	}
	printf("\n");
}

 */
// selection SORT algorithm with argument indicating the sorted order


/*

#define size 6
// improvement: sort data in a txt file using this algorithm

void insertion_sort(double arr[], int sz);
int find_insertion_index(double arr[], int start_index);
void shift_right(double arr[], int end_index, int start_index);  // from right to left (the end index)
void printArray(double array[], int n);

int main(void){
	double array[] = {0.2, 6.2, 14.2, 14.8, 0.5, -1.3};

	insertion_sort(array, size);

	printArray(array, size);

	system("PAUSE");
    return 0;
}


void insertion_sort(double arr[], int sz){
	int startIndex, insertIndex;
	double hold;

	for(startIndex = 1; startIndex < sz; ++startIndex){
		insertIndex = find_insertion_index(arr, startIndex);
		// add an if to exclude the situation that no need to shift s

		hold = arr[startIndex];

		shift_right(arr, insertIndex, startIndex);  // need to hold the value at the startIndex cuz the array will change after shifting
		
		arr[insertIndex] = hold;
	}
}



int find_insertion_index(double arr[], int start_index){   
	int i;

	for(i = 0; i < start_index; ++i){  
		if(arr[i] > arr[start_index]){   // sorted mode depends on the sign 
			return i;
		}
	}
	return start_index; // must return sth when no insertindex is found
}


void shift_right(double arr[], int end_index, int start_index){

	for( ; start_index > end_index; --start_index){
		arr[start_index] = arr[start_index - 1];
	}
}


void printArray(double array[], int n){
	int i;

	for(i = 0; i < n; ++i){
		printf("%5.2f ", array[i]);
	}
	printf("\n");
}

 */
// insertion SORT algorithm (multiple loops)

/*

#define size 6
// improvement: sort data in a txt file using this algorithm

void insertion_sort(double arr[], int sz);
void printArray(double array[], int n);

int main(void){
	double array[] = {0.2, 6.2, 14.2, 14.8, 0.5, -1.3};

	insertion_sort(array, size);
	printArray(array, size);

	system("PAUSE");
    return 0;
}


void insertion_sort(double arr[], int sz){
	int sIndex, pIndex;
	double hold;

	for(sIndex = 1; sIndex < sz; ++sIndex){
		hold = arr[sIndex];
		for(pIndex = sIndex - 1; arr[pIndex] < hold && pIndex >= 0; --pIndex){
			arr[pIndex + 1] = arr[pIndex];
		}
		arr[pIndex + 1] = hold;
	}
}




void printArray(double array[], int n){
	int i;

	for(i = 0; i < n; ++i){
		printf("%5.2f ", array[i]);
	}
	printf("\n");
}

 */
// insertion SORT algorithm (two loops)

/* 
int gcd(int a, int b){
	return b==0 ? a : gcd(b, a % b);
}

 */
// find gcd by using recursion

/*
void printMatrix(int matrix[ROWS][COLS]){
	int row, col;

	for(row = 0; row < ROWS; ++row){
		for(col = 0; col < COLS; ++col){
			printf("%d ", matrix[row][col]);
		}
		printf("\n");
	}
}

 // remaining values are set to zero


int sumMatrix(int matrix[ROWS][COLS]){
	int row, col, sum = 0;

	for(row = 0; row < ROWS; ++row){
		for(col = 0; col < COLS; ++col){
			sum += matrix[row][col];
		}
	}
	return sum;
}

*/
// print matrix and sum up the elements

/*

#define d_rows 3
#define d_cols 2


void transpose(int data[][d_cols], int dataT[][d_rows]);   // when using VLA, variables must be declared before the arrays
void printMatrix(int matrix[][d_cols], int matrixT[][d_rows]);

int main(void){
	int data[d_rows][d_cols] =   // when the entries have been specified, no need to use VLA
		{ {14, 56},
		  {23, 24},
		  {51, 18}
		};

	
	// int test[5] = {0};   // no need for loop
	 

	int dataT[d_cols][d_rows];   // could use VLA even if it is weird

	transpose(data, dataT);
	printMatrix(data, dataT);

	printf("\n");
	system("PAUSE");
    return 0;
}

void transpose(int data[][d_cols], int dataT[][d_rows]){
	int row, col;

	for(row = 0; row < d_rows; ++row){
		for(col = 0; col < d_cols; ++col){
			dataT[col][row] = data[row][col];
		}
	}
}


void printMatrix(int matrix[][d_cols], int matrixT[][d_rows]){
	int row, col;

	for(row = 0; row < d_rows; ++row){
		for(col = 0; col < d_cols; ++col){
			printf("%d ", matrix[row][col]);
		}
		printf("\n");
	}
	printf("\n\n");

	
	for(col = 0; col < d_cols; ++col){
		for(row = 0; row < d_rows; ++row){
			printf("%d ", matrix[row][col]);
		}
		printf("\n");
	}
	printf("\n\n");
	

	
	for(row = 0; row < d_cols; ++row){
		for(col = 0; col < d_rows; ++col){
			printf("%d ", matrixT[row][col]);
		}
		printf("\n");
	}

}

 */
// transpose matrices and initialize array without loop

/*

int prime(int x){
	// assume that the x is an integer greater than one
	int i;
	int flag = 1;
	// optimize
	for(i = 2; i <= sqrt ( (double) x ) && flag; ++i){
		if(x % i == 0){
			flag = 0;
		}
	}
	return flag;
}

 */
// isPrime

/*

#define TRUE 1
#define FALSE 0



void print_array(int arr[], int sz);
int contains(int arr1[], int array2[], int sz1, int sz2);

int main(void) {
    int sz1, sz2, sz3, result;
    
    int my_data1[] =  {1, 4, 4, 4, 4};
    int my_data2[] =  {1, 4, 1, 4, 1, 4, 1};
    int my_data3[] =  {8, -3, 10, 9, 6, 1};
    
    sz1 = 5;
    sz2 = 7;
    sz3 = 6;
    
    printf("my_data1 is: ");
    print_array(my_data1, sz1);
    printf("my_data2 is: ");
    print_array(my_data2, sz2);
    printf("my_data3 is: ");
    print_array(my_data3, sz3);
    printf("\n\n");
    
    result = contains(my_data1, my_data1, sz1, sz1);
    printf("contains my_data1 in my_data1 should be 1(true): %d\n", result);
    
    result = contains(my_data1, my_data2, sz1, sz2);
    printf("contains my_data1 in my_data2 should be 0(false): %d\n", result);
    
	result = contains(my_data1, my_data3, sz1, sz2);
    printf("contains my_data1 in my_data2 should be 0(false): %d\n", result);

    
	system("PAUSE");
    return 0;
}



void print_array(int arr[], int sz) {
    int index;
    
    for(index=0; index<sz; index++)
        printf("%d ", arr[index]);
    
    printf("\n");
}


 int contains(int arrA[], int arrB[], int sz1, int sz2){
    int index1 = 0, index2;

	// loop driven by the second array
    for(index2 = 0; index2 < sz2; index2++){
		if(arrB[index2] == arrA[index1]){
			index1++;                // index could also be a counter for how many values have been
                                     // verified
		}

		if(index1 == sz1){
			return TRUE;
		}
    }

	return FALSE;     // not all the values have been found in the second array (in order)
    
}       // if this algorithm could be improved, please tell me!




 */
// one array contain another array

/*
#define maxBase 16
#define minBase 2

#define maxChars 64
// 10-base to another base
void tenToOtherBase(void);
int getBase(void);
int getDigits(int array[], int base, int num);
void printDigits(int array[], int i);

// other bases to 10-base
void otherToTenBase(void);
int convertToTen(char str[], int base);
int valueOfDigit(char character);

int main(void){
    int response;
	char isContinue;

	do{
		printf("\nTen to other base (enter 0) or other bases to ten (enter 1)?\n");
		scanf("%d", &response);

		if(response == 0){
			tenToOtherBase();
		}else if(response == 1){
			otherToTenBase();
		}

		printf("Continue?(y/n)\n");
		scanf(" %c", &isContinue);

	}while(isContinue == 'y' || isContinue == 'Y');

    printf("\n");
    return 0;
}

// ten to another base

void tenToOtherBase (void){
	int number;
	int BASE;
	int Digits[64];
	int INDEX;

	printf("Enter the a non-negative integer: \n");
	scanf("%d", &number);

	while(number < 0){
		printf("The integer should be non-negative, try again\n");
		scanf("%d", &number);
	}


	BASE = getBase();

	INDEX = getDigits(Digits, BASE, number);

	printDigits(Digits, INDEX);


 }


int getBase(void){
	int base;

	printf("\nEnter the base (2 - 16): \n");
	scanf("%d", &base);

	while(base < minBase || base > maxBase){
		printf("Error, the base is invalid, try again.\n");
		scanf("%d", &base);
	}

	return base;
}


int getDigits(int array[], int base, int num){
	int index = 0;

	do{
		array[index] = num % base;
		num /= base;
		index++;
	}

	while(num != 0);

	return index;
}


void printDigits(int array[], int i){

	int nextDigit;
	const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
									'A', 'B', 'C', 'D', 'E', 'F'};

	printf("\nThe converted number is ");
	for(--i; i >= 0; i--){
		nextDigit = array[i];
		printf("%c", baseDigits[nextDigit]);
	}

	printf("\n\n");
}




// other bases to 10-base
void otherToTenBase(void){
    char number[64];
    int base;

    int result;

        printf("Enter the number you want to convert:\n");
        scanf("%63s", number);

        printf("Enter the base of this number: \n");
        scanf("%d", &base);

        result = convertToTen(number, base);

        printf("The equivalent decimal number is %d\n\n", result);

}

int convertToTen(char str[], int base){
    int length;
    int exponential = 0;
    int decimalVal = 0;

    length = strlen(str);

    for(--length; length >= 0; --length){
            decimalVal += ( valueOfDigit(str[length]) * (int)pow((double)base, exponential) ); // power argument type fixed
            exponential++;
    }

    return decimalVal;
}

int valueOfDigit(char character){
    int i;
	const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
									'A', 'B', 'C', 'D', 'E', 'F'};

    for(i = 0; i < 16; ++i ){
        if(baseDigits[i] == character){
            return i;
        }
    }

    return 0;
}

 */
// crappy converter

/*

#define maxBase 16
#define minBase 2

#define maxChars 64
// 10-base to another base
void tenToOtherBase(void);
int getBase(void);
int getDigits(int array[], int base, int num);
void printDigits(int array[], int i);

// other bases to 10-base
void otherToTenBase(void);
int convertToTen(char str[], int base);
int valueOfDigit(char character);

int main(void){
    int response;
	char isContinue;

	do{
		printf("\nTen to other base (enter 0) or other bases to ten (enter 1)?\n");
		scanf("%d", &response);

		if(response == 0){
			tenToOtherBase();
		}else if(response == 1){
			otherToTenBase();
		}

		printf("Continue?(y/n)\n");
		scanf(" %c", &isContinue);

	}while(isContinue == 'y' || isContinue == 'Y');

    printf("\n");
    return 0;
}

// ten to another base

void tenToOtherBase (void){
	int number;
	int BASE;
	int Digits[64];
	int INDEX;

	printf("Enter the a non-negative integer: \n");
	scanf("%d", &number);

	while(number < 0){
		printf("The integer should be non-negative, try again\n");
		scanf("%d", &number);
	}


	BASE = getBase();

	INDEX = getDigits(Digits, BASE, number);

	printDigits(Digits, INDEX);


 }


int getBase(void){
	int base;

	printf("\nEnter the base (2 - 16): \n");
	scanf("%d", &base);

	while(base < minBase || base > maxBase){
		printf("Error, the base is invalid, try again.\n");
		scanf("%d", &base);
	}

	return base;
}


int getDigits(int array[], int base, int num){
	int index = 0;

	do{
		array[index] = num % base;
		num /= base;
		index++;
	}

	while(num != 0);

	return index;
}


void printDigits(int array[], int i){

	int nextDigit;
	const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
									'A', 'B', 'C', 'D', 'E', 'F'};

	printf("\nThe converted number is ");
	for(--i; i >= 0; i--){
		nextDigit = array[i];
		printf("%c", baseDigits[nextDigit]);
	}

	printf("\n\n");
}




// other bases to 10-base
void otherToTenBase(void){
    char number[64];
    int base;

    int result;

        printf("Enter the number you want to convert:\n");
        scanf("%63s", number);

        printf("Enter the base of this number: \n");
        scanf("%d", &base);

        result = convertToTen(number, base);

        printf("The equivalent decimal number is %d\n\n", result);

}

int convertToTen(char str[], int base){
    int length;
    int exponential = 0;
    int decimalVal = 0;

    length = strlen(str);

    for(--length; length >= 0; --length){
            decimalVal += ( valueOfDigit(str[length]) * (int)pow((double)base, exponential) ); // power argument type fixed
            exponential++;
    }

    return decimalVal;
}

int valueOfDigit(char character){
    int i;
	const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
									'A', 'B', 'C', 'D', 'E', 'F'};

    for(i = 0; i < 16; ++i ){
        if(baseDigits[i] == character){
            return i;
        }
    }

    return 0;
}

 */
// perhaps the same as above

/*
int main(void){
	// variables

	// code


	system("PAUSE");
	return 0;
}

 */
// general main function skeleton

//--------------clock--------------

/*
struct date
{
	int month;
	int day;
	int year;
};


struct date dateUpdate(struct date d);
int numberOfDays (struct date d);
int isLeapYear(int year);

int main (void){

	struct date today, tomorrow;

	// today's date
	today.month = 2;
	today.day   = 28;
	today.year  = 2016; // change into equivalent statements OR input from keyboard


	tomorrow = dateUpdate(today);

	printf("Today's date is %d/%d/%.2d \n", today.month, today.day, today.year % 100);
	printf("Tomorrow's date is %d/%d/%.2d \n", tomorrow.month, tomorrow.day, tomorrow.year % 100);
	
	system("PAUSE");
	return ;
}

// function to calculates tomorrow's date

struct date dateUpdate(struct date d){

	struct date t;

	if( d.day != numberOfDays(d) ){ 
		t.day   = d.day + 1;
		t.month = d.month;
		t.year  = d.year;

	}else if(d.month == 12){     // end of year
		t.day   = 1;
		t.month = 1;
		t.year  = d.year + 1;

	}else{                       // end of month
		t.day   = 1;
		t.month = d.month + 1;
		t.year  = d.year;
	}

	return t;
}


// function to determine days of the specified month

int numberOfDays (struct date d){  // a copy of structure (unlike arrays)

	const int LeapYearDaysFeb = 29;
	const int daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

	if( d.month == 2 && isLeapYear(d.year) ){
		return LeapYearDaysFeb;
	}else{
		return daysPerMonth[d.month - 1];   // NOTICE! days of the month = array[month - 1]
	}
}


// function to determine whether the specified year is a leap year

int isLeapYear(int year){

	if( (year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ){
		return 1;
	}else{
		return 0;
	}
}

 */
// update date

/*
struct time
{
	int hour;
	int minutes;
	int seconds;
};


struct time timeUpdate(struct time ct);

int main (void){

	struct time currentTime, nextTime;
	
	// get current time 
	scanf("%d:%d:%d", &currentTime.hour, &currentTime.minutes, &currentTime.seconds); 

	nextTime = timeUpdate(currentTime);

	// printf("Current time is %d/%d/%.2d \n", today.month, today.day, today.year % 100);
	printf("%.2d:%.2d:%.2d\n", nextTime.hour, nextTime.minutes, nextTime.seconds);
	
	system("PAUSE");
	return ;
}

// function to calculates next time

struct time timeUpdate(struct time ct){

	const int SECONDS = 60;
	const int HOURS = 24;
	const int MINUTES = 60;
	
	ct.seconds++;

	if(ct.seconds == SECONDS){
		ct.seconds = 0;
		ct.minutes++;
		
		if(ct.minutes == MINUTES){
			ct.minutes = 0;
			ct.hour++;

			if(ct.hour == HOURS){
				ct.hour = 0;
			}
		}
	}

	return ct;
}


 */
// update time

/*
struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int hour;
	int minutes;
	int seconds;
};


struct dateAndTime
{
	struct time stime;
	struct date sdate;
};

struct time timeUpdate(struct time ct);
struct date dateUpdate(struct date d);
int numberOfDays (struct date d);
int isLeapYear(int year);

int main (void){
	struct dateAndTime event =
	{
		{0, 26, 26},
		{11, 13, 2016}
	};
	
	event.sdate = dateUpdate (event.sdate);
	event.stime = timeUpdate (event.stime);

	printf("%d/%d/%.2d\n", event.sdate.month, event.sdate.day, event.sdate.year % 100);
	printf("%.2d:%.2d:%.2d\n\n", event.stime.hour, event.stime.minutes, event.stime.seconds);


	system("PAUSE");
	return ;
}

// function to calculates tomorrow's date

struct date dateUpdate(struct date d){

	struct date t;

	if( d.day != numberOfDays(d) ){ 
		t.day   = d.day + 1;
		t.month = d.month;
		t.year  = d.year;

	}else if(d.month == 12){     // end of year
		t.day   = 1;
		t.month = 1;
		t.year  = d.year + 1;

	}else{                       // end of month
		t.day   = 1;
		t.month = d.month + 1;
		t.year  = d.year;
	}

	return t;
}


// function to determine days of the specified month

int numberOfDays (struct date d){  // a copy of structure (unlike arrays)

	const int LeapYearDaysFeb = 29;
	const int daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

	if( d.month == 2 && isLeapYear(d.year) ){
		return LeapYearDaysFeb;
	}else{
		return daysPerMonth[d.month - 1];   // NOTICE! days of the month = array[month - 1]
	}
}


// function to determine whether the specified year is a leap year

int isLeapYear(int year){

	if( (year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ){
		return 1;
	}else{
		return 0;
	}
}

// function to update time
struct time timeUpdate(struct time ct){

	const int SECONDS = 60;
	const int HOURS = 24;
	const int MINUTES = 60;
	
	ct.seconds++;

	if(ct.seconds == SECONDS){
		ct.seconds = 0;
		ct.minutes++;
		
		if(ct.minutes == MINUTES){
			ct.minutes = 0;
			ct.hour++;

			if(ct.hour == HOURS){
				ct.hour = 0;
			}
		}
	}

	return ct;
}
 */
// structure contains structure

/* 
struct month
{
	int numberOfDays;
	char nameOfMonth[3];
};

int main(void){

	// arrays of structure which contains an array called nameOfMonth
	struct month months[12] =
	{
		{31, {'J', 'a', 'n'}},
		{28, {'F', 'e', 'b'}},   // not a leap year
		{31, {'M', 'a', 'r'}},
		{30, {'A', 'p', 'r'}},
		{31, {'M', 'a', 'y'}},
		{30, {'J', 'u', 'n'}},
		{31, {'J', 'u', 'l'}},
		{31, {'A', 'u', 'g'}},
		{30, {'S', 'e', 'p'}},
		{31, {'O', 'c', 't'}},
		{30, {'N', 'o', 'v'}},
		{31, {'D', 'e', 'c'}}

	};


	int i;

	printf("Month   Number of Days (not a leap year) \n");
	printf("-----  ------------------\n");

	for(i = 0; i < 12; ++i){
		printf("%c%c%c    %d\n", months[i].nameOfMonth[0], months[i].nameOfMonth[1], months[i].nameOfMonth[2], months[i].numberOfDays);
	}

	system("PAUSE");
	return 0;
}

 */
// array of structure which contains an array

/*
struct date
{
	int month;
	int day;
	int year;
};


int getN (struct date d);
int fYear(int year, int month);
int gMonth(int month);

// function to calculate the elapsed days between two dates (after Mar 1, 1990)

int main(void){
	struct date d2, d1;
	int n1, n2;

	printf("Enter two dates (mm/dd/yy):\n");
	scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
	scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);


	n1 = getN(d1);
	n2 = getN(d2);

	printf("The number of elapsed days between %d/%d/%d and %d/%d/%d is %d\n\n", d1.month, d1.day, d1.year, 
		d2.month, d2.day, d2.year, abs(n1 - n2));

	system("PAUSE");
	return 0;
}

int getN (struct date d){
	int N;
	N = 1461 * fYear(d.year, d.month) / 4 + 153 * gMonth(d.month) / 5 + d.day;

	// improvement for formula: 29 days in Feb for leap year
	if(d.year > 1900 || (d.year == 1900 && d.month >= 3) ){
		return N;
	}else if(d.year > 1800 || (d.year == 1800 && d.month >= 3) ){
		return N+1;
	}else if(d.year > 1700 || (d.year == 1700 && d.month >= 3) ){
		return N+2;
	}else{
		return N; // unknown correction?
	}

}


int fYear(int year, int month){
	year = month <= 2 ? (year - 1) : year;
	return year;
}


int gMonth(int month){
	month = month <= 2 ? (month + 13) : (month + 1);
	return month;
}

 */
// elapsed days

/*
struct time
{
	int hour;
	int minutes;
	int seconds;
};


struct time timeUpdate(struct time ct);
struct time elapsed_time(struct time t1, struct time t2);

int main (void){

	struct time firstTime, secondTime, elapsedTime;

	firstTime.hour = 3;
	firstTime.minutes = 45;
	firstTime.seconds = 15;

	// cross midnight
	secondTime.hour = 0;
	secondTime.minutes = 44;
	secondTime.seconds = 3;


	elapsedTime = elapsed_time (firstTime, secondTime);

	printf("%.2d:%.2d:%.2d\n\n", elapsedTime.hour, elapsedTime.minutes, elapsedTime.seconds);

	system("PAUSE");
	return ;
}

// function to calculates next time

struct time elapsed_time(struct time t1, struct time t2){
	struct time result;
	int sum1, sum2, resultSum;

	sum1 = t1.hour * 3600 + t1.minutes * 60 + t1.seconds;
	sum2 = t2.hour * 3600 + t2.minutes * 60 + t2.seconds;

	resultSum = abs(sum1 - sum2);

	result.hour = resultSum / 3600;  // extract hours
	resultSum %= 3600; 

	result.minutes = resultSum / 60; // extract minutes
	resultSum %= 60;  

	result.seconds = resultSum;      // extract seconds

	return result;
}


 */
// elapsed time

/* 
struct date
{
	int month;
	int day;
	int year;
};

struct days
{
	char nameOfDay[3];
};


int getN (struct date d);
int fYear(int year, int month);
int gMonth(int month);
void dayOfDate(struct date d);


// function to determine the day on which a particular date falls on (after Mar 1, 1990)

int main(void){
	struct date d1;

	printf("Enter two dates (mm/dd/yy):\n");
	scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);

	dayOfDate(d1);

	system("PAUSE");
	return 0;
}

int getN (struct date d){
	int N;

	N = 1461 * fYear(d.year, d.month) / 4 + 153 * gMonth(d.month) / 5 + d.day;

	// improvement for formula: 29 days in Feb for leap year
	if(d.year > 1900 || (d.year == 1900 && d.month >= 3) ){
		return N;
	}else if(d.year > 1800 || (d.year == 1800 && d.month >= 3) ){
		return N+1;
	}else if(d.year > 1700 || (d.year == 1700 && d.month >= 3) ){
		return N+2;
	}else{
		return N; // unknown correction?
	}

}


int fYear(int year, int month){
	year = month <= 2 ? (year - 1) : year;
	return year;
}


int gMonth(int month){
	month = month <= 2 ? (month + 13) : (month + 1);
	return month;
}


void dayOfDate(struct date d){
	const struct days name[7] =
	{
		{ {'S', 'u', 'n'} }, { {'M', 'o', 'n'} },
		{ {'T', 'u', 'e'} }, { {'W', 'e', 'd'} },
		{ {'T', 'h', 'u'} }, { {'F', 'r', 'i'} },
		{ {'S', 'a', 't'} }
	};

	int dayNum;

	dayNum = (getN(d) - 621049) % 7;

	printf("%c%c%c\n\n", name[dayNum].nameOfDay[0], name[dayNum].nameOfDay[1], name[dayNum].nameOfDay[2]);
	
	
}
 */
// determine the day on which the date falls on

// --------------------------------------------------

/*

int countSentences(char strInput[], char strOutput[]);

int main(void){
	char strSentences[] = "\nThis is the first sentence.\tThis is the second one. This is the last sentence in this string example.";
	char theSecondOne[100]; // assume that the  longest sentetnce will contain less than 100 characters (including the null character)

	int numberOfSentences;

	numberOfSentences = countSentences(strSentences, theSecondOne);

	printf("%s\n", strSentences);
	printf("\n\n");

	printf("%d\n", numberOfSentences);
	printf("%s\n", theSecondOne);
	printf("\n\n");

	system("PAUSE");
	return 0;

}


int countSentences(char strInput[], char strOutput[]){
	int index1, count = 0, index2 = 0, storeSpace = FALSE;

	for(index1 = 0; strInput[index1] != '\0'; ++index1){ // go through all the elements in the sentences string

		if(count == 1){ 
			if( (strInput[index1] != ' ' && strInput[index1] != '\n' && strInput[index1] != '\t') || storeSpace ){ 
				// if the space precede the first sentence, it will be skipped. 
				// If the first character has been met, all the characters after that will stored.
				storeSpace = TRUE;
				strOutput[index2] = strInput[index1];
				index2++;
			}
		}

		if(strInput[index1] == '.'){
			count++;
			if(count == 2){
				strOutput[index2] = '\0';
			}
		}
	}

	return count;
}

 */
// count sentences in a string and extract a sentence from the string

/*
void askQuestionAndCheckAnswer(char QandA[]);
int positionOfCharInString(char chracter, char string[]);
int compareString(char first[], char second[]);
int getLength(char string[]);
void copyString(char destination[], char source[], int source_start, int source_end);


int main(void){
	char QandAString[] = "What's your gender (male/female) ?male";

	askQuestionAndCheckAnswer(QandAString);
	system("PAUSE");
	return 0;
 }


void askQuestionAndCheckAnswer(char QandA[]){
	char questionStr[maxLength], answerStr[maxLength], userAnswer[maxLength];
	int qMarkIndex, isRight, length;

	qMarkIndex = positionOfCharInString('?', QandA);
	length = getLength(QandA);

	copyString(questionStr, QandA, 0, qMarkIndex);
	copyString(answerStr, QandA, qMarkIndex+1, length-1);

	printf("%s\n", questionStr);
	printf("Enter you answer:\n");
	scanf("%s", userAnswer);

	isRight = compareString(userAnswer, answerStr);

	if(isRight == TRUE){
		printf("Correct!\n");
	}else{
		printf("Incorrect.\n");
	}


}


int positionOfCharInString(char character, char string[]){
	int i;
	for(i = 0; string[i] != '\0'; ++i){
		if(string[i] == character)
			return i;
	}

	return -1; // if the character is not in the string
}


int compareString(char first[], char second[]){
	int i;

	if( getLength(first) == getLength(second) ){
		for(i = 0; first[i] != '\0'; ++i){
			if(first[i] != second[i])
				return FALSE;
		}
		return TRUE;
	}
	
	return FALSE;
}


int getLength(char string[]){
	int i = 0;
	while(string[i] != '\0'){
		++i;
	}

	return i;
}


void copyString(char destination[], char source[], int source_start, int source_end){
	int i = 0;

	for(; source_start <= source_end; source_start++){
		destination[i] = source[source_start];
		i++;
	}

	destination[i] = '\0';

}
 */
// ask user question using string

/*
void askQuestionAndCheckAnswer(char QandA[]);
int positionOfCharInString(char chracter, char string[]);
int compareString(char first[], char second[]);
int getLength(char string[]);
void copyString(char destination[], char source[], int source_start, int source_end);


int main(void){
	char QandAString[] = "What's your gender (male/female) ?male";

	askQuestionAndCheckAnswer(QandAString);
	system("PAUSE");
	return 0;
 }


void askQuestionAndCheckAnswer(char QandA[]){
	char questionStr[maxLength], answerStr[maxLength], userAnswer[maxLength];
	int qMarkIndex, isRight, length;

	qMarkIndex = positionOfCharInString('?', QandA);
	length = getLength(QandA);

	copyString(questionStr, QandA, 0, qMarkIndex);
	copyString(answerStr, QandA, qMarkIndex+1, length-1);

	printf("%s\n", questionStr);
	printf("Enter you answer:\n");
	scanf("%s", userAnswer);

	isRight = compareString(userAnswer, answerStr);

	if(isRight == TRUE){
		printf("Correct!\n");
	}else{
		printf("Incorrect.\n");
	}


}


int positionOfCharInString(char character, char string[]){
	int i;
	for(i = 0; string[i] != '\0'; ++i){
		if(string[i] == character)
			return i;
	}

	return -1; // if the character is not in the string
}


int compareString(char first[], char second[]){
	int i;

	if( getLength(first) == getLength(second) ){
		for(i = 0; first[i] != '\0'; ++i){
			if(first[i] != second[i])
				return FALSE;
		}
		return TRUE;
	}
	
	return FALSE;
}


int getLength(char string[]){
	int i = 0;
	while(string[i] != '\0'){
		++i;
	}

	return i;
}


void copyString(char destination[], char source[], int source_start, int source_end){
	int i = 0;

	for(; source_start <= source_end; source_start++){
		destination[i] = source[source_start];
		i++;
	}

	destination[i] = '\0';

}
 */
// compare and copy a string

/*
void concatStrings(char result[], const char firstString[], const char secondString[]);

int main(void){
	const char string1[] = "Hello ";
	const char string2[] = "World!";
	char concatenatedStr[256];

	printf("%s\n", string1);
	printf("%s\n\n", string2);
	
	concatStrings(concatenatedStr, string1, string2);
	printf("%s\n", concatenatedStr);
	
	
	system("PAUSE");
	return 0;
}
// concatenate two strings

void concatStrings(char result[], const char firstString[], const char secondString[]){
	int i, j;

	// copy the first string to the result string.
	for(i = 0; firstString[i] != '\0'; ++i){
		result[i] = firstString[i];
	}


	// copy the second string to the result string.
	for(j = 0; secondString[j] != '\0'; ++j){
		result[i+j] = secondString[j];
	}
	
	result[i+j] = '\0';

}

 */
// concatenate two strings

/*
void readLine (char buffer[]);

int main(void){
	char inputStr[81];

	printf("Enter a line of text, up to 80 characters. Hit enter when done.\n");
	readLine(inputStr);
	
	printf("The text you enter: \n%s", inputStr);
	
	printf("\n");
	system("PAUSE");
	return 0;
}


// read a line of text
// can pass another parameter to ensure the capacity of the buffer will not be exceeded.
// print some indication to user as well
void readLine (char buffer[]){
	char character;
	int i = 0;
	
	do{
		character = getchar();
		buffer[i] = character;
		i++;
	}while(character != '\n');
	
	buffer[i-1] = '\0';
}

 */
// read a line from user and print it on the screen

/*
int isAlpha(char character);
int countWords(char string[]);

int main(void){
	char test1[] = "How many words here?";
	char test2[] = "Hello World!";
	
	printf("%s\t\t%d\n", test1, countWords(test1) );
	printf("%s\t\t%d\n\n", test2, countWords(test2) );
	
	printf("\n");
	system("PAUSE");
	return 0;
}



// count how many words in the string
int countWords(char string[]){
	int count = 0, i;
	int lookForWord = TRUE;
	
	for(i = 0; string[i] != '\0'; ++i){
		if( isAlpha(string[i]) ){
			if(lookForWord){
				count++;
				lookForWord = FALSE;
			}
		}else{
			lookForWord = TRUE;
		}
	}
	
	return count;
}


int isAlpha(char character){
	if( (character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z') ){
		return TRUE;
	}else{
		return FALSE;
	}
}
 */
// count how many words in the string
 
/*
// function prototypes
int isDigit(char character);
int isAlpha(char character);

// count how many words in the string
int main(void){
	char str1[] = "Hello World!";
	char str2[] = "256,231 children's toys.";

	printf("It should be 2: %d\n", countWords(str1));
	printf("It should be 3: %d\n", countWords(str2));

	system("PAUSE");
	return 0;
}



int countWords(char string[]){
	int count = 0, i;
	int lookForWord = TRUE;
	
	int lastIsChar = FALSE;
	int lastIsDigit = FALSE;
	
	for(i = 0; string[i] != '\0'; ++i){
		if( isAlpha(string[i]) || isDigit(string[i]) ){  
		
			if(lookForWord){
				count++;
				lookForWord = FALSE;
			}
			
			// save the state of last character (digit/letter)
			isAlpha(string[i]) == TRUE ? (lastIsChar = TRUE) : (lastIsDigit = TRUE);
			
		}else{
			// if last character is a letter, apostrophe or hypen will be ignored (count does not increment)
			if(lastIsChar && (string[i] == '\'' || string[i] == '-') ){  // escape the backslash OR use ascii value
				lookForWord = FALSE;
				lastIsChar = FALSE;
			// if last character is a digit, commas or periods will be ignored (count does not increment)
			}else if(lastIsDigit && (string[i] == '.' || string[i] == ',') ){
				lookForWord = FALSE;
				lastIsDigit = FALSE;	
				
			}else{
				lookForWord = TRUE;
			}
		}
	}
	
	return count;
}


int isAlpha(char character){
	if( (character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z') ){
		return TRUE;
	}else{
		return FALSE;
	}
}

int isDigit(char character){
	if( (character >= '0' && character <= '9') ){
		return TRUE;
	}else{
		return FALSE;
	}
}


 */
// counter that handles the apostrophe/hyphen/comma/periods for letters and digits

/*

// function prototypes
int isDigit(char character);
int isAlpha(char character);
void readLine (char buffer[]);
int countWords(char string[]);


int main(void){
	char nextLine[ONE_LINE];
	int wordsNum = 0;
	
	printf("Enter multiple lines of text. \nHit enter when finish each line and double enters when finish the whole text.\n");
	printf("Note that the maximum number of characters in each line is 80.\nThe extra part will be truncated...\n\n");

	do{
		readLine(nextLine);
		wordsNum += countWords(nextLine);

	}while(nextLine[0] != '\0');

	printf("\n%d word%s in the paragraph above.", wordsNum, (wordsNum == 1) ? "" : "s" );

	printf("\n");
	system("PAUSE");
	return 0;
}


void readLine (char buffer[]){
	char character;
	int i = 0;
	
	do{
		character = getchar();
		buffer[i] = character;
		i++;

	}while(character != '\n' && i < ONE_LINE);
	
	buffer[i-1] = '\0';
}




int countWords(char string[]){
	int count = 0, i;
	int lookForWord = TRUE;
	
	int lastIsChar = FALSE;
	int lastIsDigit = FALSE;
	
	for(i = 0; string[i] != '\0'; ++i){
		if( isAlpha(string[i]) || isDigit(string[i]) ){  
		
			if(lookForWord){
				count++;
				lookForWord = FALSE;
			}
			
			// save the state of last character (digit/letter)
			isAlpha(string[i]) == TRUE ? (lastIsChar = TRUE) : (lastIsDigit = TRUE);
			
		}else{
			// if last character is a letter, apostrophe or hypen will be ignored (count does not increment)
			if(lastIsChar && (string[i] == '\'' || string[i] == '-') ){  // escape the backslash OR use ascii value
				lookForWord = FALSE;
				lastIsChar = FALSE;
			// if last character is a digit, commas or periods will be ignored (count does not increment)
			}else if(lastIsDigit && (string[i] == '.' || string[i] == ',') ){
				lookForWord = FALSE;
				lastIsDigit = FALSE;	
				
			}else{
				lookForWord = TRUE;
			}
		}
	}
	
	return count;
}


int isAlpha(char character){
	if( (character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z') ){
		return TRUE;
	}else{
		return FALSE;
	}
}

int isDigit(char character){
	if( (character >= '0' && character <= '9') ){
		return TRUE;
	}else{
		return FALSE;
	}
}

 */
// count words in the text entered by user (v0.1)

/*

// simply dictionary program

// function prototypes
int lookUp(const struct entry Dict[], const char search[], const int entries);
int compareString(const char string1[], const char string2[]);

// entry structure
struct entry
{
	char word[21];  // up to 20 characters for word
	char definition[161]; // up to 160 characters fot definintion
};


int main(void){
	char searchWord[21];
	int inDict; // get the index of definition OR -1 indicating the word is not in the dictionary
	const int entries = 10;

	// array of structure containing word itself and its definintion (sorted in lexicographical order)
	const struct entry Dict[1000] =  // its size is 1000 but it contains only 10 entries
	{
		{"allegation", "a statement that someone has done something wrong or illegal, but that has not been proved"},
		{"bully",      "someone who uses their strength or power to frighten or hurt someone who is weaker"},
		{"estate",     "a large area of land in the country, usually with one large house on it and one owner"},
		{"filament",   "a very thin thread or wire"},
		{"forego",     "to not do or have something pleasant or enjoyable"},
		{"parabola",   "a curve in the shape of the imaginary line an object makes when it is thrown high in the air and comes down a little distance away"},
		{"parse",      "to describe the grammar of a word when it is in a particular sentence"},
		{"query",      "a question that you ask to get information, or to check that something is true or correct"},
		{"receptacle", "a container for putting things in"},
		{"taxonomy",   "the process or a system of organizing things into different groups that show their natural relationships"}
	};
	
	printf("Enter the word you want to look up in lowercase (up to 20 characters):\n");
	scanf("%20s", searchWord);
	
	inDict = lookUp(Dict, searchWord, entries); // the searchWord string is "put" in the read-only memory (passed by value)
	
	if(inDict != -1){
		printf("%s: %s\n", searchWord, Dict[inDict].definition);
	}else{
		printf("Sorry, %s is not in my dictionary.\n", searchWord);
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}


// look up entries in the dictionary and decide whether the string is in the dictionary 
int lookUp(const struct entry Dict[], const char search[], const int entries){
	int mid, low = 0, high = entries - 1;
	int highOrLow;
	
	while(low <= high){
		mid = (low + high) / 2;
		highOrLow = compareString(Dict[mid].word, search);

		if(highOrLow == -1){
			low = mid + 1;
		}else if(highOrLow == 1){
			high = mid - 1;
		}else{
			return mid; // the word is found and return its index 
		}
	}
	
	return -1; // word is not in the dictionary
}


int compareString(const char string1[], const char string2[]){
	int i = 0;
	
	while(string1[i] != '\0' && string2[i] != '\0' && string1[i] == string2[i])
		++i;
	
	if(string1[i] < string2[i]){
		return -1;   // string1 is before string 2 in the lexicographical order
	}else if(string1[i] == string2[i]){
		return 0;
	}else{
		return 1;
	}
	
}

 */
// a simply dictionary program

/*
// function prototypes
int strToInt(const char string[]); // using const because program only reads the string and will not change it.

int main(void){
	char test1[] = "2347";
	char test2[] = "-2347";
	
	printf("%d\n", strToInt(test1) + 10);
	printf("%d\n", strToInt(test2) + 10);
	
	printf("\n");
	system("PAUSE");
	return 0;
}


int strToInt(const char string[]){
	int i = 0;
	int result = 0;
	int isNegative = FALSE;
	
	if(string[0] == '-'){
		isNegative = TRUE;
		i = 1;
	}
	
	for(; string[i] >= '0' && string[i] <= '9'; ++i){
		result = result*10 + string[i] - '0'; // the difference between the digit character and '0' is the integer of the digit character.
	}
	
	if(isNegative){
		result *= -1;
	}
	
	return result;
}

 */
// convert a string to its integer equivalent

/*

// function prototypes
double strToDouble(const char string[]); // using const because program only reads the string and will not change it.

int main(void){
	char test1[] = "23.47";
	char test2[] = "-23.47";
	
	printf("%f\n", strToDouble(test1));
	printf("%f\n", strToDouble(test2));
	
	printf("\n");
	system("PAUSE");
	return 0;
}


double strToDouble(const char string[]){
	int i = 0;
	double integralPart = 0, decimalPart = 0, result;
	int isNegative = FALSE;
	double integralScalar = 10.0, decimalScalar = 0.1;
	
	if(string[0] == '-'){
		isNegative = TRUE;
		i = 1;
	}

	// add integral part
	for(; string[i] >= '0' && string[i] <= '9'; ++i){
		integralPart = integralPart * integralScalar + string[i] - '0'; // the difference between the digit character and '0' is the integer of the digit character.
	}
	
	// if possible, add up decimal part
	if(string[i] == '.'){		
		for(++i; string[i] >= '0' && string[i] <= '9'; ++i){
			decimalPart += (string[i] - '0') * decimalScalar;
			decimalScalar *= decimalScalar;
		}
	}
	
	result = integralPart + decimalPart;
	
	if(isNegative){
		result *= -1;
	}
	
	return result;
}

 */
// convert a string to its double equivalent

/*
// function prototypes
void intToStr(int number, char result[]); // using const because program only reads the string and will not change it.
void shiftRight(char arr[], int endIndex); // endIndex is exclusive


int main(void){
	int test1 = 23407;
	int test2 = -23047;
	
	char test1Str[101];
	char test2Str[101];
	
	intToStr(test1, test1Str);
	intToStr(test2, test2Str);
	
	printf("%s\n", test1Str);
	printf("%s\n", test2Str);
	
	printf("\n");
	system("PAUSE");
	return 0;
}


void intToStr(int number, char result[]){
	int i;
	int nextDigit;
	int isNegative = FALSE;
	
	
	if(number < 0){
		isNegative = TRUE;
		number *= -1;
	}
	
	for(i = 0; number != 0; ++i){
		nextDigit = number % 10;
		number /= 10;
		
		shiftRight(result, i);
		
		result[0] = nextDigit + '0';
	}
	
	if(isNegative){
		shiftRight(result, i);
		result[0] = '-';
		i++;
	}
	
	result[i] = '\0';
	
}

void shiftRight(char arr[], int endIndex){

	while(endIndex > 0){
		arr[endIndex] = arr[endIndex - 1];
		endIndex--;
	}
}
 */
// convert integer to string

/*
// function prototypes
void substring(char source[], int start, int count, char result[]);

int main(void){
	char subString[100];

	substring("Hello World!, today is Sunday.", 0, 12, subString);

	printf("%s\n", subString);

	printf("\n");
	system("PAUSE");
	return 0;
}


void substring(char source[], int start, int count, char result[]){
	int i;
	for(i = 0; i < count && source[start] != '\0'; ++i){
		result[i] = source[start];
		start++;
	}
	result[i] = '\0';
}
 */
// extracting s portion of string

/*
// function prototypes
int findString(char str1[], char str2[]);

int main(void){
	char string1[] = "a chatterbox";
	char string2[] = "hat";
	
	printf("%d\n", findString(string1, string2));
	
	printf("\n");
	system("PAUSE");
	return 0;
}

int findString(char str1[], char str2[]){
	int i, j;
	
	for(i = 0; str1[i] != '\0'; ++i){
		
		// find the initial of the string 2
		if(str1[i] == str2[0]){
			
			for(j = 0; str2[j] != '\0'; ++j){
				if(str1[i+j] != str2[j])
					break; // not the same as string 2
			}
			
			// found string 2
			if(str2[j] == '\0'){
				return i;
			}
		}
	}
	
	return -1;
}
 */
// find the substring and return its location

/*
void removeString(char sourceStr[], int startIndex, int charNum);

int main(void){
	char string1[] = "Hello Shitty World!";
	
	removeString(string1, 0, 19);

	printf("%s\n", string1);
	
	printf("\n");
	system("PAUSE");
	return 0;
}


void removeString(char sourceStr[], int startIndex, int charNum){
	 int connectIndex = startIndex + charNum;
	 
	 // move the remaining chracters on the right hand side by charNum
	 for(; sourceStr[connectIndex] != '\0'; connectIndex++){
		 sourceStr[connectIndex - charNum] = sourceStr[connectIndex];
	 }
	 
	 sourceStr[connectIndex - charNum] = '\0';
}
 */
// remove a portion of string

/*
void insertString(char srcString[], char insrtString[], int startIndex);


int main(void){
	char text[256] = "the son";
	
	insertString(text, "little ", 4);
	
	printf("%s\n", text);
	
	printf("\n");
	system("PAUSE");
	return 0;
}

void insertString(char srcString[], char insrtString[], int startIndex){
	int i;
	int lengthOfInsertion = strlen(insrtString);
	int lengthOfSource = strlen(srcString);
	
	// move a portion of string to the right by lengthOfInsertion slots
	for(i = lengthOfSource - 1; i >= startIndex; i--){
		srcString[i + lengthOfInsertion] = srcString[i];
	}
	
	// insrcString is inserted
	for(i = 0; insrtString[i] != '\0'; ++i){
		srcString[startIndex + i] = insrtString[i]; 
	}
	
	//  terminate the string with null character
	srcString[lengthOfSource + lengthOfInsertion] = '\0';
	
}


 */
// insert a portion of string

/*
int findString(char str1[], char str2[]);
void removeString(char sourceStr[], int startIndex, int charNum);
void insertString(char srcString[], char insrtString[], int startIndex);
void replaceString(char srcString[], char stringToBeReplaced[], char stringReplacedBy[]);

int main(void){
	char srcText[256] = "Cowgirl Bebop is an impressive anime.";
	char rplcText[] = "boy";
	char crtText[] = "girl";
	
	printf("%s\n\n", srcText);

	replaceString(srcText, rplcText, crtText);
	printf("%s\n", srcText);
	
	printf("\n");
	system("PAUSE");
	return 0;
}


void replaceString(char srcString[], char stringToBeReplaced[], char stringReplacedBy[]){
	int strIndex;
	int length1 = strlen(stringToBeReplaced);
	
	strIndex = findString(srcString, stringToBeReplaced);
	
	if(strIndex != -1){
		removeString(srcString, strIndex, length1);
		insertString(srcString, stringReplacedBy, strIndex);
	}
	else{
		printf("%s cannot be found...\n\n", stringToBeReplaced);
	}
}


int findString(char str1[], char str2[]){ // find str2 in the str1
	int i, j;
	
	for(i = 0; str1[i] != '\0'; ++i){
		
		// find the initial of the string 2
		if(str1[i] == str2[0]){
			
			for(j = 0; str2[j] != '\0'; ++j){
				if(str1[i+j] != str2[j])
					break; // not the same as string 2
			}
			
			// found string 2
			if(str2[j] == '\0'){
				return i;
			}
		}
	}
	
	return -1;
}


void removeString(char sourceStr[], int startIndex, int charNum){
	 int connectIndex = startIndex + charNum;
	 
	 // move the remaining chracters to the left by charNum
	 for(; sourceStr[connectIndex] != '\0'; connectIndex++){
		 sourceStr[connectIndex - charNum] = sourceStr[connectIndex];
	 }
	 
	 sourceStr[connectIndex - charNum] = '\0';
}


void insertString(char srcString[], char insrtString[], int startIndex){
	int i;
	int lengthOfInsertion = strlen(insrtString);
	int lengthOfSource = strlen(srcString);
	
	// move a portion of string to the right by lengthOfInsertion slots
	for(i = lengthOfSource - 1; i >= startIndex; i--){
		srcString[i + lengthOfInsertion] = srcString[i];
	}
	
	// insrcString is inserted
	for(i = 0; insrtString[i] != '\0'; ++i){
		srcString[startIndex + i] = insrtString[i]; 
	}
	
	//  terminate the string with null character
	srcString[lengthOfSource + lengthOfInsertion] = '\0';
	
}
 */
// replace a string v0.0

/*
int findString(char str1[], char str2[]);
void removeString(char sourceStr[], int startIndex, int charNum);
void insertString(char srcString[], char insrtString[], int startIndex);
int replaceString(char srcString[], char stringToBeReplaced[], char stringReplacedBy[]);

int main(void){
	char srcText[256] = "Cowgirl Bebop is an impressive anime.";
	char rplcText[] = " ";
	char crtText[] = "";
	int stillFound;
	
	printf("%s\n\n", srcText);

	do{
		stillFound = replaceString(srcText, rplcText, crtText);
	}while(stillFound);
	
	printf("%s\n\n", srcText);
	
	printf("\n");
	system("PAUSE");
	return 0;
}


int replaceString(char srcString[], char stringToBeReplaced[], char stringReplacedBy[]){
	int strIndex;
	int length1 = strlen(stringToBeReplaced);
	
	strIndex = findString(srcString, stringToBeReplaced);
	
	if(strIndex != -1){
		removeString(srcString, strIndex, length1);
		insertString(srcString, stringReplacedBy, strIndex);
		return TRUE;
	}
	else{
		return FALSE;
	}
}


int findString(char str1[], char str2[]){ // find str2 in the str1
	int i, j;
	
	for(i = 0; str1[i] != '\0'; ++i){
		
		// find the initial of the string 2
		if(str1[i] == str2[0]){
			
			for(j = 0; str2[j] != '\0'; ++j){
				if(str1[i+j] != str2[j])
					break; // not the same as string 2
			}
			
			// found string 2
			if(str2[j] == '\0'){
				return i;
			}
		}
	}
	
	return -1;
}


void removeString(char sourceStr[], int startIndex, int charNum){
	 int connectIndex = startIndex + charNum;
	 
	 // move the remaining chracters to the left by charNum
	 for(; sourceStr[connectIndex] != '\0'; connectIndex++){
		 sourceStr[connectIndex - charNum] = sourceStr[connectIndex];
	 }
	 
	 sourceStr[connectIndex - charNum] = '\0';
}


void insertString(char srcString[], char insrtString[], int startIndex){
	int i;
	int lengthOfInsertion = strlen(insrtString);
	int lengthOfSource = strlen(srcString);
	
	// move a portion of string to the right by lengthOfInsertion slots
	for(i = lengthOfSource - 1; i >= startIndex; i--){
		srcString[i + lengthOfInsertion] = srcString[i];
	}
	
	// insrcString is inserted
	for(i = 0; insrtString[i] != '\0'; ++i){
		srcString[startIndex + i] = insrtString[i]; 
	}
	
	//  terminate the string with null character
	srcString[lengthOfSource + lengthOfInsertion] = '\0';
	
}

 */
// replace a string v0.1 (added return value)

/* 
// function prototypes
int compareString(const char string1[], const char string2[]);
void dictionarySort(struct entry dictEntries[], int entries);

// entry structure
struct entry
{
	char word[21];  // up to 20 characters for word
	char definition[161]; // up to 160 characters fot definintion
};


int main(void){
	int i;
	char searchWord[21];
	const int entries = 10;

	// array of structure containing word itself and its definintion (sorted in lexicographical order)
	struct entry Dict[1000] =  // its size is 1000 but it contains only 10 entries
	{
		{"estate",     "a large area of land in the country, usually with one large house on it and one owner"},
		{"filament",   "a very thin thread or wire"},
		{"forego",     "to not do or have something pleasant or enjoyable"},
		{"parabola",   "a curve in the shape of the imaginary line an object makes when it is thrown high in the air and comes down a little distance away"},
		{"bully",      "someone who uses their strength or power to frighten or hurt someone who is weaker"},
		{"query",      "a question that you ask to get information, or to check that something is true or correct"},
		{"receptacle", "a container for putting things in"},
		{"parse",      "to describe the grammar of a word when it is in a particular sentence"},
		{"taxonomy",   "the process or a system of organizing things into different groups that show their natural relationships"},
		{"allegation", "a statement that someone has done something wrong or illegal, but that has not been proved"}
	};
	
	for(i = 0; i < entries; ++i){
		printf("%20s   %s\n", Dict[i].word, Dict[i].definition); // width and 
	}

	printf("\n\n");
	dictionarySort(Dict, entries);
	
	for(i = 0; i < entries; ++i){
		printf("%20s   %s\n", Dict[i].word, Dict[i].definition);
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}

void dictionarySort(struct entry dictEntries[], int entries){
	int i, j;
	struct entry temp; 
	int compareResult;
	
	// selection sorting algorithm
	for(i = 0; i < entries - 1; ++i){
		for(j = i+1; j < entries; ++j){

			compareResult = compareString(dictEntries[i].word, dictEntries[j].word);
			if(compareResult == 1){
				
				// swap entry if entry i is greater than entry j
				strcpy(temp.word, dictEntries[j].word);
				strcpy(temp.definition, dictEntries[j].definition);
				
				strcpy(dictEntries[j].word, dictEntries[i].word);
				strcpy(dictEntries[j].definition, dictEntries[i].definition);

				strcpy(dictEntries[i].word, temp.word);
				strcpy(dictEntries[i].definition, temp.definition);
			}
		}
	}
}

int compareString(const char string1[], const char string2[]){
	int i = 0;
	
	while(string1[i] != '\0' && string1[i] == string2[i])
		++i;
	
	if(string1[i] < string2[i]){
		return -1;   // string1 is before string 2 in the lexicographical order
	}else if(string1[i] == string2[i]){
		return 0;
	}else{
		return 1;
	}
	
}

 */
// simply dictionary sorting program

/*
// function prototypes
void changeCase(char string[], int mode);

int main(void){
	char test1[] = "TO LOwErCAsE";
	char test2[] = "tO uPpeRcase";
	char test3[] = "To aLteRCaSE";
	
	changeCase(test1, -1);
	changeCase(test2, 1);
	changeCase(test3, 0);

	printf("%s\n", test1);
	printf("%s\n", test2);
	printf("%s\n", test3);

	printf("\n");
	system("PAUSE");
	return 0;
}


void changeCase(char string[], int mode){
	int i;

	// mode = 1 --- to uppercase
	// mode = 0 --- to altercase
	// mode = -1 --- to lowercse

	for(i = 0; string[i] != '\0'; ++i){

		if( string[i] >= 'A' && string[i] <= 'Z' && (mode == -1 || mode == 0) )
			string[i] -= ('A' - 'a'); // to lowercase

		else if( string[i] >= 'a' && string[i] <= 'z' && (mode == 1 || mode == 0) ){
			string[i] += ('A' - 'a'); // to uppercase
		}
	}
}

 */
// toLowercase/toUppercase/toAltercase


// the latest codes are below and previous ones are above


/* Author: Jorge  Date: 2016/9/22	
 * Purpose: 
 *             
 *         
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>



#define PI acos(-1.0)
#define FILE_NAME "coordinates.txt"

#define FILE_NAME1 "test1.txt"
#define FILE_NAME2 "test2.txt"
#define WIDTH 100 
#define HEIGHT 60
#define PI acos(-1.0)
#define THRESHOLD1 1.0e-6

#define TRUE 1
#define FALSE 0
#define ONE_LINE 81
#define maxLength 100

// void generateFibo(int x);
// generate fibonacci numbers using recursion method
// improvement: sort data in a txt file using this algorithm

// exercises

// As long as the two strings are different (no matter contain or not), program will end when it encounter two different characters due to the first condition.
// So it only has to make sure that the program will stop when the two strings are exactly the same, which means when the str1[i] = '\0' the character in str2
// is also null character. Therefore, using str[i] = '\0' is equal to specifying both conditions for two strings.



/*
// function prototypes
void changeCase(char string[], int mode);

int main(void){
	char test1[] = "TO LOwErCAsE";
	char test2[] = "tO uPpeRcase";
	char test3[] = "To aLteRCaSE";
	
	changeCase(test1, -1);
	changeCase(test2, 1);
	changeCase(test3, 0);

	printf("%s\n", test1);
	printf("%s\n", test2);
	printf("%s\n", test3);

	printf("\n");
	system("PAUSE");
	return 0;
}


void changeCase(char string[], int mode){
	int i;

	// mode = 1 --- to uppercase
	// mode = 0 --- to altercase
	// mode = -1 --- to lowercse

	for(i = 0; string[i] != '\0'; ++i){

		if( string[i] >= 'A' && string[i] <= 'Z' && (mode == -1 || mode == 0) )
			string[i] -= ('A' - 'a'); // to lowercase

		else if( string[i] >= 'a' && string[i] <= 'z' && (mode == 1 || mode == 0) ){
			string[i] += ('A' - 'a'); // to uppercase
		}
	}
}

 */


/*
// function prototypes
void intToStr(int number, char result[]); // using const because program only reads the string and will not change it.
void shiftRight(char arr[], int endIndex); // endIndex is exclusive


int main(void){
	int test1 = 23407;
	int test2 = -23047;
	
	char test1Str[101];
	char test2Str[101];
	
	intToStr(test1, test1Str);
	intToStr(test2, test2Str);
	
	printf("%s\n", test1Str);
	printf("%s\n", test2Str);
	
	printf("\n");
	system("PAUSE");
	return 0;
}


void intToStr(int number, char result[]){
	int i;
	int nextDigit;
	int isNegative = FALSE;
	
	
	if(number < 0){
		isNegative = TRUE;
		number *= -1;
	}
	
	for(i = 0; number != 0; ++i){
		nextDigit = number % 10;
		number /= 10;
		
		shiftRight(result, i);
		
		result[0] = nextDigit + '0';
	}
	
	if(isNegative){
		shiftRight(result, i);
		result[0] = '-';
		i++;
	}
	
	result[i] = '\0';
	
}

void shiftRight(char arr[], int endIndex){

	while(endIndex > 0){
		arr[endIndex] = arr[endIndex - 1];
		endIndex--;
	}
}
 */