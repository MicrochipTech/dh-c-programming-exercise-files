/*###############################################################################
# STEP 1a: Add variable declarations to make the variables defined in File1_09.c
#          available to any C source file that includes this header file.
#          (intVariable1, intVariable2, product)
###############################################################################*/
       
extern int intVariable1;    //### Reference to externally defined "intVariable1"
extern int intVariable2;    //### Reference to externally defined "intVariable2"
extern int product;         //### Reference to externally defined "product"

/*-------------------------------------------------------------------------------
  Function Prototypes
-------------------------------------------------------------------------------*/
/*###############################################################################
# STEP 1b: Add a function prototype to make multiply_function() defined in
#          File1_09.c available to any C source file that includes this header
#          file.
###############################################################################*/
     
int multiply_function(int x, int y);    //### Function prototype for multiply_function()
