#include <stdio.h>
#include <stdlib.h>

char assignGrade(float avg)
{
   if (avg >= 90)
      return 'A';
   else if (avg >= 80)
      return 'B';
   else if (avg >= 70)
      return 'C';
   else if (avg >= 60)
      return 'D';
   else
      return 'F';
}

int validScore(int score)
{
   return score >= 0 && score <= 100;
}

int main()
{

   typedef struct Student_struct
   {
      char lastName[26];
      char firstName[26];
      int midterm1;
      int midterm2;
      int final;
      char grade;
   } Student;

   char filename[26];
   Student students[20];
   int i = 0;
   int count = 0;
   float totalMidterm1 = 0, totalMidterm2 = 0, totalFinal = 0;

   printf("Enter the filename: ");
   scanf("%s", filename);

   FILE *file = fopen(filename, "r");
   if (file == NULL)
   {
      printf("Could not open file %s\n", filename);
      return 1;
   }

   while (i < 20)
   {
      if (fscanf(file, "%s\t%s\t%d\t%d\t%d\n", students[i].lastName, students[i].firstName,
                 &students[i].midterm1, &students[i].midterm2, &students[i].final) != 5)
      {
         printf("Invalid input format\n");
         return 1;
      }

      if (!validScore(students[i].midterm1) || !validScore(students[i].midterm2) || !validScore(students[i].final))
      {
         printf("Invalid score\n");
         return 1;
      }

      totalMidterm1 += students[i].midterm1;
      totalMidterm2 += students[i].midterm2;
      totalFinal += students[i].final;
      i++;
   }

   if (fscanf(file, "%s", filename) != EOF)
   {
      printf("Too many students\n");
      return 1;
   }

   count = i;
   fclose(file);

   for (i = 0; i < count; i++)
   {
      float avg = (students[i].midterm1 + students[i].midterm2 + students[i].final) / 3.0;
      students[i].grade = assignGrade(avg);
   }

   file = fopen("report.txt", "w");
   for (i = 0; i < count; i++)
   {
      fprintf(file, "%s\t%s\t%d\t%d\t%d\t%c\n", students[i].lastName, students[i].firstName,
              students[i].midterm1, students[i].midterm2, students[i].final, students[i].grade);
   }

   fprintf(file, "Average:\t\t%.2f\t%.2f\t%.2f\n", totalMidterm1 / count, totalMidterm2 / count, totalFinal / count);
   fclose(file);

   return 0;
}
