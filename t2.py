# new_dict = {key_expression: value_expression for item in iterable if conditions}

# key_expression: value_expression     # 新字典的格式
# item   # key:value
# iterable  # 筛选条件，比如： student.items

# 举例

grades = {
    "Bob" : 40,
    "Mike" : 70,
    "Emmy" : 120
}

new_grades = {
    name: grade
    for name, grade
    in grades.items()
    if grade >= 60
}

print(new_grades)
