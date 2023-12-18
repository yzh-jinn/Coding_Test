import os

with open("new_py.py", "w") as ob1:
    ob1.write("hello this is my first time to create a new file which names 'new_py.py'")

os.rename("new_py.py", "new_py")