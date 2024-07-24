#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "StringCalculator.h"

int StringCalculator::add(const std::string& numbers) {
    if (numbers.empty()) {
        return 0;
    }
    return ::add(numbers.c_str());
}


// Function to add values in an array if they are less than 1001
int add_arr(int *arr, int cnt)
{
    int total = 0;
    for(int i = 0; i < cnt; i++)
    {
        if(arr[i] < 1001)
        {
            total += arr[i];
        }
    }
    return total;
}

// Function to check if a character is a digit
int check_num(const char ch)
{
    return (ch >= '0' && ch <= '9');
}

// Function to convert string to numbers and store in an array
void strtonum(const char *ch, int *num_arr, int *cnt)
{
    int num = 0;
    int i = 0;
    while(ch[i] != '\0')
    {
        if(check_num(ch[i]))
        {
            num = num * 10 + (ch[i] - '0');
            if(!check_num(ch[i + 1]))
            {
                num_arr[*cnt] = num;
                (*cnt)++;
                num = 0;
            }
        }
        i++;
    }
}

// Function to sum the numbers in a string
int sum(const char *ch)
{
    int cnt = 0;
    int total = 0;
    int num_arr[100] = {0};  // Ensure this array is large enough for your use case
    strtonum(ch, num_arr, &cnt);
    total = add_arr(num_arr, cnt);
    return total;
}

// Function to check if a character is a negative number indicator
int check_neg(const char *ch)
{
    int i = 0;
    while(ch[i] != '\0')
    {
        if(ch[i] == '-' && check_num(ch[i + 1]))
        {
            return 1;
        }
        i++;
    }
    return 0;
}

// Function to check if a string is empty
int check_empty(const char* ch)
{
    return (strlen(ch) == 0);
}

// Function to check if a string is either negative or empty
int check_neg_empty(const char *ch)
{
    return check_neg(ch) || check_empty(ch);
}

// Function to validate the input string
int check_string(const char *ch)
{
    return (ch != NULL) && !check_neg_empty(ch);
}

// Main add function
int add(const char *ch)
{
    if(check_string(ch))
    {
        int total = sum(ch);
        if(total > 0)
        {
            return total;
        }
        return 0;
    }
    return -1;
}
