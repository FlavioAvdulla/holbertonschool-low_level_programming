#include <stdio.h>
#include <stdlib.h>

struct User
{
	char *name;
	char *email;
	int age;
};

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;
	
	return user;
}

int main(void)
{
	struct User *user;
	user = new_user("Foo", "foo@foo.bar", 98);
	if (user == NULL)
	return (1);
	
	printf("User %s created !\n", user->name);
	printf("His email is: %s\n", user->email);
	printf("And he's %d years old.", user->age);
	
	return (0);
}