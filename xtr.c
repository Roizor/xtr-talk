// This file is quite important

int xtr_talk_length = 50;






char* xtr_possible = "abcdefghijklmnopqrstuvwxyz:;1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ€¢$¢¥.!,/<>?";

int xtr_length() {
    // initializing count variable (stores the length of the string)
    int count; 
    
    // incrementing the count till the end of the string
    for (count = 0; xtr_possible[count] != '\0'; ++count);
    
    // returning the character count of the string
    return count; 
}