struct birthDate
{
	int day;
	int month;
	int year;
};
struct student
{
	char surName[50];
	struct birthDate DoB;

} st;

#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("enter the record of the student: ");
	scanf("%s", st.surName);
	scanf("%d%d%d", &st.DoB.day, &st.DoB.month, &st.DoB.year);

	printf("student record:");
	puts(st.surName);
	printf("%d\n%d\n%d\n", st.DoB.day, st.DoB.month, st.DoB.year);
	return 0;
}