flag = []
class Positivetable:
    a = 0
    b = 0
    A = []
    B = []
    def __init__(self, da, db):
        self.a = da
        self.b = db

    def putin(self):
        for i in range(self.a) :
            print(i)
            m = input() - 1
            self.A.append(m)
        self.A.append(self.b + 1)
        #print("hhh\n")
        for j in range(self.b) :
            print(j)
            m = input()
            self.B.append(m)
       # print("zzz\n")
       
    def findrode(self, begin, end):
        for i in range(self.a) :
            flag.append(True)
        for i in self.B[self.A[begin]:self.A[begin + 1]] :
            if flag[self.B[i]] :
                if self.B[i] == end :
                    print("I find it!\n")
                    return
                flag[self.B[i]] = False
                findrode(self, B[i], end)
                flag[self.B[i]] = True

x = input()
y = input()
pattern = Positivetable(x, y)
#print(pattern.a, pattern.b)
#print(pattern.A,"~~\n")
pattern.putin()
#print(pattern.A,"~~\n")
pattern.findrode(0, 3)

