import math //this code runs fine for me but when I submit it to codequest academy it says it has a runtime error
cases = int(input().rstrip())

for i in range(cases):
    line = int(input().rstrip())
    
    print(line, end = " ")
    
    #yang yin
    if line%2==0:
        print("Yang", end = " ")
    else:
        print("Yin", end = " ")
        
    #element
    elements = ["Wood", "Fire", "Metal", "Water", "Earth"]
    element = line - 4
    element = element%10
    element = math.floor(element/2)
    print(elements[element], end = " ")
    
    #animal
    animallist = ["Rat","Ox","Tiger","Rabbit","Dragon","Snake","Horse","Goat","Monkey","Rooster","Dog","Pig"]
    year = line - 4
    year = year%12
    print(animallist[year])
        
