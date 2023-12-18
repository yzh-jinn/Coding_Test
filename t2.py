import csv

with open("newfile.csv",'w') as file:

    csv_header = ["Name", "Chinese", "English", "Math"]

    csv_writer = csv.DictWriter(file, csv_header)

    rows = [
        {
            "Name": "Mike",
            "Chinese" : 90,
            "English" : 100,
            "Math" : 120
        },
        {
            "Name": "Bob",
            "Chinese" : 89,
            "English" : 66,
            "Math" : 89
        },
        {
            "Name": "Emmy",
            "Chinese" : 60,
            "English" : 80,
            "Math" : 100
        }
    ]

    csv_writer.writeheader()
    csv_writer.writerows(rows)
    
if __name__ == '__main__' :
    filename = "newfile.csv"
