#include <stdio.h>

int stringLength(char str[])
{
  int length = 0;
  while (str[length] != '\0')
  {
    length++;
  }
  return length;
}

void stringConcat(char str1[], char str2[])
{
  int i = 0, j = 0;

  while (str1[i] != '\0')
  {
    i++;
  }

  while (str2[j] != '\0')
  {
    str1[i] = str2[j];
    i++;
    j++;
  }

  str1[i] = '\0';
}

int stringCompare(char str1[], char str2[])
{
  int i = 0;

  while (str1[i] != '\0' && str2[i] != '\0')
  {
    if (str1[i] != str2[i])
      return str1[i] - str2[i];
    i++;
  }

  return str1[i] - str2[i];
}

void stringCopy(char dest[], char src[])
{
  int i = 0;
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
}

int main()
{
  char str1[100], str2[100], result[100];
  int choice;
  int cmpResult;

  do
  {
    printf("\n===== STRING OPERATIONS MENU =====\n");
    printf("1. Concatenate two strings\n");
    printf("2. Compare two strings\n");
    printf("3. Find length of a string\n");
    printf("4. Copy one string to another\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();

    switch (choice)
    {
    case 1:
      printf("Enter first string: ");
      gets(str1);
      printf("Enter second string: ");
      gets(str2);
      stringConcat(str1, str2);
      printf("Concatenated string: %s\n", str1);
      break;

    case 2:
      printf("Enter first string: ");
      gets(str1);
      printf("Enter second string: ");
      gets(str2);
      cmpResult = stringCompare(str1, str2);
      if (cmpResult == 0)
        printf("Strings are equal.\n");
      else if (cmpResult > 0)
        printf("First string is greater.\n");
      else
        printf("Second string is greater.\n");
      break;

    case 3:
      printf("Enter a string: ");
      gets(str1);
      printf("Length of the string: %d\n", stringLength(str1));
      break;

    case 4:
      printf("Enter a string to copy: ");
      gets(str1);
      stringCopy(result, str1);
      printf("Copied string: %s\n", result);
      break;

    case 5:
      printf("Exiting\n");
      break;

    default:
      printf("Invalid choice\n");
    }
  } while (choice != 5);

  return 0;
}
