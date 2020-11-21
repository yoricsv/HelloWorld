/*
  *****************************************************************************************
  *                                    It's C Code                                        *
  *****************************************************************************************
  *****************************************************************************************
  *                           The PREPROCESSOR DIRECTIVEs                                 *
  *****************************************************************************************
  *****************************************************************************************
  *       #include (the preprocessor directive) - addict a code from another file;        *
  *****************************************************************************************
  *  <STDIO.H> - standard library of Input/Output function on C                           *
  *  <LOCALE.H> - standard library contain of different language symbols                  *
  *  <LINITS.H> - contain MAX / MIN values of C variable types                            *
  *****************************************************************************************
*/
// INCLUDES CODE BEGIN //
#include <stdio.h>
#include <locale.h>
// INCLUDES CODE END //

/*
  *****************************************************************************************
  *                                 The MAIN function                                     *
  *****************************************************************************************
  *  int - function type must returned some integer value after operated;                 *
  *  MAIN - function name;                                                                *
  *  void - variable type (don't get/return any values)                                   *
  *  ( ... ) - there is write everything we wanna take to the function                    *
  *  { ... } - function body. There is contained all instructions.                        *
  *****************************************************************************************
*/
// MAIN FUNCTION BEGIN //
int main(void)
{
	// CODE/INSTRUCTIONS BEGIN //
/*
  *****************************************************************************************
  *                              CHECK program operations                                 *
  *****************************************************************************************
  *  printf - the function display our information on console;                            *
  *  ( ... ) - there is contained the information what we wanna show                      *
  *****************************************************************************************
*/
	// CHECK PROGRAM OPERATIONS BEGIN //

	printf("Hello, World!");
	printf("\t<-- (There is text displayed without changing localization set (Default))\r\n");

	// CHECK PROGRAM OPERATIONS END //

/*
  *****************************************************************************************
  *                CHANGE LOCALIZATION for right display local SYMBOLS                    *
  *****************************************************************************************
  *  SETLOCALE - function allow to use difference local symbols                           *
  *  LC_ALL (Locate Categories) - point out to switch all localization functions on       *
  *  Ru-RU - switch on all localization function on for Russian (Ru-RU by list of LCID)   *
  *****************************************************************************************
*/
	// SET RIGHT LOCALIZATION BEGIN //
	setlocale(LC_ALL, "Ru-RU");
	// SET RIGHT LOCALIZATION END //

	// CHECK APPLIED RIGHT RUSSIAN SYMBOLIC LOCALIZATION BEGIN //
	printf("Привет, Мир!");
	printf("\t<-- (There is text displayed use by Russian localization symbols set)\r\n");
	// CHECK APPLIED RIGHT RUSSIAN SYMBOLIC LOCALIZATION END //

/*
  *****************************************************************************************
  *                          CHECK OPERATION MAIN FUNCTION                                *
  *****************************************************************************************
  *  RETURN - function show the main function operated all instructions                   *
  *  0 - good, other - somewhere have a trouble                                           *
  *****************************************************************************************
*/
	// CHECK OPERATION MAIN FUNCTION BEGIN //
	return 0;
	// CHECK OPERATION MAIN FUNCTION END //

	// CODE/INSTRUCTIONS END //
}
// MAIN FUNCTION END //