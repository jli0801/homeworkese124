#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LEN 32
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void compareString(char arrayIn)
{
	  if (strcmp (arrayIn, "start") == 0 || strcmp (arrayIn, "START") == 0)
		{  
			fprintf (f_w, " keyword START ");
		}
		else if (strcmp (arrayIn, "stop") == 0 || strcmp (arrayIn, "STOP") == 0)
		    {
				fprintf (f_w, " keyword STOP ");
			}
		  else if (strcmp (arrayIn, "speed") == 0 || strcmp (arrayIn, "SPEED") == 0)
		      	{
				  fprintf (f_w, " keyword SPEED "); 
				}
					else if (strcmp (arrayIn, "set") == 0 || strcmp (arrayIn, "SET") == 0)
				    {
						fprintf (f_w, " keyword SET ");
					}
						else if (strcmp (arrayIn, "alarm") == 0 || strcmp (arrayIn, "ALARM") == 0)
					    {
							fprintf (f_w, " keyword ALARM ");
						}
							else if (strcmp (arrayIn, "move") == 0 || strcmp (arrayIn, "MOVE") == 0)
						    {
								fprintf (f_w, " keyword MOVE ");
							}
								else if (strcmp (arrayIn, "left") == 0 || strcmp (arrayIn, "LEFT") == 0)
							    {
									fprintf (f_w, " keyword LEFT ");
								}
									else if (strcmp (arrayIn, "right") == 0 || strcmp (arrayIn, "RIGHT") == 0)
								    {
										fprintf (f_w, " keyword RIGHT ");
									}
										else if (strcmp (arrayIn, "forward") == 0 || strcmp (arrayIn, "FORWARD") == 0)
									    {
											fprintf (f_w, " keyword FORWARD ");
										}
											else if (strcmp (arrayIn, "backward") == 0 || strcmp (arrayIn, "BACKWARD") == 0)
										    {
												fprintf (f_w, " keyword BACKWARD ");
											}
												else if (strcmp (arrayIn, "red") == 0 || strcmp (arrayIn, "RED") == 0)
											    {
													fprintf (f_w, " keyword RED ");
												}
													else if (strcmp (arrayIn, "blue") == 0 || strcmp (arrayIn, "BLUE") == 0)
												    {
														fprintf (f_w, " keyword BLUE ");
													}
														else if (strcmp (arrayIn, "green") == 0 || strcmp (arrayIn, "GREEN") == 0)
												    	{
															fprintf (f_w, " keyword GREEN ");
														}
															else //end of IF statement
															{
																fprintf (f_w, "Identifier: %s", arrayIn); 
															}
}

