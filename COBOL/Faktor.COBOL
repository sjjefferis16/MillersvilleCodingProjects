IDENTIFICATION DIVISION.
PROGRAM-ID. FAKTOR.
DATA DIVISION.
WORKING-STORAGE SECTION. 
01 WK-INPUT. 
   05 WK-INP-1 PIC X(10) VALUE SPACES.
01 FIRST-INPUT. 
   05 FIRST-INP-1 PIC X(10) VALUE SPACES.
01 LAST-INPUT. 
   05 LAST-INP-1 PIC X(10) VALUE SPACES.
01 FIRST-SPACES. 
   05 FIRST-INP-1 PIC X(10) VALUE SPACES.
01 LAST-SPACES. 
   05 LAST-INP-1 PIC X(10) VALUE SPACES.
05 FORMATTED-INTEGER          PIC Z(05).
01 VAL PIC S9(10) VALUE 0.
01 FIRST-VAL PIC S9(4) VALUE 0.
01 LAST-VAL PIC S9(4) VALUE 0.
PROCEDURE DIVISION. 
ACCEPT WK-INPUT. 
UNSTRING WK-INPUT DELIMITED BY SPACE
    INTO FIRST-INPUT
         LAST-INPUT
END-UNSTRING.
COMPUTE FIRST-VAL = FUNCTION NUMVAL (FIRST-INPUT).
COMPUTE LAST-VAL = FUNCTION NUMVAL (LAST-INPUT).

SUBTRACT 1 FROM LAST-VAL.
MULTIPLY LAST-VAL BY FIRST-VAL GIVING VAL.
ADD 1 TO VAL.

MOVE VAL TO FORMATTED-INTEGER.
MOVE FORMATTED-INTEGER TO WK-INPUT.
UNSTRING WK-INPUT DELIMITED BY ALL SPACES
    INTO FIRST-SPACES
         LAST-SPACES
DISPLAY LAST-SPACES.
STOP RUN.