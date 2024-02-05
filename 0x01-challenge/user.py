#!/usr/bin/python3
""" Documentationnnnnnnnnnnnnnnnnnnnnnn """


class User():
    """ Documentationnnnnnnnnnnnnnnnnnnnnnn """

    def __init__(self):
        """ Documentationnnnnnnnnnnnnnnnnnnnnnn """
        self.__email = None

    @property
    def email(self):
        """ Documentationnnnnnnnnnnnnnnnnnnnnnn """
        return self.__email

    @email.setter
    def email(self, value):
        """ Documentationnnnnnnnnnnnnnnnnnnnnnn """
        if type(value) is not str:
            raise TypeError("email must be a string")
        self.__email = value


if __name__ == "__main__":
    """ Documentationnnnnnnnnnnnnnnnnnnnnnn """
    u = User()
    u.email = "john@snow.com"
    print(u.email)