void compareSymbols (char sym, char nextSym, FILE f_w)
{
	 if (sym == '=') 
		  {
             fprintf (f_w, " EQUAL ");
            
          }   
		  else if (sym == ';') 
			{
               fprintf (f_w, " SEMICOLON \n");
              
		    }
				else if (sym == ',') 
				{
	               fprintf (f_w, " COMMA \n");
	                
			    }
					else if (sym == ':') 
					{
		               fprintf (f_w, " COLON \n");
		                
				    }
						else if (sym == '?') 
						{
			               fprintf (f_w, " QUESTION MARK \n");
			                 
					    } 
							else if (sym == '+') 
							{
				               fprintf (f_w, " ADD \n");
				                 
						    }
						    	else if (sym == '-') 
								{
					               fprintf (f_w, " SUBTRACT \n");
					                 
							    }
							    	else if (sym == '/') 
									{
						               fprintf (f_w, " DIVIDE \n");
						                 
								    }
								    	else if (sym == '*') 
										{
							               fprintf (f_w, " MULTIPLY \n");
							                 
									    }
									    	else if (sym == '<') 
											{
												 
												if (sym == '=')
												{
									               fprintf (f_w, " LESS THAN OR EQUAL TO  \n");
									                 
									          	}
										    }
											    else if (sym == '>') 
												{
													 
													if (nextSym == '=')
													{
										               fprintf (f_w, " MORE THAN OR EQUAL TO  \n");
										                 
										          	}
											    }
													    else if (sym == '+') 
														{
															 
															if (nextSym == '+')
															{
												               fprintf (f_w, " INCREMENT  \n");
												                 
												          	}
													    }
														    else if (sym == '-') 
															{
																 
																if (nextSym == '-')
																{
													               fprintf (f_w, " DECREMENT  \n");
													                 
													          	}
														    }
															    else if (sym == '+') 
																{
																	 
																	if (nextSym == '=')
																	{
														               fprintf (f_w, " ADD ONTO  \n");
														                 
														          	}
															    }
																    else if (sym == '-') 
																	{
																		
																		if (nextSym == '=')
																		{
															               fprintf (f_w, " SUBTRACT FROM \n");
															               
															          	}
																    }	
}
int main(int argc, char *argv[]) {
	//so like chatbot in apcs :3 
	//take in inputs and sperate tokens 
	//start skip, stop, read input, 
	//like a robot
	//identifier, number, keyword, terminator, separator (probably ; or , ), 
	//make a scanner without using scanf
	//everything coming from keyboard is a char 
	//char 3,6,7 has to be converted into int 367
	//In ASCII table, HEXDECIMAL 30 - 39 represents 0-9 on the keyboard 
	//subtract the character from 30 to get the number
	
	//'5' '0' '1' '4' 
	//take '5'-'0' to get 5 b/c 35-30 =5
	//take '0' -'0' to get 0 b/c 30-30 =0
	//go on to get 5014
	
	//will identify, keywords, identifiers, special chars, white space, next line
	
	
	
	//POINTER IS A STAR POINTERRRRRRR
	//In order to use a file, you have to declare a var with a type File and use a pointer!
	//i hate files with a passion 
	FILE *f;
	FILE *f_w; //write into new file 
	double value = 0.0;
	int index = 0;
	char c, cNext, identifier [LEN];
	int decimalHolder [LEN];
	int place = 0;
	double valueInPlace = 0.0;
	//IDENTIFIER HAS AN ARRAY LENGTH OF 32 FOR 32 BITS LEN IS NOW 32
	
	//fopen ( name of file, "r") open the file in the read mode; not modifying 
	//write mode : "w" read mode: "r"
	/* r+	Opens a text file for reading and writing.
	w+	Open for reading and writing and create the file if it does not exist. If the file exists then make it blank.
	a+	Open for reading and appending and create the file if it does not exist. The reading will start from the beginning, but writing can only be appended.*/
	
	//parenthesis and then if condition 
	if (!(f = fopen ("hw3.txt", "r"))) 
	{
       printf ("File %s cannot be opened\n", "hw3.txt");
       return 1;
       //ends program with a one!
	}

	f_w = fopen("results3.txt", "w");
	//create new file with new inputs 
	
	//read the first character of the file'
	c = fgetc (f);
	
	//EOF = END OF FILE
	//keeps reading character before the file ends 
	while (c != EOF) 
	{	
	
	    while (c == ' ' || c == '\n')
		{ //logic or 
	        c = fgetc (f);
	    }
	  //c can be a letter or a digit or ; or = or EOF
	  //between a and z so it is a letter 
	  
	   if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))  
	   {
	  //lower upper or digit 
	   
	    while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
		{
			
			identifier [index] = c;
			index++;
			c = fgetc(f);
		}
		
	    identifier [index] = '\0';
	    index = 0;
	    
	//big ass if statement gone 
	  compareString();
	  c = fgetc(f);
	  	}
	  	
		else if(c == '+' || c >= '0' && c <= '9') 
			{
			//	c = fgetc (f);
				//what if c is a . so it's a decimal \
				//ORDER IS WRONG THINK MORE 
				while (c == '.')
	        	{
	        		c = fgetc(f);
	        		while(c >= '0' && c <= '9' && place < LEN )
	        		{
		        		valueInPlace = valueInPlace * 10 + c - '0';
		        		decimalHolder[place] = valueInPlace;
		        		place++;
		        		c = fgetc (f);
	        		}
	        		place = 0;
	        		valueInPlace = 0.0;
	        	}
	        	//whole numbers first 
				if (c >= '0' && c <= '9' && c != '.') 
			  	{
			      while (c >= '0' && c <= '9') 
				  {
				    value = value * 10 + c - '0';
				    c = fgetc (f);
			      } // while
	        	} // if 
	        	
	        	while(decimalHolder[place] >= 0)
	        	{
	        		double temp1;
	        		temp1 = temp1 * 10 + decimalHolder[place] - '0';
	        		value += temp1 * pow(0.1, decimalHolder[place]+1);
	        		//DO MATH
	        	}
	        	//resetting 
	        	int j;
	        	for(j = 0; j<LEN; j++)
	        	{
	        		decimalHolder[j] = -1;
	        	}
	        	fprintf (f_w, "Value = %f ", value);
		    	value = 0.0;
	        }
	        else if (c == '-' || c >= '0' && c <= '9') //negative number 
	        {
	        	//	c = fgetc (f);
	        	//what if c is a . so it's a decimal 
	        	while (c == '.')
	        	{
	        		c = fgetc(f);
	        		while(c >= '0' && c <= '9' && place < LEN )
	        		{
		        		valueInPlace = valueInPlace * 10 + c - '0';
		        		decimalHolder[place] = valueInPlace;
		        		place++;
		        		c = fgetc (f);
	        		}
	        		place = 0;
	        		valueInPlace = 0.0;
	        	}
	        	
	        	if (c >= '0' && c <= '9') 
				{
				      while (c >= '0' && c <= '9') 
					  {
					    value = value * 10 + c - '0';
					    c = fgetc (f);
				      } // while
	        	}
	        	
	        	while(decimalHolder[place] >= 0)
	        	{
	        		double temp2;
	        		temp2 = temp2 * 10 + decimalHolder[place] - '0';
	        		value += temp2 * pow(0.1, decimalHolder[place]+1);
	        		//DO MATH
	        	}
	        	//resetting 
	        	int k;
	        	for(k = 0; k<LEN; k++)
	        	{
	        		decimalHolder[k] = -1;
	        	}
	        	
		      	
	        	value *= -1;
			    fprintf (f_w, "Value = %f ", value);
			    value = 0.0;
	        }
	    else
	    {
	    	cNext = fgetc(f);
	    	compareSymbol(c,cNext,f_w);
	    	c = fgetc(f);
	    }
        
        //symbol 
       //special symbols
    	} // while
	
    //FOR NEGATIVE AND POSITIVE NUMBERS WITH A + OR -: CHECK IF THERES ANYTHING NEXT TO IT AND IF NOT
    //THEN SPECIAL OPERATOR OR WHEN " ".
    //IF NUMBER THEN IT'S NEGATIVE OR POS.
	    
    fclose(f);
    fclose(f_w);
    
    
	return 0;
}
