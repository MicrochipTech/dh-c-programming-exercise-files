/*###############################################################################
# STEP 2a: Add variable declarations to make the variables defined in File2_09.c
#          available to any C source file that includes this header file.
#          (floatVariable1, floatVariable2, quotient, intQuotient)
###############################################################################*/
      
extern float floatVariable1;    //### Reference to externally defined "floatVariable1"
extern float floatVariable2;    //### Reference to externally defined "floatVariable2"
extern float quotient;          //### Reference to externally defined "quotient"
extern int intQuotient;         //### Reference to externally defined "intQuotient"

/*-------------------------------------------------------------------------------
  Function Prototypes
-------------------------------------------------------------------------------*/
/*###############################################################################
# STEP 2b: Add a function prototype to make divide_function() defined in
#          File2_09.c available to any C source file that includes this header
#          file.
###############################################################################*/
      
float divide_function(float x, float y );   //### Function prototype for divide_function()
