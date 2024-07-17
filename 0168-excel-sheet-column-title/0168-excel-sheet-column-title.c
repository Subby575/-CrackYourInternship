char* convertToTitle(int columnNumber) {
   char* result = (char*)malloc(10 * sizeof(char)); // Adjust size if needed
    int index = 0;

    while (columnNumber > 0) {
        columnNumber--; // Adjust for 1-based indexing
        int remainder = columnNumber % 26;
        result[index++] = 'A' + remainder;
        columnNumber /= 26;
    }

    result[index] = '\0';
    for(int i=0;i<index/2;i++)
    {
        char temp=result[i];
        result[i]=result[index-i-1];
        result[index-i-1]=temp;
    }


    return result;
}