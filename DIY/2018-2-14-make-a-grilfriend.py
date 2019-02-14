#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Author: Dicer
# @Date:   2019-02-14 18:39:00

import random

class People():

    def __init__(self, name, age = 18, height = 160, weight = 100, IQ = 105,
        EQ = 105):
        self.name, self.age, self.height, self.weight, self.IQ, self.EQ = (
        name, age, height, weight, IQ, EQ)


class Woman(People):

    def __init__(self, name, age = 18, height = 160, weight = 100, IQ = 105,\
        EQ = 105, cup = 'A', figure = 'C'):
        super(Woman, self).__init__(name, age, height, weight,
        IQ, EQ)
        self.cup = cup
        self.figure = figure
        self.__real_age = age
        self.age = min(self.__real_age, 18)
        self.__real__weight = self.weight
        self.weight = min(self.__real__weight - 10, 110)


class GirlFriend(Woman):

    def __init__(self, name, age = 18, height = 160, weight = 100, IQ = 105,
        EQ = 105, cup = 'A', figure = 'C', love_index = 85):
        super(GirlFriend, self).__init__(name, age, height,
                                weight, IQ, EQ, cup, figure)
        self.love_index = love_index

    """some method"""
    def show(self):
        print("I am {}, {} years old.\n".format(self.name, self.age))
        print("height: {}\nweight: {}".format(self.height, self.weight))
        print("IQ: {}\nEQ: {}".format(self.IQ, self.EQ))
        print("cup: {}\nfigure: {}".format(self.cup, self.figure))
        print("The index of I love you is {}".format(self.love_index))

    def cooking(self, food = 'rice'):
        cooking_score = (max(age-18, 0)*10 + IQ + EQ - (ord(cup) - chr('A'))*30
         + love_index + random.randint())//3
        print("The {} is ready!\nCooking-Score {}.(Maximun value is 300)".format(food,
        min(cooking_score, 300)))

def creat_grilfriend():
    names = ["凌波丽", "saber", "c.c",
            "东城绫", "夏娜", "Clannad",
            "凉宫春日", "西野司", "桂雏菊",
            "御坂美琴", "雨宫优子", "伊卡洛斯",
            "三千院凪"]
    name = random.choice(names)
    age = random.randint(16, 25)
    height = 150 + random.randint(0, 25)
    weight = 90 + random.randint(0, 30)
    IQ = 90 + random.randint(0, 50)
    EQ = 90 + random.randint(0, 50)
    cup = random.choice(['A', 'B', 'C', 'D', 'E'])
    figure = random.choice(['SSR', 'SR', 'R', 'A', 'B', 'C'])
    love_index = 75 + random.randint(0, 25)
    girlfriend = GirlFriend(name, age, height, weight, IQ, EQ, cup, figure, love_index)
    return girlfriend

def main():
    
    print("Do you want to creat you girlfriend by youself(1) or random(2)?")
    
    case = int(input())
    if case == 1:
        print("Type parameters of you girlfriend:")
        print("In order of:\n1. name\n2. age\n3. height\n4. weight\n5. IQ")
        print("6. EQ\n7. cup\n8. figure\n1. love_index")
        name = input()
        age = int(input())
        height = int(input())
        weight = int(input())
        IQ = int(input())
        EQ = int(input())
        cup = input()
        figure = input()
        love_index = int(input())
        mygirlfirend = GirlFriend(name, age, height, weight, IQ, EQ, cup, figure, love_index)
    elif case == 2:
        mygirlfirend = creat_grilfriend()

    mygirlfirend.show()

if __name__ == '__main__':
    main()
