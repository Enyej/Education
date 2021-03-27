import pathlib


def parseFile(name):
    dict = {}
    with open(name, 'r') as f:
        t = f.readline(-1)
        line = f.readline(-1)

        while line != "textLines:\n":
            dict[line.replace("\n", "")] = ""
            line = f.readline(-1)
        line = f.readline(-1)
        indexOfSpeech = 0
        while line != "":
            indexOfSpeech += 1
            index = line.index(":")
            role = line[:index]
            dict[role] += str(indexOfSpeech) + ") " + line[index + 2:]
            line = f.readline(-1)
            while line.startswith(" "):
                dict[role] += line
                line = f.readline(-1)
        for role in dict.items():
            print(role[0] + "\n" + role[1])


parseFile(str(pathlib.Path().absolute()) + "\\roles.txt")
