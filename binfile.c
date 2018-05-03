// ============================================================================
// File: binfile.c (Spring 2018)
// ============================================================================
// Programmer: Jennifer King
// Date: 5/3/2018
// Project: Binary File I/O
// Professor: Scott Edwards
// Class: CSCI 223F
// Description:
// This program reads a binary file of records containing phone numbers and
// corresponding room numbers. It derives the number of records contained in
// the binary file and allocates an array of structures of that size. Then it
// opens the binary file and reads all the data into the dynamic array with a
// single call to "fread". Once the data has been read, the user is prompted
// for a filename, which is used to create a text file, and the records are
// written to the output file formatted for human consumption.
// ============================================================================

#include    <ctype.h>
#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>


// defined constants
#define BUFLEN          256
#define DAT_FNAME       "records.dat"


// structure declarations
typedef struct  PhoneRoom
{
    int         phone;
    int         room;

} PhoneRoom;



// function prototypes
void    WriteRecs(const PhoneRoom  recs[], int  numRecs, FILE*  fPtr);


// ==== main ==================================================================
//
// ============================================================================

int     main(void)
{
    int                 counter;
    PhoneRoom   myRecs;

    // open the input file that contains the binary records
    FILE *myFile;
    myFile = fopen(DAT_FNAME, "rb");
    if(!myFile)
    {
        puts("Unable to open file!");
        return 1;
    }
    // calculate the number of records stored in the file and display the total
    // to stdout
    for(counter = 1; counter <= BUFLEN; counter++)
    {
        myRecs.phone = counter;
        fwrite(&myRecs, sizeof(struct PhoneRoom), 1, myFile);
    }

    // allocate an array of records large enough to hold all of the data


    // read all the file records into the allocated buffer


    // get the name of the output file from the user and open it


    // call WriteRecs to write out the records in formatted text


    // close the files and release allocated memory
    fclose(myFile);

    return 0;

}  // end of "main"



// ==== WriteRecs =============================================================
//
// This function writes the contents of the PhoneNum array to the output stream
// pointed to by the fPtr parameter. The binary data is formatted for human
// eyes as the records are written to the output stream. The total number of
// records written is returned to the caller.
//
// Input:
//      recs        -- the base address of an array of PhoneNum records
//
//      numRecs     -- the number of elements in the array
//
//      fPtr        -- a pointer to the output stream to which the records
//                     are written
//
// Output:
//      Nothing.
//
// ============================================================================

void    WriteRecs(const PhoneRoom  recs[], int  numRecs, FILE*  fPtr)
{
    ???

}  // end of "WriteRecs"
